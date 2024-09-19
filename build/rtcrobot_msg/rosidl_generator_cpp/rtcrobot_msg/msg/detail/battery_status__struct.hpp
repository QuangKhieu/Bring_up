// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__BATTERY_STATUS__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__BATTERY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__BatteryStatus __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__BatteryStatus __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryStatus_
{
  using Type = BatteryStatus_<ContainerAllocator>;

  explicit BatteryStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
      this->voltage = 0.0f;
      this->current = 0.0f;
      this->soc = 0.0f;
      this->charge = 0;
    }
  }

  explicit BatteryStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ip(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
      this->voltage = 0.0f;
      this->current = 0.0f;
      this->soc = 0.0f;
      this->charge = 0;
    }
  }

  // field types and members
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _current_type =
    float;
  _current_type current;
  using _soc_type =
    float;
  _soc_type soc;
  using _charge_type =
    int8_t;
  _charge_type charge;

  // setters for named parameter idiom
  Type & set__ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ip = _arg;
    return *this;
  }
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__soc(
    const float & _arg)
  {
    this->soc = _arg;
    return *this;
  }
  Type & set__charge(
    const int8_t & _arg)
  {
    this->charge = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtcrobot_msg::msg::BatteryStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::BatteryStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::BatteryStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::BatteryStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::BatteryStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::BatteryStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::BatteryStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::BatteryStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::BatteryStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::BatteryStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__BatteryStatus
    std::shared_ptr<rtcrobot_msg::msg::BatteryStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__BatteryStatus
    std::shared_ptr<rtcrobot_msg::msg::BatteryStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryStatus_ & other) const
  {
    if (this->ip != other.ip) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->soc != other.soc) {
      return false;
    }
    if (this->charge != other.charge) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryStatus_

// alias to use template instance with default allocator
using BatteryStatus =
  rtcrobot_msg::msg::BatteryStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__BATTERY_STATUS__STRUCT_HPP_
