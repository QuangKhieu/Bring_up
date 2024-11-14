#ifndef HWT_PLUGIN_HPP
#define HWT_PLUGIN_HPP

#include "rclcpp/rclcpp.hpp"
#include "hardware_interface/handle.hpp"
#include "hardware_interface/hardware_component_info.hpp"
#include "hardware_interface/sensor_interface.hpp"
#include "hardware_interface/types/hardware_interface_return_values.hpp"
#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include "rclcpp_lifecycle/state.hpp"

#include "imu_plugin_pkg/hwt.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include <vector>


namespace imu_hardware_interface
{
class HwtImuInterface : public hardware_interface::SensorInterface
{
    public:
        HwtImuInterface(){};
        hardware_interface::CallbackReturn
        on_init(const hardware_interface::HardwareInfo & info) override;
        
        std::vector<hardware_interface::StateInterface>export_state_interfaces() override;

        hardware_interface::CallbackReturn on_configure(
            const rclcpp_lifecycle::State & previous_state
        ) override;

        hardware_interface::CallbackReturn on_activate(
            const rclcpp_lifecycle::State & previous_state
        ) override;

        hardware_interface::CallbackReturn on_deactivate(
            const rclcpp_lifecycle::State & previous_state
        ) override;

        hardware_interface::CallbackReturn on_cleanup(
            const rclcpp_lifecycle::State & previous_state
        ) override;       

        hardware_interface::return_type read (
            const rclcpp::Time &time,
            const rclcpp::Duration &duration
        ) override;
       
    private:
    std::string port_;
    int baudrate_;
    int slave_id_;
   

    HwtImu *hwtImu;
    sensor_msgs::msg::Imu imu_data;
    


};
};


#endif