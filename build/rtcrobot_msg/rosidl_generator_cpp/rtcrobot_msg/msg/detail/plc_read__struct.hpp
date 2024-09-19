// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/PlcRead.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__PLC_READ__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__PLC_READ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__PlcRead __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__PlcRead __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlcRead_
{
  using Type = PlcRead_<ContainerAllocator>;

  explicit PlcRead_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bumper = 0;
      this->sensor_check_product = 0;
      this->emo_forward = 0;
      this->emo_backward = 0;
      this->auto_switch = 0;
      this->manual_switch = 0;
      this->motor_left_out1 = 0;
      this->motor_left_out2 = 0;
      this->motor_right_out1 = 0;
      this->motor_right_out2 = 0;
      this->start_btn = 0;
      this->stop_btn = 0;
      this->reset_btn = 0;
      this->he_forward_out = 0;
      this->he_forward_er = 0;
      this->he_backward_out = 0;
      this->he_backward_er = 0;
    }
  }

  explicit PlcRead_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bumper = 0;
      this->sensor_check_product = 0;
      this->emo_forward = 0;
      this->emo_backward = 0;
      this->auto_switch = 0;
      this->manual_switch = 0;
      this->motor_left_out1 = 0;
      this->motor_left_out2 = 0;
      this->motor_right_out1 = 0;
      this->motor_right_out2 = 0;
      this->start_btn = 0;
      this->stop_btn = 0;
      this->reset_btn = 0;
      this->he_forward_out = 0;
      this->he_forward_er = 0;
      this->he_backward_out = 0;
      this->he_backward_er = 0;
    }
  }

  // field types and members
  using _bumper_type =
    uint8_t;
  _bumper_type bumper;
  using _sensor_check_product_type =
    uint8_t;
  _sensor_check_product_type sensor_check_product;
  using _emo_forward_type =
    uint8_t;
  _emo_forward_type emo_forward;
  using _emo_backward_type =
    uint8_t;
  _emo_backward_type emo_backward;
  using _auto_switch_type =
    uint8_t;
  _auto_switch_type auto_switch;
  using _manual_switch_type =
    uint8_t;
  _manual_switch_type manual_switch;
  using _motor_left_out1_type =
    uint8_t;
  _motor_left_out1_type motor_left_out1;
  using _motor_left_out2_type =
    uint8_t;
  _motor_left_out2_type motor_left_out2;
  using _motor_right_out1_type =
    uint8_t;
  _motor_right_out1_type motor_right_out1;
  using _motor_right_out2_type =
    uint8_t;
  _motor_right_out2_type motor_right_out2;
  using _start_btn_type =
    uint8_t;
  _start_btn_type start_btn;
  using _stop_btn_type =
    uint8_t;
  _stop_btn_type stop_btn;
  using _reset_btn_type =
    uint8_t;
  _reset_btn_type reset_btn;
  using _he_forward_out_type =
    uint8_t;
  _he_forward_out_type he_forward_out;
  using _he_forward_er_type =
    uint8_t;
  _he_forward_er_type he_forward_er;
  using _he_backward_out_type =
    uint8_t;
  _he_backward_out_type he_backward_out;
  using _he_backward_er_type =
    uint8_t;
  _he_backward_er_type he_backward_er;

  // setters for named parameter idiom
  Type & set__bumper(
    const uint8_t & _arg)
  {
    this->bumper = _arg;
    return *this;
  }
  Type & set__sensor_check_product(
    const uint8_t & _arg)
  {
    this->sensor_check_product = _arg;
    return *this;
  }
  Type & set__emo_forward(
    const uint8_t & _arg)
  {
    this->emo_forward = _arg;
    return *this;
  }
  Type & set__emo_backward(
    const uint8_t & _arg)
  {
    this->emo_backward = _arg;
    return *this;
  }
  Type & set__auto_switch(
    const uint8_t & _arg)
  {
    this->auto_switch = _arg;
    return *this;
  }
  Type & set__manual_switch(
    const uint8_t & _arg)
  {
    this->manual_switch = _arg;
    return *this;
  }
  Type & set__motor_left_out1(
    const uint8_t & _arg)
  {
    this->motor_left_out1 = _arg;
    return *this;
  }
  Type & set__motor_left_out2(
    const uint8_t & _arg)
  {
    this->motor_left_out2 = _arg;
    return *this;
  }
  Type & set__motor_right_out1(
    const uint8_t & _arg)
  {
    this->motor_right_out1 = _arg;
    return *this;
  }
  Type & set__motor_right_out2(
    const uint8_t & _arg)
  {
    this->motor_right_out2 = _arg;
    return *this;
  }
  Type & set__start_btn(
    const uint8_t & _arg)
  {
    this->start_btn = _arg;
    return *this;
  }
  Type & set__stop_btn(
    const uint8_t & _arg)
  {
    this->stop_btn = _arg;
    return *this;
  }
  Type & set__reset_btn(
    const uint8_t & _arg)
  {
    this->reset_btn = _arg;
    return *this;
  }
  Type & set__he_forward_out(
    const uint8_t & _arg)
  {
    this->he_forward_out = _arg;
    return *this;
  }
  Type & set__he_forward_er(
    const uint8_t & _arg)
  {
    this->he_forward_er = _arg;
    return *this;
  }
  Type & set__he_backward_out(
    const uint8_t & _arg)
  {
    this->he_backward_out = _arg;
    return *this;
  }
  Type & set__he_backward_er(
    const uint8_t & _arg)
  {
    this->he_backward_er = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtcrobot_msg::msg::PlcRead_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::PlcRead_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::PlcRead_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::PlcRead_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::PlcRead_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::PlcRead_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::PlcRead_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::PlcRead_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::PlcRead_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::PlcRead_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__PlcRead
    std::shared_ptr<rtcrobot_msg::msg::PlcRead_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__PlcRead
    std::shared_ptr<rtcrobot_msg::msg::PlcRead_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlcRead_ & other) const
  {
    if (this->bumper != other.bumper) {
      return false;
    }
    if (this->sensor_check_product != other.sensor_check_product) {
      return false;
    }
    if (this->emo_forward != other.emo_forward) {
      return false;
    }
    if (this->emo_backward != other.emo_backward) {
      return false;
    }
    if (this->auto_switch != other.auto_switch) {
      return false;
    }
    if (this->manual_switch != other.manual_switch) {
      return false;
    }
    if (this->motor_left_out1 != other.motor_left_out1) {
      return false;
    }
    if (this->motor_left_out2 != other.motor_left_out2) {
      return false;
    }
    if (this->motor_right_out1 != other.motor_right_out1) {
      return false;
    }
    if (this->motor_right_out2 != other.motor_right_out2) {
      return false;
    }
    if (this->start_btn != other.start_btn) {
      return false;
    }
    if (this->stop_btn != other.stop_btn) {
      return false;
    }
    if (this->reset_btn != other.reset_btn) {
      return false;
    }
    if (this->he_forward_out != other.he_forward_out) {
      return false;
    }
    if (this->he_forward_er != other.he_forward_er) {
      return false;
    }
    if (this->he_backward_out != other.he_backward_out) {
      return false;
    }
    if (this->he_backward_er != other.he_backward_er) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlcRead_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlcRead_

// alias to use template instance with default allocator
using PlcRead =
  rtcrobot_msg::msg::PlcRead_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__PLC_READ__STRUCT_HPP_
