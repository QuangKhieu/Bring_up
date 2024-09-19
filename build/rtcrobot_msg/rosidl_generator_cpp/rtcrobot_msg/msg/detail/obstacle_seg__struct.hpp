// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/ObstacleSeg.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_SEG__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_SEG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'first_point'
// Member 'last_point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__ObstacleSeg __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__ObstacleSeg __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleSeg_
{
  using Type = ObstacleSeg_<ContainerAllocator>;

  explicit ObstacleSeg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first_point(_init),
    last_point(_init)
  {
    (void)_init;
  }

  explicit ObstacleSeg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first_point(_alloc, _init),
    last_point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _first_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _first_point_type first_point;
  using _last_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _last_point_type last_point;

  // setters for named parameter idiom
  Type & set__first_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->first_point = _arg;
    return *this;
  }
  Type & set__last_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->last_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__ObstacleSeg
    std::shared_ptr<rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__ObstacleSeg
    std::shared_ptr<rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleSeg_ & other) const
  {
    if (this->first_point != other.first_point) {
      return false;
    }
    if (this->last_point != other.last_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleSeg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleSeg_

// alias to use template instance with default allocator
using ObstacleSeg =
  rtcrobot_msg::msg::ObstacleSeg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_SEG__STRUCT_HPP_
