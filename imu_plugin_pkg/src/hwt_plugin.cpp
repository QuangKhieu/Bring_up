#include "imu_plugin_pkg/hwt_plugin.hpp"
#include "hardware_interface/types/hardware_interface_type_values.hpp"

namespace imu_hardware_interface
{
hardware_interface::CallbackReturn HwtImuInterface::on_init(
    const hardware_interface::HardwareInfo &info)
    {
        if
        (
            hardware_interface::SensorInterface::on_init(info)!=
            hardware_interface::CallbackReturn::SUCCESS
        )
        {
            return hardware_interface::CallbackReturn::ERROR;

        }
        // auto port1 = info.hardware_parameters.at("imu_sensor/port");
        // RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "Port1: %s", port1.c_str());


        port_ = info_.hardware_parameters["port"];
        baudrate_ = std::stoi(info_.hardware_parameters["baudrate"]);
        slave_id_ = std::stoi(info_.hardware_parameters["slaveID"]);

        RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "Port: %s", port_.c_str());
        RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "SlaveID: %d", slave_id_);
        RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "Baudrate: %d", baudrate_);


    return hardware_interface::CallbackReturn::SUCCESS;   
    }

std::vector<hardware_interface::StateInterface> HwtImuInterface::export_state_interfaces()
{
    std::vector<hardware_interface::StateInterface> state_interfaces_;

    state_interfaces_.emplace_back("imu","orientation.x",&imu_data.orientation.x);
    state_interfaces_.emplace_back("imu","orientation.y",&imu_data.orientation.y);
    state_interfaces_.emplace_back("imu","orientation.z",&imu_data.orientation.z);
    state_interfaces_.emplace_back("imu","orientation.w",&imu_data.orientation.w);

    state_interfaces_.emplace_back("imu","angular_velocity.x",&imu_data.angular_velocity.x);
    state_interfaces_.emplace_back("imu","angular_velocity.y",&imu_data.angular_velocity.y);
    state_interfaces_.emplace_back("imu","angular_velocity.z",&imu_data.angular_velocity.z);

    state_interfaces_.emplace_back("imu","linear_acceleration.x",&imu_data.linear_acceleration.x);
    state_interfaces_.emplace_back("imu","linear_acceleration.y",&imu_data.linear_acceleration.y);
    state_interfaces_.emplace_back("imu","linear_acceleration.z",&imu_data.linear_acceleration.z);
    
    state_interfaces_.emplace_back("imu2","orientation.x",&imu_data.orientation.x);
    state_interfaces_.emplace_back("imu2","orientation.y",&imu_data.orientation.y);
    state_interfaces_.emplace_back("imu2","orientation.z",&imu_data.orientation.z);
    state_interfaces_.emplace_back("imu2","orientation.w",&imu_data.orientation.w);

    state_interfaces_.emplace_back("imu2","angular_velocity.x",&imu_data.angular_velocity.x);
    state_interfaces_.emplace_back("imu2","angular_velocity.y",&imu_data.angular_velocity.y);
    state_interfaces_.emplace_back("imu2","angular_velocity.z",&imu_data.angular_velocity.z);

    state_interfaces_.emplace_back("imu2","linear_acceleration.x",&imu_data.linear_acceleration.x);
    state_interfaces_.emplace_back("imu2","linear_acceleration.y",&imu_data.linear_acceleration.y);
    state_interfaces_.emplace_back("imu2","linear_acceleration.z",&imu_data.linear_acceleration.z);
    

    return state_interfaces_;
}

hardware_interface::CallbackReturn HwtImuInterface::on_configure(
    const rclcpp_lifecycle::State &previous_state
)
{
    RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), 
                "Configuring from state: %s", 
                previous_state.label().c_str());
    RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "Configuring....");
    //HwtImu hwtImu(port_,baudrate_,slave_id_);
    hwtImu = new HwtImu(
        port_, baudrate_,slave_id_
    );
    
    if(!hwtImu->connectSetup())
    {
        return hardware_interface::CallbackReturn::ERROR;
    }

     RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "Configure sucessfully...");
    return hardware_interface::CallbackReturn::SUCCESS;
    

}

hardware_interface::CallbackReturn HwtImuInterface::on_cleanup(
    const rclcpp_lifecycle::State &previous_state
)
{
    RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), 
                "Cleaning from state: %s", 
                previous_state.label().c_str());
    RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "Cleaning...");
    hwtImu->disconnect();
    free(hwtImu);
    RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "Successfully cleaned up...");
    return hardware_interface::CallbackReturn::SUCCESS;

};
hardware_interface::CallbackReturn HwtImuInterface::on_activate(
      const rclcpp_lifecycle::State &previous_state
)
{
RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), 
                "Activating from state: %s", 
                previous_state.label().c_str());
  RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "Activating ...please wait...");
  if (!hwtImu->connectStatus())
  {
    return hardware_interface::CallbackReturn::ERROR;
  }
  RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "Successfully activated!");

  return hardware_interface::CallbackReturn::SUCCESS;
};

hardware_interface::CallbackReturn HwtImuInterface::on_deactivate(
  const rclcpp_lifecycle::State & previous_state)
{
  RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), 
                "Deactivating from state: %s", 
                previous_state.label().c_str()); 
  RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "Deactivating ...please wait...");
  RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "Successfully deactivated!");
  return hardware_interface::CallbackReturn::SUCCESS;
};

hardware_interface::return_type HwtImuInterface::read(
    const rclcpp::Time &time,
    const rclcpp::Duration &period

)
{
    // RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "Current time: %ld", time.nanoseconds());
    //RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "Period: %f", period.seconds());
    if (period.seconds() > 1)
    {
        RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "Out timer...");
    }
    //RCLCPP_INFO(rclcpp::get_logger("HwtImuInterface"), "read...");
    //hwtImu->requestQuaternionData(imu_data);
    // hwtImu->requestAngularVelocityData(imu_data);
    // hwtImu->requestLinearAccelerationData(imu_data);
    imu_data.header.stamp = time;
    hwtImu->request3FieldsImuData(imu_data);

    

    return hardware_interface::return_type::OK;
    
};


}
#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(
  imu_hardware_interface::HwtImuInterface, hardware_interface::SensorInterface)

