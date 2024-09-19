// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/RobotPose.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__ROBOT_POSE__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__ROBOT_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/robot_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_RobotPose_theta
{
public:
  explicit Init_RobotPose_theta(::rtcrobot_msg::msg::RobotPose & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::RobotPose theta(::rtcrobot_msg::msg::RobotPose::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::RobotPose msg_;
};

class Init_RobotPose_y
{
public:
  explicit Init_RobotPose_y(::rtcrobot_msg::msg::RobotPose & msg)
  : msg_(msg)
  {}
  Init_RobotPose_theta y(::rtcrobot_msg::msg::RobotPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RobotPose_theta(msg_);
  }

private:
  ::rtcrobot_msg::msg::RobotPose msg_;
};

class Init_RobotPose_x
{
public:
  explicit Init_RobotPose_x(::rtcrobot_msg::msg::RobotPose & msg)
  : msg_(msg)
  {}
  Init_RobotPose_y x(::rtcrobot_msg::msg::RobotPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RobotPose_y(msg_);
  }

private:
  ::rtcrobot_msg::msg::RobotPose msg_;
};

class Init_RobotPose_ip
{
public:
  Init_RobotPose_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotPose_x ip(::rtcrobot_msg::msg::RobotPose::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_RobotPose_x(msg_);
  }

private:
  ::rtcrobot_msg::msg::RobotPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::RobotPose>()
{
  return rtcrobot_msg::msg::builder::Init_RobotPose_ip();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__ROBOT_POSE__BUILDER_HPP_
