// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/WheelData.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__WHEEL_DATA__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__WHEEL_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/wheel_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_WheelData_right
{
public:
  explicit Init_WheelData_right(::rtcrobot_msg::msg::WheelData & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::WheelData right(::rtcrobot_msg::msg::WheelData::_right_type arg)
  {
    msg_.right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::WheelData msg_;
};

class Init_WheelData_left
{
public:
  Init_WheelData_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelData_right left(::rtcrobot_msg::msg::WheelData::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_WheelData_right(msg_);
  }

private:
  ::rtcrobot_msg::msg::WheelData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::WheelData>()
{
  return rtcrobot_msg::msg::builder::Init_WheelData_left();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__WHEEL_DATA__BUILDER_HPP_
