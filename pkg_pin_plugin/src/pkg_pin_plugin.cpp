#include "pkg_pin_plugin/pkg_pin_plugin.hpp"
#include "hardware_interface/types/hardware_interface_type_values.hpp"
namespace battery_hardware_interface
{
    hardware_interface::CallbackReturn PkgBatteryInterface::on_init(
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
            port_ = info_.hardware_parameters["port"];
            baudrate_ = std::stoi(info_.hardware_parameters["baudrate"]);

        RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "Port: %s", port_.c_str());
        RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "Baudrate: %d", baudrate_);

        return hardware_interface::CallbackReturn::SUCCESS;
        }
    std::vector<hardware_interface::StateInterface> PkgBatteryInterface::export_state_interfaces()
    {
        std::vector<hardware_interface::StateInterface> state_interfaces_;
            state_interfaces_.emplace_back("battery","voltage",&batt_state.voltage);
            state_interfaces_.emplace_back("battery","current",&batt_state.current);
            state_interfaces_.emplace_back("battery","temperature",&batt_state.temperature);
            state_interfaces_.emplace_back("battery","percentage",&batt_state.percentage);

        return state_interfaces_;
    }
hardware_interface::CallbackReturn PkgBatteryInterface::on_configure(
    const rclcpp_lifecycle::State &previous_state
)
{
    RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), 
                "Configuring from state: %s", 
                previous_state.label().c_str());
    RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "Configuring....");

    PkgPin = new pkgPin(
        port_, baudrate_
    );
    
    if(!PkgPin->connect_pkgPin())
    {
        return hardware_interface::CallbackReturn::ERROR;
    }

     RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "Configure sucessfully...");
    return hardware_interface::CallbackReturn::SUCCESS;
    

}
hardware_interface::CallbackReturn PkgBatteryInterface::on_cleanup(
    const rclcpp_lifecycle::State &previous_state
)
{
    RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), 
                "Cleaning from state: %s", 
                previous_state.label().c_str());
    RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "Cleaning...");
    PkgPin->disconnect_pkgPin();
    delete PkgPin;
    RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "Successfully cleaned up...");
    return hardware_interface::CallbackReturn::SUCCESS;

}; 
hardware_interface::CallbackReturn PkgBatteryInterface::on_activate(
      const rclcpp_lifecycle::State &previous_state
)
{
RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), 
                "Activating from state: %s", 
                previous_state.label().c_str());
  RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "Activating ...please wait...");
  RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "Successfully activated!");

  return hardware_interface::CallbackReturn::SUCCESS;
};

hardware_interface::CallbackReturn PkgBatteryInterface::on_deactivate(
  const rclcpp_lifecycle::State & previous_state)
{
  RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), 
                "Deactivating from state: %s", 
                previous_state.label().c_str()); 
  RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "Deactivating ...please wait...");
  RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "Successfully deactivated!");
  return hardware_interface::CallbackReturn::SUCCESS;
};
hardware_interface::return_type PkgBatteryInterface::read(
    const rclcpp::Time &time,
    const rclcpp::Duration &period

)
{

    if (period.seconds() > 1)
    {
        RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "Out timer...");
    }    
    // PkgPin->read4mainFields();
    // bat_state =  PkgPin->pkgPin_data;
    // bat_state.header.stamp =time;
    // batt_state.voltage = PkgPin->pkgPin_data.voltage;
    // batt_state.current = PkgPin->pkgPin_data.current;
    // batt_state.temperature = PkgPin->pkgPin_data.temperature;
    // batt_state.percentage = PkgPin->pkgPin_data.percentage;
    PkgPin->read_test();
    
    batt_state.voltage = static_cast<double>(PkgPin->pkgPin_data.voltage);
    batt_state.current = static_cast<double>(PkgPin->pkgPin_data.current);
    batt_state.temperature = static_cast<double>(PkgPin->pkgPin_data.temperature);
    batt_state.percentage = static_cast<double>(PkgPin->pkgPin_data.percentage);
    // double voltage = static_cast<double>(PkgPin->pkgPin_data.voltage);
    // double current = static_cast<double>(PkgPin->pkgPin_data.current);
    // double temperature = static_cast<double>(PkgPin->pkgPin_data.temperature);
    // double percentage = static_cast<double>(PkgPin->pkgPin_data.percentage);
    // RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "vol: %f", voltage);
    // RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "cur: %f", current);
    // RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "tem: %f", temperature);
    // RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "per: %f", percentage);
    RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "vol: %f", batt_state.voltage);
    RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "cur: %f", batt_state.current);
    RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "tem: %f", batt_state.temperature);
    RCLCPP_INFO(rclcpp::get_logger("PkgBatteryInterface"), "per: %f", batt_state.percentage);
    //RCLCPP_INFO(rclcpp::get_logger("pin data"), "%f, %f, %f, %f",PkgPin->pkgPin_data.voltage, PkgPin->pkgPin_data.current, PkgPin->pkgPin_data.temperature, PkgPin->pkgPin_data.percentage );

    return hardware_interface::return_type::OK;
    
};
}

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(
  battery_hardware_interface::PkgBatteryInterface, hardware_interface::SensorInterface)


