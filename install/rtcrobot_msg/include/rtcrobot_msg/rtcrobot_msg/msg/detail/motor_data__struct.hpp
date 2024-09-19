// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/MotorData.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__MOTOR_DATA__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__MOTOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__MotorData __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__MotorData __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorData_
{
  using Type = MotorData_<ContainerAllocator>;

  explicit MotorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connect = false;
      this->speed = 0.0;
      this->enc = 0.0;
      this->err = 0ll;
      this->status = 0ll;
    }
  }

  explicit MotorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connect = false;
      this->speed = 0.0;
      this->enc = 0.0;
      this->err = 0ll;
      this->status = 0ll;
    }
  }

  // field types and members
  using _connect_type =
    bool;
  _connect_type connect;
  using _speed_type =
    double;
  _speed_type speed;
  using _enc_type =
    double;
  _enc_type enc;
  using _err_type =
    int64_t;
  _err_type err;
  using _status_type =
    int64_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__connect(
    const bool & _arg)
  {
    this->connect = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__enc(
    const double & _arg)
  {
    this->enc = _arg;
    return *this;
  }
  Type & set__err(
    const int64_t & _arg)
  {
    this->err = _arg;
    return *this;
  }
  Type & set__status(
    const int64_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtcrobot_msg::msg::MotorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::MotorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::MotorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::MotorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::MotorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::MotorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::MotorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::MotorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::MotorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::MotorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__MotorData
    std::shared_ptr<rtcrobot_msg::msg::MotorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__MotorData
    std::shared_ptr<rtcrobot_msg::msg::MotorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorData_ & other) const
  {
    if (this->connect != other.connect) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->enc != other.enc) {
      return false;
    }
    if (this->err != other.err) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorData_

// alias to use template instance with default allocator
using MotorData =
  rtcrobot_msg::msg::MotorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__MOTOR_DATA__STRUCT_HPP_
