// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_Obstacle_dist
{
public:
  explicit Init_Obstacle_dist(::rtcrobot_msg::msg::Obstacle & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::Obstacle dist(::rtcrobot_msg::msg::Obstacle::_dist_type arg)
  {
    msg_.dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::Obstacle msg_;
};

class Init_Obstacle_obstacle
{
public:
  explicit Init_Obstacle_obstacle(::rtcrobot_msg::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_dist obstacle(::rtcrobot_msg::msg::Obstacle::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return Init_Obstacle_dist(msg_);
  }

private:
  ::rtcrobot_msg::msg::Obstacle msg_;
};

class Init_Obstacle_header
{
public:
  Init_Obstacle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacle_obstacle header(::rtcrobot_msg::msg::Obstacle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Obstacle_obstacle(msg_);
  }

private:
  ::rtcrobot_msg::msg::Obstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::Obstacle>()
{
  return rtcrobot_msg::msg::builder::Init_Obstacle_header();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
