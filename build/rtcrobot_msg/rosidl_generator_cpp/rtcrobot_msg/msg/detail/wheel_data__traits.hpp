// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtcrobot_msg:msg/WheelData.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__WHEEL_DATA__TRAITS_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__WHEEL_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtcrobot_msg/msg/detail/wheel_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'left'
// Member 'right'
#include "rtcrobot_msg/msg/detail/motor_data__traits.hpp"

namespace rtcrobot_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelData & msg,
  std::ostream & out)
{
  out << "{";
  // member: left
  {
    out << "left: ";
    to_flow_style_yaml(msg.left, out);
    out << ", ";
  }

  // member: right
  {
    out << "right: ";
    to_flow_style_yaml(msg.right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left:\n";
    to_block_style_yaml(msg.left, out, indentation + 2);
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right:\n";
    to_block_style_yaml(msg.right, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rtcrobot_msg

namespace rosidl_generator_traits
{

[[deprecated("use rtcrobot_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rtcrobot_msg::msg::WheelData & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtcrobot_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtcrobot_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtcrobot_msg::msg::WheelData & msg)
{
  return rtcrobot_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtcrobot_msg::msg::WheelData>()
{
  return "rtcrobot_msg::msg::WheelData";
}

template<>
inline const char * name<rtcrobot_msg::msg::WheelData>()
{
  return "rtcrobot_msg/msg/WheelData";
}

template<>
struct has_fixed_size<rtcrobot_msg::msg::WheelData>
  : std::integral_constant<bool, has_fixed_size<rtcrobot_msg::msg::MotorData>::value> {};

template<>
struct has_bounded_size<rtcrobot_msg::msg::WheelData>
  : std::integral_constant<bool, has_bounded_size<rtcrobot_msg::msg::MotorData>::value> {};

template<>
struct is_message<rtcrobot_msg::msg::WheelData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTCROBOT_MSG__MSG__DETAIL__WHEEL_DATA__TRAITS_HPP_
