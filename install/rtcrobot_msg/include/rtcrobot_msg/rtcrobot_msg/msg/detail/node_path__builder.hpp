// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/NodePath.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__NODE_PATH__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__NODE_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/node_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_NodePath_theta
{
public:
  explicit Init_NodePath_theta(::rtcrobot_msg::msg::NodePath & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::NodePath theta(::rtcrobot_msg::msg::NodePath::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::NodePath msg_;
};

class Init_NodePath_waypoints
{
public:
  Init_NodePath_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodePath_theta waypoints(::rtcrobot_msg::msg::NodePath::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_NodePath_theta(msg_);
  }

private:
  ::rtcrobot_msg::msg::NodePath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::NodePath>()
{
  return rtcrobot_msg::msg::builder::Init_NodePath_waypoints();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__NODE_PATH__BUILDER_HPP_
