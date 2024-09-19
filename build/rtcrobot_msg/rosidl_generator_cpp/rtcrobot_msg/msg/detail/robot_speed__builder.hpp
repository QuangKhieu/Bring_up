// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/RobotSpeed.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__ROBOT_SPEED__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__ROBOT_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/robot_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_RobotSpeed_az
{
public:
  explicit Init_RobotSpeed_az(::rtcrobot_msg::msg::RobotSpeed & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::RobotSpeed az(::rtcrobot_msg::msg::RobotSpeed::_az_type arg)
  {
    msg_.az = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::RobotSpeed msg_;
};

class Init_RobotSpeed_vx
{
public:
  explicit Init_RobotSpeed_vx(::rtcrobot_msg::msg::RobotSpeed & msg)
  : msg_(msg)
  {}
  Init_RobotSpeed_az vx(::rtcrobot_msg::msg::RobotSpeed::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_RobotSpeed_az(msg_);
  }

private:
  ::rtcrobot_msg::msg::RobotSpeed msg_;
};

class Init_RobotSpeed_id
{
public:
  Init_RobotSpeed_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotSpeed_vx id(::rtcrobot_msg::msg::RobotSpeed::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RobotSpeed_vx(msg_);
  }

private:
  ::rtcrobot_msg::msg::RobotSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::RobotSpeed>()
{
  return rtcrobot_msg::msg::builder::Init_RobotSpeed_id();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__ROBOT_SPEED__BUILDER_HPP_
