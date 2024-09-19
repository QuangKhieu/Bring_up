// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/PlcRead.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__PLC_READ__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__PLC_READ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/plc_read__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_PlcRead_he_backward_er
{
public:
  explicit Init_PlcRead_he_backward_er(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::PlcRead he_backward_er(::rtcrobot_msg::msg::PlcRead::_he_backward_er_type arg)
  {
    msg_.he_backward_er = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_he_backward_out
{
public:
  explicit Init_PlcRead_he_backward_out(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_he_backward_er he_backward_out(::rtcrobot_msg::msg::PlcRead::_he_backward_out_type arg)
  {
    msg_.he_backward_out = std::move(arg);
    return Init_PlcRead_he_backward_er(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_he_forward_er
{
public:
  explicit Init_PlcRead_he_forward_er(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_he_backward_out he_forward_er(::rtcrobot_msg::msg::PlcRead::_he_forward_er_type arg)
  {
    msg_.he_forward_er = std::move(arg);
    return Init_PlcRead_he_backward_out(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_he_forward_out
{
public:
  explicit Init_PlcRead_he_forward_out(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_he_forward_er he_forward_out(::rtcrobot_msg::msg::PlcRead::_he_forward_out_type arg)
  {
    msg_.he_forward_out = std::move(arg);
    return Init_PlcRead_he_forward_er(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_reset_btn
{
public:
  explicit Init_PlcRead_reset_btn(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_he_forward_out reset_btn(::rtcrobot_msg::msg::PlcRead::_reset_btn_type arg)
  {
    msg_.reset_btn = std::move(arg);
    return Init_PlcRead_he_forward_out(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_stop_btn
{
public:
  explicit Init_PlcRead_stop_btn(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_reset_btn stop_btn(::rtcrobot_msg::msg::PlcRead::_stop_btn_type arg)
  {
    msg_.stop_btn = std::move(arg);
    return Init_PlcRead_reset_btn(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_start_btn
{
public:
  explicit Init_PlcRead_start_btn(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_stop_btn start_btn(::rtcrobot_msg::msg::PlcRead::_start_btn_type arg)
  {
    msg_.start_btn = std::move(arg);
    return Init_PlcRead_stop_btn(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_motor_right_out2
{
public:
  explicit Init_PlcRead_motor_right_out2(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_start_btn motor_right_out2(::rtcrobot_msg::msg::PlcRead::_motor_right_out2_type arg)
  {
    msg_.motor_right_out2 = std::move(arg);
    return Init_PlcRead_start_btn(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_motor_right_out1
{
public:
  explicit Init_PlcRead_motor_right_out1(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_motor_right_out2 motor_right_out1(::rtcrobot_msg::msg::PlcRead::_motor_right_out1_type arg)
  {
    msg_.motor_right_out1 = std::move(arg);
    return Init_PlcRead_motor_right_out2(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_motor_left_out2
{
public:
  explicit Init_PlcRead_motor_left_out2(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_motor_right_out1 motor_left_out2(::rtcrobot_msg::msg::PlcRead::_motor_left_out2_type arg)
  {
    msg_.motor_left_out2 = std::move(arg);
    return Init_PlcRead_motor_right_out1(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_motor_left_out1
{
public:
  explicit Init_PlcRead_motor_left_out1(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_motor_left_out2 motor_left_out1(::rtcrobot_msg::msg::PlcRead::_motor_left_out1_type arg)
  {
    msg_.motor_left_out1 = std::move(arg);
    return Init_PlcRead_motor_left_out2(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_manual_switch
{
public:
  explicit Init_PlcRead_manual_switch(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_motor_left_out1 manual_switch(::rtcrobot_msg::msg::PlcRead::_manual_switch_type arg)
  {
    msg_.manual_switch = std::move(arg);
    return Init_PlcRead_motor_left_out1(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_auto_switch
{
public:
  explicit Init_PlcRead_auto_switch(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_manual_switch auto_switch(::rtcrobot_msg::msg::PlcRead::_auto_switch_type arg)
  {
    msg_.auto_switch = std::move(arg);
    return Init_PlcRead_manual_switch(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_emo_backward
{
public:
  explicit Init_PlcRead_emo_backward(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_auto_switch emo_backward(::rtcrobot_msg::msg::PlcRead::_emo_backward_type arg)
  {
    msg_.emo_backward = std::move(arg);
    return Init_PlcRead_auto_switch(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_emo_forward
{
public:
  explicit Init_PlcRead_emo_forward(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_emo_backward emo_forward(::rtcrobot_msg::msg::PlcRead::_emo_forward_type arg)
  {
    msg_.emo_forward = std::move(arg);
    return Init_PlcRead_emo_backward(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_sensor_check_product
{
public:
  explicit Init_PlcRead_sensor_check_product(::rtcrobot_msg::msg::PlcRead & msg)
  : msg_(msg)
  {}
  Init_PlcRead_emo_forward sensor_check_product(::rtcrobot_msg::msg::PlcRead::_sensor_check_product_type arg)
  {
    msg_.sensor_check_product = std::move(arg);
    return Init_PlcRead_emo_forward(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

class Init_PlcRead_bumper
{
public:
  Init_PlcRead_bumper()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlcRead_sensor_check_product bumper(::rtcrobot_msg::msg::PlcRead::_bumper_type arg)
  {
    msg_.bumper = std::move(arg);
    return Init_PlcRead_sensor_check_product(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcRead msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::PlcRead>()
{
  return rtcrobot_msg::msg::builder::Init_PlcRead_bumper();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__PLC_READ__BUILDER_HPP_
