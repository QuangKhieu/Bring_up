// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/StateAMR.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__STATE_AMR__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__STATE_AMR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__StateAMR __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__StateAMR __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateAMR_
{
  using Type = StateAMR_<ContainerAllocator>;

  explicit StateAMR_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
      this->state = 0;
      this->pose = "";
      this->mode = "";
      this->agv_mode = 0;
    }
  }

  explicit StateAMR_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ip(_alloc),
    pose(_alloc),
    mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
      this->state = 0;
      this->pose = "";
      this->mode = "";
      this->agv_mode = 0;
    }
  }

  // field types and members
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;
  using _state_type =
    int8_t;
  _state_type state;
  using _pose_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pose_type pose;
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;
  using _agv_mode_type =
    int8_t;
  _agv_mode_type agv_mode;

  // setters for named parameter idiom
  Type & set__ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ip = _arg;
    return *this;
  }
  Type & set__state(
    const int8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__pose(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__agv_mode(
    const int8_t & _arg)
  {
    this->agv_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtcrobot_msg::msg::StateAMR_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::StateAMR_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::StateAMR_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::StateAMR_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::StateAMR_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::StateAMR_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::StateAMR_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::StateAMR_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::StateAMR_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::StateAMR_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__StateAMR
    std::shared_ptr<rtcrobot_msg::msg::StateAMR_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__StateAMR
    std::shared_ptr<rtcrobot_msg::msg::StateAMR_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateAMR_ & other) const
  {
    if (this->ip != other.ip) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->agv_mode != other.agv_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateAMR_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateAMR_

// alias to use template instance with default allocator
using StateAMR =
  rtcrobot_msg::msg::StateAMR_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__STATE_AMR__STRUCT_HPP_
