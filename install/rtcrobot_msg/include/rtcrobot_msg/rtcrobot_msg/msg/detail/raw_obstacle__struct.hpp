// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/RawObstacle.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__RAW_OBSTACLE__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__RAW_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'circles'
#include "rtcrobot_msg/msg/detail/obstacle_cir__struct.hpp"
// Member 'segments'
#include "rtcrobot_msg/msg/detail/obstacle_seg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__RawObstacle __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__RawObstacle __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawObstacle_
{
  using Type = RawObstacle_<ContainerAllocator>;

  explicit RawObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RawObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _circles_type =
    std::vector<rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator>>>;
  _circles_type circles;
  using _segments_type =
    std::vector<rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator>>>;
  _segments_type segments;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__circles(
    const std::vector<rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator>>> & _arg)
  {
    this->circles = _arg;
    return *this;
  }
  Type & set__segments(
    const std::vector<rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtcrobot_msg::msg::ObstacleSeg_<ContainerAllocator>>> & _arg)
  {
    this->segments = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtcrobot_msg::msg::RawObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::RawObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::RawObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::RawObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::RawObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::RawObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::RawObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::RawObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::RawObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::RawObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__RawObstacle
    std::shared_ptr<rtcrobot_msg::msg::RawObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__RawObstacle
    std::shared_ptr<rtcrobot_msg::msg::RawObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawObstacle_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->circles != other.circles) {
      return false;
    }
    if (this->segments != other.segments) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawObstacle_

// alias to use template instance with default allocator
using RawObstacle =
  rtcrobot_msg::msg::RawObstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__RAW_OBSTACLE__STRUCT_HPP_
