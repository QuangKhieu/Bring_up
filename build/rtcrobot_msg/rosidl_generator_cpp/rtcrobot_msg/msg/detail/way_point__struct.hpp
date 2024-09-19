// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/WayPoint.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__WAY_POINT__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__WAY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__WayPoint __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__WayPoint __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WayPoint_
{
  using Type = WayPoint_<ContainerAllocator>;

  explicit WayPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta = 0.0f;
    }
  }

  explicit WayPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta = 0.0f;
    }
  }

  // field types and members
  using _waypoints_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _waypoints_type waypoints;
  using _theta_type =
    float;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__waypoints(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->waypoints = _arg;
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
    rtcrobot_msg::msg::WayPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::WayPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::WayPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::WayPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::WayPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::WayPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::WayPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::WayPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::WayPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::WayPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__WayPoint
    std::shared_ptr<rtcrobot_msg::msg::WayPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__WayPoint
    std::shared_ptr<rtcrobot_msg::msg::WayPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WayPoint_ & other) const
  {
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const WayPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WayPoint_

// alias to use template instance with default allocator
using WayPoint =
  rtcrobot_msg::msg::WayPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__WAY_POINT__STRUCT_HPP_
