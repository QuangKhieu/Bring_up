#include "imu_plugin_pkg/hwt.hpp"
#include "cstring"
#include "iostream"
#include "std_msgs/msg/int16.hpp"
std_msgs::msg::Int16 a;
const float PI = 3.14159265359;
const float DEG_TO_RAD = PI / 180;
const int IMU_QUATERNION_REG = 81;
const int IMU_ANGULAR_VELOCITY_REG = 55;
const int IMU_LINEAR_ACCELERATION_REG = 52;
const int _3_FIELDS_REGISTER_START = 52;
const int _3_FIELDS_REGISTER_COUNT = 12; // 52-63 Accelaration->agular_vel->magnetic->orien
HwtImu::HwtImu(std::string serial_port, int baud_rate, int slave_id):
    serial_port_{serial_port}, baud_rate_{baud_rate}, slave_id_{slave_id}
{
}

bool HwtImu::connectSetup()
{
    mb_ = modbus_new_rtu(serial_port_.c_str(), baud_rate_, 'N', 8, 1);
    if (mb_ == nullptr)
    {
        std::cerr << "Failed to setup modbus connection" << std::endl;
        return false;
    }
    modbus_set_slave(mb_, slave_id_);
    if (!connectStatus())
    {
        std::cerr << "Failed to connect to modbus" << std::endl;
        modbus_free(mb_);
        return false;
    }

    std::cout << "Setup successfully" << std::endl;
    return true;
}

bool HwtImu::connectStatus()
{

    if (modbus_connect(mb_) == -1)
    {
        std::cerr << "Connection failed: " << modbus_strerror(errno) << std::endl;
        return false;
    }
    return true;
}

void HwtImu::disconnect()
{
    if (mb_ != nullptr)
    {
        modbus_close(mb_);
    }
}

bool HwtImu::readRegisters(int address, int num_registers, uint16_t* tab_reg)
{
    int rc = modbus_read_registers(mb_, address, num_registers, tab_reg);
    if (rc == -1)
    {
        std::cerr << "Read failed: " << modbus_strerror(errno) << std::endl;
        if (errno == EIO)
        {
            std::cerr << "Error: Invalid CRC or communication error" << std::endl;
        }
        return false;
    }
    return true;
}

void HwtImu::requestQuaternionData(sensor_msgs::msg::Imu& imu_data)
{
    uint16_t tab_reg[4];
    if (readRegisters(IMU_QUATERNION_REG, 4, tab_reg))
    {
        imu_data.orientation.x = static_cast<float>(static_cast<int16_t>(tab_reg[0])) / 32768;
        imu_data.orientation.y = static_cast<float>(static_cast<int16_t>(tab_reg[1])) / 32768;
        imu_data.orientation.z = static_cast<float>(static_cast<int16_t>(tab_reg[2])) / 32768;
        imu_data.orientation.w = static_cast<float>(static_cast<int16_t>(tab_reg[3])) / 32768;
    }
    else
    {
        std::cerr << "Failed to read quaternion registers" << std::endl;
    }
}

void HwtImu::requestAngularVelocityData(sensor_msgs::msg::Imu& imu_data)
{
    uint16_t tab_reg[3];
    if (readRegisters(IMU_ANGULAR_VELOCITY_REG, 3, tab_reg))
    {
        imu_data.angular_velocity.x = static_cast<float>(static_cast<int16_t>(tab_reg[0])) / 32768 * 2000 * DEG_TO_RAD;
        imu_data.angular_velocity.y = static_cast<float>(static_cast<int16_t>(tab_reg[1])) / 32768 * 2000 * DEG_TO_RAD;
        imu_data.angular_velocity.z = static_cast<float>(static_cast<int16_t>(tab_reg[2])) / 32768 * 2000 * DEG_TO_RAD;
    }
    else
    {
        std::cerr << "Failed to read angular velocity registers" << std::endl;
    }
}

void HwtImu::requestLinearAccelerationData(sensor_msgs::msg::Imu& imu_data)
{
    uint16_t tab_reg[3];
    if (readRegisters(IMU_LINEAR_ACCELERATION_REG, 3, tab_reg))
    {
        imu_data.linear_acceleration.x = static_cast<float>(static_cast<int16_t>(tab_reg[0])) / 32768 * 16 * 9.8;
        imu_data.linear_acceleration.y = static_cast<float>(static_cast<int16_t>(tab_reg[1])) / 32768 * 16 * 9.8;
        imu_data.linear_acceleration.z = static_cast<float>(static_cast<int16_t>(tab_reg[2])) / 32768 * 16 * 9.8;
    }
    else
    {
        std::cerr << "Failed to read linear acceleration registers" << std::endl;
    }
}
void EulerToQuaternion(sensor_msgs::msg::Imu &imu_data_, float* euler_pose)
{
    double cy = cos(euler_pose[2] * 0.5);
    double sy = sin(euler_pose[2] * 0.5);
    double cp = cos(euler_pose[1] * 0.5);
    double sp = sin(euler_pose[1] * 0.5);
    double cr = cos(euler_pose[0] * 0.5);
    double sr = sin(euler_pose[0] * 0.5);


    imu_data_.orientation.w = cr * cp * cy + sr * sp * sy;
    imu_data_.orientation.x = sr * cp * cy - cr * sp * sy;
    imu_data_.orientation.y = cr * sp * cy + sr * cp * sy;
    imu_data_.orientation.z = cr * cp * sy - sr * sp * cy;


}
void HwtImu::request3FieldsImuData(sensor_msgs::msg::Imu &imu_data_)
{   uint16_t tab_reg[_3_FIELDS_REGISTER_COUNT];
    if (readRegisters(_3_FIELDS_REGISTER_START,_3_FIELDS_REGISTER_COUNT,tab_reg))
    {
        //acc 
        imu_data_.linear_acceleration.x = float(static_cast<int16_t>(tab_reg[0]))/32768*16*9.8;
        imu_data_.linear_acceleration.y = float(static_cast<int16_t>(tab_reg[1]))/32768*16*9.8;
        imu_data_.linear_acceleration.z = float(static_cast<int16_t>(tab_reg[2]))/32768*16*9.8;

        //aguler vel
        imu_data_.angular_velocity.x = (float(static_cast<int16_t>(tab_reg[3])))/32768*2000/180*PI;
        imu_data_.angular_velocity.y = (float(static_cast<int16_t>(tab_reg[4])))/32768*2000/180*PI;
        imu_data_.angular_velocity.z = (float(static_cast<int16_t>(tab_reg[5])))/32768*2000/180*PI;

        //orien
        float euler_pose[3];
        euler_pose[0] =  float(static_cast<int16_t>(tab_reg[9]))/32768*PI;
        euler_pose[1] =  float(static_cast<int16_t>(tab_reg[10]))/32768*PI;
        euler_pose[2] =  float(static_cast<int16_t>(tab_reg[11]))/32768*PI;

        EulerToQuaternion(imu_data_,euler_pose);

        
    }
    else
    {

        RCLCPP_ERROR(rclcpp::get_logger("Hwt"),"Failed to read 3 fields registers");
    }

}