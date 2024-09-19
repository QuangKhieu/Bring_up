// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/StateAMR.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__STATE_AMR__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__STATE_AMR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/state_amr__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_StateAMR_agv_mode
{
public:
  explicit Init_StateAMR_agv_mode(::rtcrobot_msg::msg::StateAMR & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::StateAMR agv_mode(::rtcrobot_msg::msg::StateAMR::_agv_mode_type arg)
  {
    msg_.agv_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::StateAMR msg_;
};

class Init_StateAMR_mode
{
public:
  explicit Init_StateAMR_mode(::rtcrobot_msg::msg::StateAMR & msg)
  : msg_(msg)
  {}
  Init_StateAMR_agv_mode mode(::rtcrobot_msg::msg::StateAMR::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_StateAMR_agv_mode(msg_);
  }

private:
  ::rtcrobot_msg::msg::StateAMR msg_;
};

class Init_StateAMR_pose
{
public:
  explicit Init_StateAMR_pose(::rtcrobot_msg::msg::StateAMR & msg)
  : msg_(msg)
  {}
  Init_StateAMR_mode pose(::rtcrobot_msg::msg::StateAMR::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_StateAMR_mode(msg_);
  }

private:
  ::rtcrobot_msg::msg::StateAMR msg_;
};

class Init_StateAMR_state
{
public:
  explicit Init_StateAMR_state(::rtcrobot_msg::msg::StateAMR & msg)
  : msg_(msg)
  {}
  Init_StateAMR_pose state(::rtcrobot_msg::msg::StateAMR::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_StateAMR_pose(msg_);
  }

private:
  ::rtcrobot_msg::msg::StateAMR msg_;
};

class Init_StateAMR_ip
{
public:
  Init_StateAMR_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateAMR_state ip(::rtcrobot_msg::msg::StateAMR::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_StateAMR_state(msg_);
  }

private:
  ::rtcrobot_msg::msg::StateAMR msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::StateAMR>()
{
  return rtcrobot_msg::msg::builder::Init_StateAMR_ip();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__STATE_AMR__BUILDER_HPP_
