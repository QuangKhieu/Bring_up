// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/CmdJoy.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__CMD_JOY__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__CMD_JOY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/cmd_joy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_CmdJoy_az
{
public:
  explicit Init_CmdJoy_az(::rtcrobot_msg::msg::CmdJoy & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::CmdJoy az(::rtcrobot_msg::msg::CmdJoy::_az_type arg)
  {
    msg_.az = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::CmdJoy msg_;
};

class Init_CmdJoy_vy
{
public:
  explicit Init_CmdJoy_vy(::rtcrobot_msg::msg::CmdJoy & msg)
  : msg_(msg)
  {}
  Init_CmdJoy_az vy(::rtcrobot_msg::msg::CmdJoy::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_CmdJoy_az(msg_);
  }

private:
  ::rtcrobot_msg::msg::CmdJoy msg_;
};

class Init_CmdJoy_vx
{
public:
  explicit Init_CmdJoy_vx(::rtcrobot_msg::msg::CmdJoy & msg)
  : msg_(msg)
  {}
  Init_CmdJoy_vy vx(::rtcrobot_msg::msg::CmdJoy::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_CmdJoy_vy(msg_);
  }

private:
  ::rtcrobot_msg::msg::CmdJoy msg_;
};

class Init_CmdJoy_manual
{
public:
  Init_CmdJoy_manual()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CmdJoy_vx manual(::rtcrobot_msg::msg::CmdJoy::_manual_type arg)
  {
    msg_.manual = std::move(arg);
    return Init_CmdJoy_vx(msg_);
  }

private:
  ::rtcrobot_msg::msg::CmdJoy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::CmdJoy>()
{
  return rtcrobot_msg::msg::builder::Init_CmdJoy_manual();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__CMD_JOY__BUILDER_HPP_
