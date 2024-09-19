// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/PlcWrite.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__PLC_WRITE__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__PLC_WRITE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__PlcWrite __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__PlcWrite __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlcWrite_
{
  using Type = PlcWrite_<ContainerAllocator>;

  explicit PlcWrite_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_left_stop = 0;
      this->motor_left_reset = 0;
      this->motor_right_stop = 0;
      this->motor_right_reset = 0;
      this->front_left_lamp = 0;
      this->front_right_lamp = 0;
      this->back_left_lamp = 0;
      this->back_right_lamp = 0;
      this->red_lamp = 0;
      this->yellow_lamp = 0;
      this->green_lamp = 0;
      this->charger = 0;
      this->plc_safety = 0;
      this->brake_on = 0;
      this->tim_forward_in1 = 0;
      this->tim_forward_in2 = 0;
      this->tim_forward_in3 = 0;
      this->tim_forward_in4 = 0;
      this->tim_backward_in1 = 0;
      this->tim_backward_in2 = 0;
      this->tim_backward_in3 = 0;
      this->tim_backward_in4 = 0;
    }
  }

  explicit PlcWrite_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_left_stop = 0;
      this->motor_left_reset = 0;
      this->motor_right_stop = 0;
      this->motor_right_reset = 0;
      this->front_left_lamp = 0;
      this->front_right_lamp = 0;
      this->back_left_lamp = 0;
      this->back_right_lamp = 0;
      this->red_lamp = 0;
      this->yellow_lamp = 0;
      this->green_lamp = 0;
      this->charger = 0;
      this->plc_safety = 0;
      this->brake_on = 0;
      this->tim_forward_in1 = 0;
      this->tim_forward_in2 = 0;
      this->tim_forward_in3 = 0;
      this->tim_forward_in4 = 0;
      this->tim_backward_in1 = 0;
      this->tim_backward_in2 = 0;
      this->tim_backward_in3 = 0;
      this->tim_backward_in4 = 0;
    }
  }

  // field types and members
  using _motor_left_stop_type =
    uint8_t;
  _motor_left_stop_type motor_left_stop;
  using _motor_left_reset_type =
    uint8_t;
  _motor_left_reset_type motor_left_reset;
  using _motor_right_stop_type =
    uint8_t;
  _motor_right_stop_type motor_right_stop;
  using _motor_right_reset_type =
    uint8_t;
  _motor_right_reset_type motor_right_reset;
  using _front_left_lamp_type =
    uint8_t;
  _front_left_lamp_type front_left_lamp;
  using _front_right_lamp_type =
    uint8_t;
  _front_right_lamp_type front_right_lamp;
  using _back_left_lamp_type =
    uint8_t;
  _back_left_lamp_type back_left_lamp;
  using _back_right_lamp_type =
    uint8_t;
  _back_right_lamp_type back_right_lamp;
  using _red_lamp_type =
    uint8_t;
  _red_lamp_type red_lamp;
  using _yellow_lamp_type =
    uint8_t;
  _yellow_lamp_type yellow_lamp;
  using _green_lamp_type =
    uint8_t;
  _green_lamp_type green_lamp;
  using _charger_type =
    uint8_t;
  _charger_type charger;
  using _plc_safety_type =
    uint8_t;
  _plc_safety_type plc_safety;
  using _brake_on_type =
    uint8_t;
  _brake_on_type brake_on;
  using _tim_forward_in1_type =
    uint8_t;
  _tim_forward_in1_type tim_forward_in1;
  using _tim_forward_in2_type =
    uint8_t;
  _tim_forward_in2_type tim_forward_in2;
  using _tim_forward_in3_type =
    uint8_t;
  _tim_forward_in3_type tim_forward_in3;
  using _tim_forward_in4_type =
    uint8_t;
  _tim_forward_in4_type tim_forward_in4;
  using _tim_backward_in1_type =
    uint8_t;
  _tim_backward_in1_type tim_backward_in1;
  using _tim_backward_in2_type =
    uint8_t;
  _tim_backward_in2_type tim_backward_in2;
  using _tim_backward_in3_type =
    uint8_t;
  _tim_backward_in3_type tim_backward_in3;
  using _tim_backward_in4_type =
    uint8_t;
  _tim_backward_in4_type tim_backward_in4;

  // setters for named parameter idiom
  Type & set__motor_left_stop(
    const uint8_t & _arg)
  {
    this->motor_left_stop = _arg;
    return *this;
  }
  Type & set__motor_left_reset(
    const uint8_t & _arg)
  {
    this->motor_left_reset = _arg;
    return *this;
  }
  Type & set__motor_right_stop(
    const uint8_t & _arg)
  {
    this->motor_right_stop = _arg;
    return *this;
  }
  Type & set__motor_right_reset(
    const uint8_t & _arg)
  {
    this->motor_right_reset = _arg;
    return *this;
  }
  Type & set__front_left_lamp(
    const uint8_t & _arg)
  {
    this->front_left_lamp = _arg;
    return *this;
  }
  Type & set__front_right_lamp(
    const uint8_t & _arg)
  {
    this->front_right_lamp = _arg;
    return *this;
  }
  Type & set__back_left_lamp(
    const uint8_t & _arg)
  {
    this->back_left_lamp = _arg;
    return *this;
  }
  Type & set__back_right_lamp(
    const uint8_t & _arg)
  {
    this->back_right_lamp = _arg;
    return *this;
  }
  Type & set__red_lamp(
    const uint8_t & _arg)
  {
    this->red_lamp = _arg;
    return *this;
  }
  Type & set__yellow_lamp(
    const uint8_t & _arg)
  {
    this->yellow_lamp = _arg;
    return *this;
  }
  Type & set__green_lamp(
    const uint8_t & _arg)
  {
    this->green_lamp = _arg;
    return *this;
  }
  Type & set__charger(
    const uint8_t & _arg)
  {
    this->charger = _arg;
    return *this;
  }
  Type & set__plc_safety(
    const uint8_t & _arg)
  {
    this->plc_safety = _arg;
    return *this;
  }
  Type & set__brake_on(
    const uint8_t & _arg)
  {
    this->brake_on = _arg;
    return *this;
  }
  Type & set__tim_forward_in1(
    const uint8_t & _arg)
  {
    this->tim_forward_in1 = _arg;
    return *this;
  }
  Type & set__tim_forward_in2(
    const uint8_t & _arg)
  {
    this->tim_forward_in2 = _arg;
    return *this;
  }
  Type & set__tim_forward_in3(
    const uint8_t & _arg)
  {
    this->tim_forward_in3 = _arg;
    return *this;
  }
  Type & set__tim_forward_in4(
    const uint8_t & _arg)
  {
    this->tim_forward_in4 = _arg;
    return *this;
  }
  Type & set__tim_backward_in1(
    const uint8_t & _arg)
  {
    this->tim_backward_in1 = _arg;
    return *this;
  }
  Type & set__tim_backward_in2(
    const uint8_t & _arg)
  {
    this->tim_backward_in2 = _arg;
    return *this;
  }
  Type & set__tim_backward_in3(
    const uint8_t & _arg)
  {
    this->tim_backward_in3 = _arg;
    return *this;
  }
  Type & set__tim_backward_in4(
    const uint8_t & _arg)
  {
    this->tim_backward_in4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtcrobot_msg::msg::PlcWrite_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::PlcWrite_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::PlcWrite_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::PlcWrite_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::PlcWrite_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::PlcWrite_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::PlcWrite_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::PlcWrite_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::PlcWrite_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::PlcWrite_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__PlcWrite
    std::shared_ptr<rtcrobot_msg::msg::PlcWrite_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__PlcWrite
    std::shared_ptr<rtcrobot_msg::msg::PlcWrite_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlcWrite_ & other) const
  {
    if (this->motor_left_stop != other.motor_left_stop) {
      return false;
    }
    if (this->motor_left_reset != other.motor_left_reset) {
      return false;
    }
    if (this->motor_right_stop != other.motor_right_stop) {
      return false;
    }
    if (this->motor_right_reset != other.motor_right_reset) {
      return false;
    }
    if (this->front_left_lamp != other.front_left_lamp) {
      return false;
    }
    if (this->front_right_lamp != other.front_right_lamp) {
      return false;
    }
    if (this->back_left_lamp != other.back_left_lamp) {
      return false;
    }
    if (this->back_right_lamp != other.back_right_lamp) {
      return false;
    }
    if (this->red_lamp != other.red_lamp) {
      return false;
    }
    if (this->yellow_lamp != other.yellow_lamp) {
      return false;
    }
    if (this->green_lamp != other.green_lamp) {
      return false;
    }
    if (this->charger != other.charger) {
      return false;
    }
    if (this->plc_safety != other.plc_safety) {
      return false;
    }
    if (this->brake_on != other.brake_on) {
      return false;
    }
    if (this->tim_forward_in1 != other.tim_forward_in1) {
      return false;
    }
    if (this->tim_forward_in2 != other.tim_forward_in2) {
      return false;
    }
    if (this->tim_forward_in3 != other.tim_forward_in3) {
      return false;
    }
    if (this->tim_forward_in4 != other.tim_forward_in4) {
      return false;
    }
    if (this->tim_backward_in1 != other.tim_backward_in1) {
      return false;
    }
    if (this->tim_backward_in2 != other.tim_backward_in2) {
      return false;
    }
    if (this->tim_backward_in3 != other.tim_backward_in3) {
      return false;
    }
    if (this->tim_backward_in4 != other.tim_backward_in4) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlcWrite_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlcWrite_

// alias to use template instance with default allocator
using PlcWrite =
  rtcrobot_msg::msg::PlcWrite_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__PLC_WRITE__STRUCT_HPP_
