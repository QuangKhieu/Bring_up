// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/ObstacleCir.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_CIR__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_CIR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/obstacle_cir__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_ObstacleCir_true_radius
{
public:
  explicit Init_ObstacleCir_true_radius(::rtcrobot_msg::msg::ObstacleCir & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::ObstacleCir true_radius(::rtcrobot_msg::msg::ObstacleCir::_true_radius_type arg)
  {
    msg_.true_radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::ObstacleCir msg_;
};

class Init_ObstacleCir_radius
{
public:
  explicit Init_ObstacleCir_radius(::rtcrobot_msg::msg::ObstacleCir & msg)
  : msg_(msg)
  {}
  Init_ObstacleCir_true_radius radius(::rtcrobot_msg::msg::ObstacleCir::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_ObstacleCir_true_radius(msg_);
  }

private:
  ::rtcrobot_msg::msg::ObstacleCir msg_;
};

class Init_ObstacleCir_velocity
{
public:
  explicit Init_ObstacleCir_velocity(::rtcrobot_msg::msg::ObstacleCir & msg)
  : msg_(msg)
  {}
  Init_ObstacleCir_radius velocity(::rtcrobot_msg::msg::ObstacleCir::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ObstacleCir_radius(msg_);
  }

private:
  ::rtcrobot_msg::msg::ObstacleCir msg_;
};

class Init_ObstacleCir_center
{
public:
  Init_ObstacleCir_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleCir_velocity center(::rtcrobot_msg::msg::ObstacleCir::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_ObstacleCir_velocity(msg_);
  }

private:
  ::rtcrobot_msg::msg::ObstacleCir msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::ObstacleCir>()
{
  return rtcrobot_msg::msg::builder::Init_ObstacleCir_center();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_CIR__BUILDER_HPP_
