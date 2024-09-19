// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/AmrConn.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__AMR_CONN__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__AMR_CONN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/amr_conn__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_AmrConn_connect
{
public:
  explicit Init_AmrConn_connect(::rtcrobot_msg::msg::AmrConn & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::AmrConn connect(::rtcrobot_msg::msg::AmrConn::_connect_type arg)
  {
    msg_.connect = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::AmrConn msg_;
};

class Init_AmrConn_ip
{
public:
  Init_AmrConn_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AmrConn_connect ip(::rtcrobot_msg::msg::AmrConn::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_AmrConn_connect(msg_);
  }

private:
  ::rtcrobot_msg::msg::AmrConn msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::AmrConn>()
{
  return rtcrobot_msg::msg::builder::Init_AmrConn_ip();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__AMR_CONN__BUILDER_HPP_
