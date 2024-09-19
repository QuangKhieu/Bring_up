// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__TARGET__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_Target_theta
{
public:
  explicit Init_Target_theta(::rtcrobot_msg::msg::Target & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::Target theta(::rtcrobot_msg::msg::Target::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::Target msg_;
};

class Init_Target_point
{
public:
  explicit Init_Target_point(::rtcrobot_msg::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_theta point(::rtcrobot_msg::msg::Target::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_Target_theta(msg_);
  }

private:
  ::rtcrobot_msg::msg::Target msg_;
};

class Init_Target_mode
{
public:
  Init_Target_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Target_point mode(::rtcrobot_msg::msg::Target::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Target_point(msg_);
  }

private:
  ::rtcrobot_msg::msg::Target msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::Target>()
{
  return rtcrobot_msg::msg::builder::Init_Target_mode();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__TARGET__BUILDER_HPP_
