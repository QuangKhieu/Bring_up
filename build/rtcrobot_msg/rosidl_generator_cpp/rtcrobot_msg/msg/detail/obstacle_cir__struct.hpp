// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/ObstacleCir.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_CIR__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_CIR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__ObstacleCir __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__ObstacleCir __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleCir_
{
  using Type = ObstacleCir_<ContainerAllocator>;

  explicit ObstacleCir_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_init),
    velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0.0;
      this->true_radius = 0.0;
    }
  }

  explicit ObstacleCir_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_alloc, _init),
    velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0.0;
      this->true_radius = 0.0;
    }
  }

  // field types and members
  using _center_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _center_type center;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _radius_type =
    double;
  _radius_type radius;
  using _true_radius_type =
    double;
  _true_radius_type true_radius;

  // setters for named parameter idiom
  Type & set__center(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__radius(
    const double & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__true_radius(
    const double & _arg)
  {
    this->true_radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__ObstacleCir
    std::shared_ptr<rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__ObstacleCir
    std::shared_ptr<rtcrobot_msg::msg::ObstacleCir_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleCir_ & other) const
  {
    if (this->center != other.center) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->true_radius != other.true_radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleCir_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleCir_

// alias to use template instance with default allocator
using ObstacleCir =
  rtcrobot_msg::msg::ObstacleCir_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_CIR__STRUCT_HPP_
