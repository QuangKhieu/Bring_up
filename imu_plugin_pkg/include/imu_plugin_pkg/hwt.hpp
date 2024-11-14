#ifndef IMU_HWT_HPP
#define IMU_HWT_HPP
 

#include "rclcpp/rclcpp.hpp"
#include "modbus/modbus-rtu.h"
#include "sensor_msgs/msg/imu.hpp"
#include <cstdint>

class HwtImu 
{
    public:
        HwtImu(std::string serial_port, int baud_rate, int slave_id );
        ~HwtImu();
        
        
        

        
        sensor_msgs::msg::Imu imu_data;
        //sensor_msgs::msg::Imu imu_data_;
        bool connectStatus();
        bool connectSetup();
        void disconnect();
        bool reset();
        bool reboot();
        void readData();
        void setBaudarate();
        void requestRPYdata(sensor_msgs::msg::Imu &imu_data_);
        void requestQuaternionData(sensor_msgs::msg::Imu &imu_data_);
        void requestAngularVelocityData(sensor_msgs::msg::Imu &imu_data_);
        void requestLinearAccelerationData(sensor_msgs::msg::Imu &imu_data_);
        void request3FieldsImuData(sensor_msgs::msg::Imu &imu_data_);
        bool readRegisters(int address, int num_registers, uint16_t* tab_reg);
    private:
        modbus_t* mb_;
        std::string serial_port_;
        int baud_rate_;
        int slave_id_;

        
        
    
        
        
};
#endif