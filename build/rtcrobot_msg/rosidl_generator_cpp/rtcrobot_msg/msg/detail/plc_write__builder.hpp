// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/PlcWrite.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__PLC_WRITE__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__PLC_WRITE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/plc_write__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_PlcWrite_tim_backward_in4
{
public:
  explicit Init_PlcWrite_tim_backward_in4(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::PlcWrite tim_backward_in4(::rtcrobot_msg::msg::PlcWrite::_tim_backward_in4_type arg)
  {
    msg_.tim_backward_in4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_tim_backward_in3
{
public:
  explicit Init_PlcWrite_tim_backward_in3(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_tim_backward_in4 tim_backward_in3(::rtcrobot_msg::msg::PlcWrite::_tim_backward_in3_type arg)
  {
    msg_.tim_backward_in3 = std::move(arg);
    return Init_PlcWrite_tim_backward_in4(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_tim_backward_in2
{
public:
  explicit Init_PlcWrite_tim_backward_in2(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_tim_backward_in3 tim_backward_in2(::rtcrobot_msg::msg::PlcWrite::_tim_backward_in2_type arg)
  {
    msg_.tim_backward_in2 = std::move(arg);
    return Init_PlcWrite_tim_backward_in3(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_tim_backward_in1
{
public:
  explicit Init_PlcWrite_tim_backward_in1(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_tim_backward_in2 tim_backward_in1(::rtcrobot_msg::msg::PlcWrite::_tim_backward_in1_type arg)
  {
    msg_.tim_backward_in1 = std::move(arg);
    return Init_PlcWrite_tim_backward_in2(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_tim_forward_in4
{
public:
  explicit Init_PlcWrite_tim_forward_in4(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_tim_backward_in1 tim_forward_in4(::rtcrobot_msg::msg::PlcWrite::_tim_forward_in4_type arg)
  {
    msg_.tim_forward_in4 = std::move(arg);
    return Init_PlcWrite_tim_backward_in1(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_tim_forward_in3
{
public:
  explicit Init_PlcWrite_tim_forward_in3(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_tim_forward_in4 tim_forward_in3(::rtcrobot_msg::msg::PlcWrite::_tim_forward_in3_type arg)
  {
    msg_.tim_forward_in3 = std::move(arg);
    return Init_PlcWrite_tim_forward_in4(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_tim_forward_in2
{
public:
  explicit Init_PlcWrite_tim_forward_in2(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_tim_forward_in3 tim_forward_in2(::rtcrobot_msg::msg::PlcWrite::_tim_forward_in2_type arg)
  {
    msg_.tim_forward_in2 = std::move(arg);
    return Init_PlcWrite_tim_forward_in3(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_tim_forward_in1
{
public:
  explicit Init_PlcWrite_tim_forward_in1(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_tim_forward_in2 tim_forward_in1(::rtcrobot_msg::msg::PlcWrite::_tim_forward_in1_type arg)
  {
    msg_.tim_forward_in1 = std::move(arg);
    return Init_PlcWrite_tim_forward_in2(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_brake_on
{
public:
  explicit Init_PlcWrite_brake_on(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_tim_forward_in1 brake_on(::rtcrobot_msg::msg::PlcWrite::_brake_on_type arg)
  {
    msg_.brake_on = std::move(arg);
    return Init_PlcWrite_tim_forward_in1(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_plc_safety
{
public:
  explicit Init_PlcWrite_plc_safety(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_brake_on plc_safety(::rtcrobot_msg::msg::PlcWrite::_plc_safety_type arg)
  {
    msg_.plc_safety = std::move(arg);
    return Init_PlcWrite_brake_on(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_charger
{
public:
  explicit Init_PlcWrite_charger(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_plc_safety charger(::rtcrobot_msg::msg::PlcWrite::_charger_type arg)
  {
    msg_.charger = std::move(arg);
    return Init_PlcWrite_plc_safety(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_green_lamp
{
public:
  explicit Init_PlcWrite_green_lamp(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_charger green_lamp(::rtcrobot_msg::msg::PlcWrite::_green_lamp_type arg)
  {
    msg_.green_lamp = std::move(arg);
    return Init_PlcWrite_charger(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_yellow_lamp
{
public:
  explicit Init_PlcWrite_yellow_lamp(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_green_lamp yellow_lamp(::rtcrobot_msg::msg::PlcWrite::_yellow_lamp_type arg)
  {
    msg_.yellow_lamp = std::move(arg);
    return Init_PlcWrite_green_lamp(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_red_lamp
{
public:
  explicit Init_PlcWrite_red_lamp(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_yellow_lamp red_lamp(::rtcrobot_msg::msg::PlcWrite::_red_lamp_type arg)
  {
    msg_.red_lamp = std::move(arg);
    return Init_PlcWrite_yellow_lamp(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_back_right_lamp
{
public:
  explicit Init_PlcWrite_back_right_lamp(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_red_lamp back_right_lamp(::rtcrobot_msg::msg::PlcWrite::_back_right_lamp_type arg)
  {
    msg_.back_right_lamp = std::move(arg);
    return Init_PlcWrite_red_lamp(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_back_left_lamp
{
public:
  explicit Init_PlcWrite_back_left_lamp(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_back_right_lamp back_left_lamp(::rtcrobot_msg::msg::PlcWrite::_back_left_lamp_type arg)
  {
    msg_.back_left_lamp = std::move(arg);
    return Init_PlcWrite_back_right_lamp(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_front_right_lamp
{
public:
  explicit Init_PlcWrite_front_right_lamp(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_back_left_lamp front_right_lamp(::rtcrobot_msg::msg::PlcWrite::_front_right_lamp_type arg)
  {
    msg_.front_right_lamp = std::move(arg);
    return Init_PlcWrite_back_left_lamp(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_front_left_lamp
{
public:
  explicit Init_PlcWrite_front_left_lamp(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_front_right_lamp front_left_lamp(::rtcrobot_msg::msg::PlcWrite::_front_left_lamp_type arg)
  {
    msg_.front_left_lamp = std::move(arg);
    return Init_PlcWrite_front_right_lamp(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_motor_right_reset
{
public:
  explicit Init_PlcWrite_motor_right_reset(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_front_left_lamp motor_right_reset(::rtcrobot_msg::msg::PlcWrite::_motor_right_reset_type arg)
  {
    msg_.motor_right_reset = std::move(arg);
    return Init_PlcWrite_front_left_lamp(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_motor_right_stop
{
public:
  explicit Init_PlcWrite_motor_right_stop(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_motor_right_reset motor_right_stop(::rtcrobot_msg::msg::PlcWrite::_motor_right_stop_type arg)
  {
    msg_.motor_right_stop = std::move(arg);
    return Init_PlcWrite_motor_right_reset(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_motor_left_reset
{
public:
  explicit Init_PlcWrite_motor_left_reset(::rtcrobot_msg::msg::PlcWrite & msg)
  : msg_(msg)
  {}
  Init_PlcWrite_motor_right_stop motor_left_reset(::rtcrobot_msg::msg::PlcWrite::_motor_left_reset_type arg)
  {
    msg_.motor_left_reset = std::move(arg);
    return Init_PlcWrite_motor_right_stop(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

class Init_PlcWrite_motor_left_stop
{
public:
  Init_PlcWrite_motor_left_stop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlcWrite_motor_left_reset motor_left_stop(::rtcrobot_msg::msg::PlcWrite::_motor_left_stop_type arg)
  {
    msg_.motor_left_stop = std::move(arg);
    return Init_PlcWrite_motor_left_reset(msg_);
  }

private:
  ::rtcrobot_msg::msg::PlcWrite msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::PlcWrite>()
{
  return rtcrobot_msg::msg::builder::Init_PlcWrite_motor_left_stop();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__PLC_WRITE__BUILDER_HPP_
