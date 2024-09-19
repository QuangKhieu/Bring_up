// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/CmdJoy.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__CMD_JOY__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__CMD_JOY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__CmdJoy __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__CmdJoy __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CmdJoy_
{
  using Type = CmdJoy_<ContainerAllocator>;

  explicit CmdJoy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manual = 0;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->az = 0.0f;
    }
  }

  explicit CmdJoy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manual = 0;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->az = 0.0f;
    }
  }

  // field types and members
  using _manual_type =
    int8_t;
  _manual_type manual;
  using _vx_type =
    float;
  _vx_type vx;
  using _vy_type =
    float;
  _vy_type vy;
  using _az_type =
    float;
  _az_type az;

  // setters for named parameter idiom
  Type & set__manual(
    const int8_t & _arg)
  {
    this->manual = _arg;
    return *this;
  }
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const float & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__az(
    const float & _arg)
  {
    this->az = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtcrobot_msg::msg::CmdJoy_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::CmdJoy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::CmdJoy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::CmdJoy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::CmdJoy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::CmdJoy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::CmdJoy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::CmdJoy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::CmdJoy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::CmdJoy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__CmdJoy
    std::shared_ptr<rtcrobot_msg::msg::CmdJoy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__CmdJoy
    std::shared_ptr<rtcrobot_msg::msg::CmdJoy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CmdJoy_ & other) const
  {
    if (this->manual != other.manual) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->az != other.az) {
      return false;
    }
    return true;
  }
  bool operator!=(const CmdJoy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CmdJoy_

// alias to use template instance with default allocator
using CmdJoy =
  rtcrobot_msg::msg::CmdJoy_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__CMD_JOY__STRUCT_HPP_
