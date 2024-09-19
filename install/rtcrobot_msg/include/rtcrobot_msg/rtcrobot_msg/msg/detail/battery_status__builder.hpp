// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/battery_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_BatteryStatus_charge
{
public:
  explicit Init_BatteryStatus_charge(::rtcrobot_msg::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::BatteryStatus charge(::rtcrobot_msg::msg::BatteryStatus::_charge_type arg)
  {
    msg_.charge = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_soc
{
public:
  explicit Init_BatteryStatus_soc(::rtcrobot_msg::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_charge soc(::rtcrobot_msg::msg::BatteryStatus::_soc_type arg)
  {
    msg_.soc = std::move(arg);
    return Init_BatteryStatus_charge(msg_);
  }

private:
  ::rtcrobot_msg::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_current
{
public:
  explicit Init_BatteryStatus_current(::rtcrobot_msg::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_soc current(::rtcrobot_msg::msg::BatteryStatus::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_BatteryStatus_soc(msg_);
  }

private:
  ::rtcrobot_msg::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_voltage
{
public:
  explicit Init_BatteryStatus_voltage(::rtcrobot_msg::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_current voltage(::rtcrobot_msg::msg::BatteryStatus::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_BatteryStatus_current(msg_);
  }

private:
  ::rtcrobot_msg::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_ip
{
public:
  Init_BatteryStatus_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryStatus_voltage ip(::rtcrobot_msg::msg::BatteryStatus::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_BatteryStatus_voltage(msg_);
  }

private:
  ::rtcrobot_msg::msg::BatteryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::BatteryStatus>()
{
  return rtcrobot_msg::msg::builder::Init_BatteryStatus_ip();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
