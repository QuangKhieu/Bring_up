#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/battery_state.hpp"
#include "boost/asio.hpp"
#include "boost/asio/serial_port.hpp"

#include <vector>

struct batState
{
    double voltage;
    double current;
    double temperature;
    double percentage;
};

class pkgPin 
{
    public:
        pkgPin(std::string serial_port, int baudate);
        ~pkgPin();
        bool connect_pkgPin();
        void disconnect_pkgPin();
        bool connectStatus_pkgPin();
        bool request_pkgPin(std::vector<uint8_t> request_code, std::vector<uint8_t> &data);
        //void write_pkgPin();
        void read_voltage();
        void read_PINtemperature();
        void read_boxtemperature();
        void read_current();
        void read_SOC();
        void read_capacity();
        void read4mainFields();
        void read_test();
        sensor_msgs::msg::BatteryState pkgPin_data;
    private:
        boost::asio::io_service io_;
        boost::asio::serial_port serial_;
        int baudrate_;
        std::string port_;
        
        // std::vector<uint8_t> income_data;
        
};
