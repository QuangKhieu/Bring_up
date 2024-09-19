// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/MotorData.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/motor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_MotorData_status
{
public:
  explicit Init_MotorData_status(::rtcrobot_msg::msg::MotorData & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::MotorData status(::rtcrobot_msg::msg::MotorData::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::MotorData msg_;
};

class Init_MotorData_err
{
public:
  explicit Init_MotorData_err(::rtcrobot_msg::msg::MotorData & msg)
  : msg_(msg)
  {}
  Init_MotorData_status err(::rtcrobot_msg::msg::MotorData::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_MotorData_status(msg_);
  }

private:
  ::rtcrobot_msg::msg::MotorData msg_;
};

class Init_MotorData_enc
{
public:
  explicit Init_MotorData_enc(::rtcrobot_msg::msg::MotorData & msg)
  : msg_(msg)
  {}
  Init_MotorData_err enc(::rtcrobot_msg::msg::MotorData::_enc_type arg)
  {
    msg_.enc = std::move(arg);
    return Init_MotorData_err(msg_);
  }

private:
  ::rtcrobot_msg::msg::MotorData msg_;
};

class Init_MotorData_speed
{
public:
  explicit Init_MotorData_speed(::rtcrobot_msg::msg::MotorData & msg)
  : msg_(msg)
  {}
  Init_MotorData_enc speed(::rtcrobot_msg::msg::MotorData::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MotorData_enc(msg_);
  }

private:
  ::rtcrobot_msg::msg::MotorData msg_;
};

class Init_MotorData_connect
{
public:
  Init_MotorData_connect()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorData_speed connect(::rtcrobot_msg::msg::MotorData::_connect_type arg)
  {
    msg_.connect = std::move(arg);
    return Init_MotorData_speed(msg_);
  }

private:
  ::rtcrobot_msg::msg::MotorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::MotorData>()
{
  return rtcrobot_msg::msg::builder::Init_MotorData_connect();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_
