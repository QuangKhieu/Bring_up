// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtcrobot_msg:msg/StringStamped.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__STRING_STAMPED__STRUCT_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__STRING_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtcrobot_msg__msg__StringStamped __attribute__((deprecated))
#else
# define DEPRECATED__rtcrobot_msg__msg__StringStamped __declspec(deprecated)
#endif

namespace rtcrobot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StringStamped_
{
  using Type = StringStamped_<ContainerAllocator>;

  explicit StringStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  explicit StringStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtcrobot_msg::msg::StringStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtcrobot_msg::msg::StringStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::StringStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtcrobot_msg::msg::StringStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::StringStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::StringStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtcrobot_msg::msg::StringStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtcrobot_msg::msg::StringStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::StringStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtcrobot_msg::msg::StringStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtcrobot_msg__msg__StringStamped
    std::shared_ptr<rtcrobot_msg::msg::StringStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtcrobot_msg__msg__StringStamped
    std::shared_ptr<rtcrobot_msg::msg::StringStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StringStamped_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const StringStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StringStamped_

// alias to use template instance with default allocator
using StringStamped =
  rtcrobot_msg::msg::StringStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__STRING_STAMPED__STRUCT_HPP_
