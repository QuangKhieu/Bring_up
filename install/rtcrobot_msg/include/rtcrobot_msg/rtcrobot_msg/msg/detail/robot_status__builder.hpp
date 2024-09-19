// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_error
{
public:
  explicit Init_RobotStatus_error(::rtcrobot_msg::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::RobotStatus error(::rtcrobot_msg::msg::RobotStatus::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::RobotStatus msg_;
};

class Init_RobotStatus_sub_mode
{
public:
  explicit Init_RobotStatus_sub_mode(::rtcrobot_msg::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_error sub_mode(::rtcrobot_msg::msg::RobotStatus::_sub_mode_type arg)
  {
    msg_.sub_mode = std::move(arg);
    return Init_RobotStatus_error(msg_);
  }

private:
  ::rtcrobot_msg::msg::RobotStatus msg_;
};

class Init_RobotStatus_mode
{
public:
  explicit Init_RobotStatus_mode(::rtcrobot_msg::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_sub_mode mode(::rtcrobot_msg::msg::RobotStatus::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_RobotStatus_sub_mode(msg_);
  }

private:
  ::rtcrobot_msg::msg::RobotStatus msg_;
};

class Init_RobotStatus_header
{
public:
  Init_RobotStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_mode header(::rtcrobot_msg::msg::RobotStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotStatus_mode(msg_);
  }

private:
  ::rtcrobot_msg::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::RobotStatus>()
{
  return rtcrobot_msg::msg::builder::Init_RobotStatus_header();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
