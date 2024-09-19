// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/StringStamped.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__STRING_STAMPED__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__STRING_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/string_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_StringStamped_data
{
public:
  Init_StringStamped_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtcrobot_msg::msg::StringStamped data(::rtcrobot_msg::msg::StringStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::StringStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::StringStamped>()
{
  return rtcrobot_msg::msg::builder::Init_StringStamped_data();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__STRING_STAMPED__BUILDER_HPP_
