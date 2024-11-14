#ifndef PKG_PIN_PLUGIN_HPP
#define PKG_PIN_PLUGIN_HPP

#include "rclcpp/rclcpp.hpp"
#include "hardware_interface/handle.hpp"
#include "hardware_interface/hardware_component_info.hpp"
#include "hardware_interface/sensor_interface.hpp"
#include "hardware_interface/types/hardware_interface_return_values.hpp"
#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include "rclcpp_lifecycle/state.hpp"

#include "pkg_pin_plugin/pkg_pin.hpp"
#include "sensor_msgs/msg/battery_state.hpp"
namespace battery_hardware_interface
{
class PkgBatteryInterface  : public hardware_interface::SensorInterface
{
    public:
        PkgBatteryInterface() = default;
        hardware_interface::CallbackReturn
        on_init(const hardware_interface::HardwareInfo &info) override;

        std::vector<hardware_interface::StateInterface> export_state_interfaces();

        hardware_interface::CallbackReturn on_configure(
            const rclcpp_lifecycle::State &previous_state
        ) override;

        hardware_interface::CallbackReturn on_activate(
            const rclcpp_lifecycle::State &previous_state
        ) override;

        hardware_interface::CallbackReturn on_deactivate(
            const rclcpp_lifecycle::State &previous_state
        ) override;

        hardware_interface::CallbackReturn on_cleanup(
            const rclcpp_lifecycle::State &previous_state
        ) override;

        hardware_interface::return_type read(
            const rclcpp::Time &time,
            const rclcpp::Duration &duration
        ) override;
    private:
    pkgPin *PkgPin;
    int baudrate_;
    std::string port_;
    sensor_msgs::msg::BatteryState bat_state;
    struct batState batt_state;

};

    
};


#endif