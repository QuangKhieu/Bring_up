// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtcrobot_msg:msg/ObstacleSeg.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_SEG__TRAITS_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_SEG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtcrobot_msg/msg/detail/obstacle_seg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'first_point'
// Member 'last_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rtcrobot_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleSeg & msg,
  std::ostream & out)
{
  out << "{";
  // member: first_point
  {
    out << "first_point: ";
    to_flow_style_yaml(msg.first_point, out);
    out << ", ";
  }

  // member: last_point
  {
    out << "last_point: ";
    to_flow_style_yaml(msg.last_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleSeg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: first_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_point:\n";
    to_block_style_yaml(msg.first_point, out, indentation + 2);
  }

  // member: last_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_point:\n";
    to_block_style_yaml(msg.last_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleSeg & msg, bool use_flow_style = false)
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
  const rtcrobot_msg::msg::ObstacleSeg & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtcrobot_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtcrobot_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtcrobot_msg::msg::ObstacleSeg & msg)
{
  return rtcrobot_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtcrobot_msg::msg::ObstacleSeg>()
{
  return "rtcrobot_msg::msg::ObstacleSeg";
}

template<>
inline const char * name<rtcrobot_msg::msg::ObstacleSeg>()
{
  return "rtcrobot_msg/msg/ObstacleSeg";
}

template<>
struct has_fixed_size<rtcrobot_msg::msg::ObstacleSeg>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<rtcrobot_msg::msg::ObstacleSeg>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<rtcrobot_msg::msg::ObstacleSeg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_SEG__TRAITS_HPP_
