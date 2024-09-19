// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__MISSION__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_Mission_mission
{
public:
  explicit Init_Mission_mission(::rtcrobot_msg::msg::Mission & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::Mission mission(::rtcrobot_msg::msg::Mission::_mission_type arg)
  {
    msg_.mission = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::Mission msg_;
};

class Init_Mission_action
{
public:
  explicit Init_Mission_action(::rtcrobot_msg::msg::Mission & msg)
  : msg_(msg)
  {}
  Init_Mission_mission action(::rtcrobot_msg::msg::Mission::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_Mission_mission(msg_);
  }

private:
  ::rtcrobot_msg::msg::Mission msg_;
};

class Init_Mission_ip
{
public:
  Init_Mission_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_action ip(::rtcrobot_msg::msg::Mission::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_Mission_action(msg_);
  }

private:
  ::rtcrobot_msg::msg::Mission msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::Mission>()
{
  return rtcrobot_msg::msg::builder::Init_Mission_ip();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__MISSION__BUILDER_HPP_
