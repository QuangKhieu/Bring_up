// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/TargetLift.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__TARGET_LIFT__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__TARGET_LIFT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/target_lift__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_TargetLift_height
{
public:
  explicit Init_TargetLift_height(::rtcrobot_msg::msg::TargetLift & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::TargetLift height(::rtcrobot_msg::msg::TargetLift::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::TargetLift msg_;
};

class Init_TargetLift_mode
{
public:
  explicit Init_TargetLift_mode(::rtcrobot_msg::msg::TargetLift & msg)
  : msg_(msg)
  {}
  Init_TargetLift_height mode(::rtcrobot_msg::msg::TargetLift::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_TargetLift_height(msg_);
  }

private:
  ::rtcrobot_msg::msg::TargetLift msg_;
};

class Init_TargetLift_ip
{
public:
  Init_TargetLift_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetLift_mode ip(::rtcrobot_msg::msg::TargetLift::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_TargetLift_mode(msg_);
  }

private:
  ::rtcrobot_msg::msg::TargetLift msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::TargetLift>()
{
  return rtcrobot_msg::msg::builder::Init_TargetLift_ip();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__TARGET_LIFT__BUILDER_HPP_
