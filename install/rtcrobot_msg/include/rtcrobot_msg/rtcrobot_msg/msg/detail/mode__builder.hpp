// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__MODE__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_Mode_name
{
public:
  explicit Init_Mode_name(::rtcrobot_msg::msg::Mode & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::Mode name(::rtcrobot_msg::msg::Mode::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::Mode msg_;
};

class Init_Mode_mode
{
public:
  Init_Mode_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mode_name mode(::rtcrobot_msg::msg::Mode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Mode_name(msg_);
  }

private:
  ::rtcrobot_msg::msg::Mode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::Mode>()
{
  return rtcrobot_msg::msg::builder::Init_Mode_mode();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__MODE__BUILDER_HPP_
