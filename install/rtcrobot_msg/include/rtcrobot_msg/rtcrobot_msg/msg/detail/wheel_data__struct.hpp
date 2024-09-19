// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/WheelData.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__WHEEL_DATA__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__WHEEL_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'left'
// Member 'right'
#include "rtcrobot_msg/msg/detail/motor_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__WheelData __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__WheelData __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelData_
{
  using Type = WheelData_<ContainerAllocator>;

  explicit WheelData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left(_init),
    right(_init)
  {
    (void)_init;
  }

  explicit WheelData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left(_alloc, _init),
    right(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _left_type =
    rtcrobot_msg::msg::MotorData_<ContainerAllocator>;
  _left_type left;
  using _right_type =
    rtcrobot_msg::msg::MotorData_<ContainerAllocator>;
  _right_type right;

  // setters for named parameter idiom
  Type & set__left(
    const rtcrobot_msg::msg::MotorData_<ContainerAllocator> & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__right(
    const rtcrobot_msg::msg::MotorData_<ContainerAllocator> & _arg)
  {
    this->right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtcrobot_msg::msg::WheelData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::WheelData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::WheelData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::WheelData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::WheelData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::WheelData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::WheelData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::WheelData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::WheelData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::WheelData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__WheelData
    std::shared_ptr<rtcrobot_msg::msg::WheelData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__WheelData
    std::shared_ptr<rtcrobot_msg::msg::WheelData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelData_ & other) const
  {
    if (this->left != other.left) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelData_

// alias to use template instance with default allocator
using WheelData =
  rtcrobot_msg::msg::WheelData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__WHEEL_DATA__STRUCT_HPP_
