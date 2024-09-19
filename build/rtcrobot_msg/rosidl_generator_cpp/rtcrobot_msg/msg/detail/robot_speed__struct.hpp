// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/RobotSpeed.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__ROBOT_SPEED__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__ROBOT_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__RobotSpeed __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__RobotSpeed __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotSpeed_
{
  using Type = RobotSpeed_<ContainerAllocator>;

  explicit RobotSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->vx = 0;
      this->az = 0;
    }
  }

  explicit RobotSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->vx = 0;
      this->az = 0;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _vx_type =
    int8_t;
  _vx_type vx;
  using _az_type =
    int8_t;
  _az_type az;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__vx(
    const int8_t & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__az(
    const int8_t & _arg)
  {
    this->az = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtcrobot_msg::msg::RobotSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::RobotSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::RobotSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::RobotSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::RobotSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::RobotSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::RobotSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::RobotSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::RobotSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::RobotSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__RobotSpeed
    std::shared_ptr<rtcrobot_msg::msg::RobotSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__RobotSpeed
    std::shared_ptr<rtcrobot_msg::msg::RobotSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotSpeed_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->az != other.az) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotSpeed_

// alias to use template instance with default allocator
using RobotSpeed =
  rtcrobot_msg::msg::RobotSpeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__ROBOT_SPEED__STRUCT_HPP_
