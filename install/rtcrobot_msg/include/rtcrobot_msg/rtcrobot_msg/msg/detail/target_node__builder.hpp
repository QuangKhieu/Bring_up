// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/TargetNode.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__TARGET_NODE__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__TARGET_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/target_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_TargetNode_theta
{
public:
  explicit Init_TargetNode_theta(::rtcrobot_msg::msg::TargetNode & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::TargetNode theta(::rtcrobot_msg::msg::TargetNode::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::TargetNode msg_;
};

class Init_TargetNode_point
{
public:
  explicit Init_TargetNode_point(::rtcrobot_msg::msg::TargetNode & msg)
  : msg_(msg)
  {}
  Init_TargetNode_theta point(::rtcrobot_msg::msg::TargetNode::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_TargetNode_theta(msg_);
  }

private:
  ::rtcrobot_msg::msg::TargetNode msg_;
};

class Init_TargetNode_mode
{
public:
  explicit Init_TargetNode_mode(::rtcrobot_msg::msg::TargetNode & msg)
  : msg_(msg)
  {}
  Init_TargetNode_point mode(::rtcrobot_msg::msg::TargetNode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_TargetNode_point(msg_);
  }

private:
  ::rtcrobot_msg::msg::TargetNode msg_;
};

class Init_TargetNode_ip
{
public:
  Init_TargetNode_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetNode_mode ip(::rtcrobot_msg::msg::TargetNode::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_TargetNode_mode(msg_);
  }

private:
  ::rtcrobot_msg::msg::TargetNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::TargetNode>()
{
  return rtcrobot_msg::msg::builder::Init_TargetNode_ip();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__TARGET_NODE__BUILDER_HPP_
