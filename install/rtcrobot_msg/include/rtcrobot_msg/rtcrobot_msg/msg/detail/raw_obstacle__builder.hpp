// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/RawObstacle.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__RAW_OBSTACLE__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__RAW_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/raw_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_RawObstacle_segments
{
public:
  explicit Init_RawObstacle_segments(::rtcrobot_msg::msg::RawObstacle & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::RawObstacle segments(::rtcrobot_msg::msg::RawObstacle::_segments_type arg)
  {
    msg_.segments = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::RawObstacle msg_;
};

class Init_RawObstacle_circles
{
public:
  explicit Init_RawObstacle_circles(::rtcrobot_msg::msg::RawObstacle & msg)
  : msg_(msg)
  {}
  Init_RawObstacle_segments circles(::rtcrobot_msg::msg::RawObstacle::_circles_type arg)
  {
    msg_.circles = std::move(arg);
    return Init_RawObstacle_segments(msg_);
  }

private:
  ::rtcrobot_msg::msg::RawObstacle msg_;
};

class Init_RawObstacle_header
{
public:
  Init_RawObstacle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawObstacle_circles header(::rtcrobot_msg::msg::RawObstacle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RawObstacle_circles(msg_);
  }

private:
  ::rtcrobot_msg::msg::RawObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::RawObstacle>()
{
  return rtcrobot_msg::msg::builder::Init_RawObstacle_header();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__RAW_OBSTACLE__BUILDER_HPP_
