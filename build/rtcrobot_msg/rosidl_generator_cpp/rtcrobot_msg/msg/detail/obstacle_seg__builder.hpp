// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/ObstacleSeg.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_SEG__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_SEG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/obstacle_seg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_ObstacleSeg_last_point
{
public:
  explicit Init_ObstacleSeg_last_point(::rtcrobot_msg::msg::ObstacleSeg & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::ObstacleSeg last_point(::rtcrobot_msg::msg::ObstacleSeg::_last_point_type arg)
  {
    msg_.last_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::ObstacleSeg msg_;
};

class Init_ObstacleSeg_first_point
{
public:
  Init_ObstacleSeg_first_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleSeg_last_point first_point(::rtcrobot_msg::msg::ObstacleSeg::_first_point_type arg)
  {
    msg_.first_point = std::move(arg);
    return Init_ObstacleSeg_last_point(msg_);
  }

private:
  ::rtcrobot_msg::msg::ObstacleSeg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::ObstacleSeg>()
{
  return rtcrobot_msg::msg::builder::Init_ObstacleSeg_first_point();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_SEG__BUILDER_HPP_
