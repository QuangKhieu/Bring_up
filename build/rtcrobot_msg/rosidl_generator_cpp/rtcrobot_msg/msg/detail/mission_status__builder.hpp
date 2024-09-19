// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/mission_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_MissionStatus_status
{
public:
  Init_MissionStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtcrobot_msg::msg::MissionStatus status(::rtcrobot_msg::msg::MissionStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::MissionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::MissionStatus>()
{
  return rtcrobot_msg::msg::builder::Init_MissionStatus_status();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
