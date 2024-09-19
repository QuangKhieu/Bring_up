// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/TargetNode.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__TARGET_NODE__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__TARGET_NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__TargetNode __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__TargetNode __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetNode_
{
  using Type = TargetNode_<ContainerAllocator>;

  explicit TargetNode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
      this->mode = 0;
      this->point = "";
      this->theta = 0.0f;
    }
  }

  explicit TargetNode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ip(_alloc),
    point(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
      this->mode = 0;
      this->point = "";
      this->theta = 0.0f;
    }
  }

  // field types and members
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;
  using _mode_type =
    int8_t;
  _mode_type mode;
  using _point_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _point_type point;
  using _theta_type =
    float;
  _theta_type theta;

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
  Type & set__point(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtcrobot_msg::msg::TargetNode_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::TargetNode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::TargetNode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::TargetNode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::TargetNode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::TargetNode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::TargetNode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::TargetNode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::TargetNode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::TargetNode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__TargetNode
    std::shared_ptr<rtcrobot_msg::msg::TargetNode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__TargetNode
    std::shared_ptr<rtcrobot_msg::msg::TargetNode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetNode_ & other) const
  {
    if (this->ip != other.ip) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->point != other.point) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetNode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetNode_

// alias to use template instance with default allocator
using TargetNode =
  rtcrobot_msg::msg::TargetNode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__TARGET_NODE__STRUCT_HPP_
