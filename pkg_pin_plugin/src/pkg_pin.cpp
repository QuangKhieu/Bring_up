#include "pkg_pin_plugin/pkg_pin.hpp"


std::vector<uint8_t> batt_temp_cmd = {0x4E,0x57,0x00,0x13,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x82,0x00,0x00,0x00,0x00,0x68,0x00,0x00,0x01,0xA8};
std::vector<uint8_t> batt_power_tube_temp_cmd = {0x4E,0x57,0x00,0x13,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x80,0x00,0x00,0x00,0x00,0x68,0x00,0x00,0x01,0xA6};
std::vector<uint8_t> batt_inside_box_temp_cmd = {0x4E,0x57,0x00,0x13,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x81,0x00,0x00,0x00,0x00,0x68,0x00,0x00,0x01,0xA7};
std::vector<uint8_t> batt_cells_voltage_cmd = {0x4E,0x57,0x00,0x13,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x83,0x00,0x00,0x00,0x00,0x68,0x00,0x00,0x01,0xA9};
std::vector<uint8_t> batt_current_cmd = {0x4E,0x57,0x00,0x13,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x84,0x00,0x00,0x00,0x00,0x68,0x00,0x00,0x01,0xAA};
std::vector<uint8_t> batt_percent_cmd = {0x4E,0x57,0x00,0x13,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x85,0x00,0x00,0x00,0x00,0x68,0x00,0x00,0x01,0xAB};
std::vector<uint8_t> test_cmd{0xDD,0xa5,0x03,0x00,0xFF,0xFD,0x77};
const int LENGTH_FRAME = 33;
constexpr char FRAME_DELIMITER = '\x77';


pkgPin::pkgPin(std::string serial_port, int baudrate): io_(), serial_(io_), baudrate_(baudrate), port_(serial_port){};
bool pkgPin::connect_pkgPin()
{
    try 
    {
        serial_.open(port_);
        serial_.set_option(boost::asio::serial_port_base::baud_rate(baudrate_));
        serial_.set_option(boost::asio::serial_port_base::character_size(8));
        RCLCPP_INFO(rclcpp::get_logger("pkgPin"), "Connect PKG PIN serial successfully");
        return true;

    } catch(const std::exception &e)
    {
        RCLCPP_ERROR(rclcpp::get_logger("pkgPin"), "Connect PKG PIN serial failed: %s ", e.what());
        return false;   
    }
};
pkgPin::~pkgPin()
{
    disconnect_pkgPin();
}
void pkgPin::disconnect_pkgPin()
{
    if(serial_.is_open())
    {
        serial_.close();
    }
}
bool pkgPin::connectStatus_pkgPin()
{
    if(serial_.is_open())
    {
        return true;
    }
    else
    {
        return false;
    }
}
//request command receive from device 
bool pkgPin::request_pkgPin(std::vector<uint8_t> request_code, std::vector<uint8_t> &data)
{
    boost::asio::streambuf stream_buffer;

    boost::asio::write(serial_, boost::asio::buffer(request_code));

    try 
    {
        boost::asio::read_until(serial_, stream_buffer, FRAME_DELIMITER);
        //boost::asio::read(serial_,stream_buffer);
        data.assign( 
            boost::asio::buffers_begin(stream_buffer.data()),
            boost::asio::buffers_end(stream_buffer.data())
        ); 
        stream_buffer.consume(stream_buffer.size());
        return true;
    }catch(const std::exception &e)
    {
        RCLCPP_ERROR(rclcpp::get_logger("pkgPin"), "read_error: %s", e.what());
        return false;
    }
}

void pkgPin::read_voltage()
{
    std::vector<uint8_t> income_data;
    if (request_pkgPin(batt_cells_voltage_cmd, income_data))
    {
        float voltage_data = static_cast<float>(income_data[12]*256 + income_data[13])*0.01;
        pkgPin_data.voltage = voltage_data; 
    }

}

void pkgPin::read_current()
{
    std::vector<uint8_t> income_data;
    if (request_pkgPin(batt_current_cmd, income_data))
    {
        float current = static_cast<float>
        (
            static_cast<int8_t>
                (
                    income_data[12]*256 + income_data[13]
                )
        )*0.01 ;
        pkgPin_data.current = current; 
    }
    
}
void pkgPin::read_PINtemperature()
{
    std::vector<uint8_t> income_data;
    if (request_pkgPin(batt_temp_cmd, income_data))
    {
        float temp_data = static_cast<float>(income_data[13]);
        pkgPin_data.temperature = temp_data; 
    }
  
}
void pkgPin::read_SOC()
{
    std::vector<uint8_t> income_data;
    if (request_pkgPin(batt_percent_cmd, income_data))
    {
        float per_data = static_cast<float>(income_data[12]);
        pkgPin_data.percentage = per_data; 
    }
}

void pkgPin::read4mainFields()
{
    read_voltage();
    read_current();
    read_PINtemperature();
    read_SOC();
}

void pkgPin::read_test()
{
        // std::vector<uint8_t> response;
        // boost::asio::write(serial_, boost::asio::buffer(test_cmd));
        // uint8_t byte;

        // try {
        //     while (response.size() <= 33) {
        //         boost::asio::read(serial_, boost::asio::buffer(&byte, 1));
        //         response.push_back(byte);
        //         RCLCPP_ERROR(rclcpp::get_logger("pinPkg"), "Read error: %d", byte);
        //     }
        // } catch (const std::exception &e) {
        //     RCLCPP_ERROR(rclcpp::get_logger("pinPkg"), "Read error: %s", e.what());
        // } 
    std::vector<uint8_t> income_data;
    if (request_pkgPin(test_cmd, income_data))
    {
        pkgPin_data.voltage = static_cast<float>((income_data[4] * 255 + income_data[5]) / 100.0);
        pkgPin_data.capacity = static_cast<float>((income_data[8] * 255 + income_data[9]) / 100.0);
        pkgPin_data.design_capacity = static_cast<float>((income_data[10] * 255 + income_data[11]) / 100.0);
        pkgPin_data.percentage = static_cast<float>(income_data[23]);

        int current = income_data[6] * 255 + income_data[7];
        if (current > 32767) {
            current = -1 * (65536 - current);
        }
        pkgPin_data.current = static_cast<float>(current) / 100.0;

        int num_temps = income_data[26];
        pkgPin_data.cell_temperature.clear();
        for (int i = 0; i < num_temps * 2; i += 2) {
            float temp = static_cast<float>((income_data[27 + i] * 255 + income_data[28 + i + 1] - 2731) * 0.1);
            pkgPin_data.cell_temperature.push_back(temp);
        }

        pkgPin_data.temperature = 0.0;
        for (const auto &temp : pkgPin_data.cell_temperature) {
            pkgPin_data.temperature += temp;
        }
        if (!pkgPin_data.cell_temperature.empty()) {
            pkgPin_data.temperature /= pkgPin_data.cell_temperature.size();
        }
        //RCLCPP_INFO(rclcpp::get_logger("pin data"), "%f, %f, %f, %f",pkgPin_data.voltage, pkgPin_data.current, pkgPin_data.temperature, pkgPin_data.percentage );
    }
}
