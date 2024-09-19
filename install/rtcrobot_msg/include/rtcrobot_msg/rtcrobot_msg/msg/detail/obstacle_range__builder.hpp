// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/ObstacleRange.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_RANGE__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/obstacle_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_ObstacleRange_range
{
public:
  explicit Init_ObstacleRange_range(::rtcrobot_msg::msg::ObstacleRange & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::ObstacleRange range(::rtcrobot_msg::msg::ObstacleRange::_range_type arg)
  {
    msg_.range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::ObstacleRange msg_;
};

class Init_ObstacleRange_header
{
public:
  Init_ObstacleRange_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleRange_range header(::rtcrobot_msg::msg::ObstacleRange::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObstacleRange_range(msg_);
  }

private:
  ::rtcrobot_msg::msg::ObstacleRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::ObstacleRange>()
{
  return rtcrobot_msg::msg::builder::Init_ObstacleRange_header();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_RANGE__BUILDER_HPP_
