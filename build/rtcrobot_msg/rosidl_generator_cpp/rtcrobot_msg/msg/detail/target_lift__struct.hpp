// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/TargetLift.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__TARGET_LIFT__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__TARGET_LIFT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__TargetLift __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__TargetLift __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetLift_
{
  using Type = TargetLift_<ContainerAllocator>;

  explicit TargetLift_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
      this->mode = 0;
      this->height = 0.0f;
    }
  }

  explicit TargetLift_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ip(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
      this->mode = 0;
      this->height = 0.0f;
    }
  }

  // field types and members
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;
  using _mode_type =
    int8_t;
  _mode_type mode;
  using _height_type =
    float;
  _height_type height;

  // setters for named parameter idiom
  Type & set__ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ip = _arg;
    return *this;
  }
  Type & set__mode(
    const int8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtcrobot_msg::msg::TargetLift_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::TargetLift_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::TargetLift_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::TargetLift_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::TargetLift_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::TargetLift_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::TargetLift_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::TargetLift_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::TargetLift_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::TargetLift_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__TargetLift
    std::shared_ptr<rtcrobot_msg::msg::TargetLift_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__TargetLift
    std::shared_ptr<rtcrobot_msg::msg::TargetLift_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetLift_ & other) const
  {
    if (this->ip != other.ip) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetLift_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetLift_

// alias to use template instance with default allocator
using TargetLift =
  rtcrobot_msg::msg::TargetLift_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__TARGET_LIFT__STRUCT_HPP_