// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/State.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__STATE__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_State_agv_mode
{
public:
  explicit Init_State_agv_mode(::rtcrobot_msg::msg::State & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::State agv_mode(::rtcrobot_msg::msg::State::_agv_mode_type arg)
  {
    msg_.agv_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::State msg_;
};

class Init_State_mode
{
public:
  explicit Init_State_mode(::rtcrobot_msg::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_agv_mode mode(::rtcrobot_msg::msg::State::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_State_agv_mode(msg_);
  }

private:
  ::rtcrobot_msg::msg::State msg_;
};

class Init_State_pose
{
public:
  explicit Init_State_pose(::rtcrobot_msg::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_mode pose(::rtcrobot_msg::msg::State::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_State_mode(msg_);
  }

private:
  ::rtcrobot_msg::msg::State msg_;
};

class Init_State_state
{
public:
  Init_State_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_pose state(::rtcrobot_msg::msg::State::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_State_pose(msg_);
  }

private:
  ::rtcrobot_msg::msg::State msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::State>()
{
  return rtcrobot_msg::msg::builder::Init_State_state();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__STATE__BUILDER_HPP_
