// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/WayPoint.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__WAY_POINT__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__WAY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/way_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_WayPoint_theta
{
public:
  explicit Init_WayPoint_theta(::rtcrobot_msg::msg::WayPoint & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::WayPoint theta(::rtcrobot_msg::msg::WayPoint::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::WayPoint msg_;
};

class Init_WayPoint_waypoints
{
public:
  Init_WayPoint_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WayPoint_theta waypoints(::rtcrobot_msg::msg::WayPoint::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_WayPoint_theta(msg_);
  }

private:
  ::rtcrobot_msg::msg::WayPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::WayPoint>()
{
  return rtcrobot_msg::msg::builder::Init_WayPoint_waypoints();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__WAY_POINT__BUILDER_HPP_
