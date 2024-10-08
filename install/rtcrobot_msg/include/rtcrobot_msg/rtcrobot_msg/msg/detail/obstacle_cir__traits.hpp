// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtcrobot_msg:msg/ObstacleCir.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_CIR__TRAITS_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_CIR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtcrobot_msg/msg/detail/obstacle_cir__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rtcrobot_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleCir & msg,
  std::ostream & out)
{
  out << "{";
  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << ", ";
  }

  // member: true_radius
  {
    out << "true_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.true_radius, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleCir & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }

  // member: true_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.true_radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleCir & msg, bool use_flow_style = false)
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
  const rtcrobot_msg::msg::ObstacleCir & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtcrobot_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtcrobot_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtcrobot_msg::msg::ObstacleCir & msg)
{
  return rtcrobot_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtcrobot_msg::msg::ObstacleCir>()
{
  return "rtcrobot_msg::msg::ObstacleCir";
}

template<>
inline const char * name<rtcrobot_msg::msg::ObstacleCir>()
{
  return "rtcrobot_msg/msg/ObstacleCir";
}

template<>
struct has_fixed_size<rtcrobot_msg::msg::ObstacleCir>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<rtcrobot_msg::msg::ObstacleCir>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<rtcrobot_msg::msg::ObstacleCir>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTCROBOT_MSG__MSG__DETAIL__OBSTACLE_CIR__TRAITS_HPP_
