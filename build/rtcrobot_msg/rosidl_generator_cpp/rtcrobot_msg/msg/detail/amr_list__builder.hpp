// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/AmrList.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__AMR_LIST__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__AMR_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/amr_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_AmrList_list
{
public:
  Init_AmrList_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtcrobot_msg::msg::AmrList list(::rtcrobot_msg::msg::AmrList::_list_type arg)
  {
    msg_.list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::AmrList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::AmrList>()
{
  return rtcrobot_msg::msg::builder::Init_AmrList_list();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__AMR_LIST__BUILDER_HPP_
