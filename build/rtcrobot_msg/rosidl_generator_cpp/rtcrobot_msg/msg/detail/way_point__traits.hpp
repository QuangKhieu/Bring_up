// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtcrobot_msg:msg/WayPoint.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__WAY_POINT__TRAITS_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__WAY_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtcrobot_msg/msg/detail/way_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtcrobot_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const WayPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WayPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WayPoint & msg, bool use_flow_style = false)
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
  const rtcrobot_msg::msg::WayPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtcrobot_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtcrobot_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtcrobot_msg::msg::WayPoint & msg)
{
  return rtcrobot_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtcrobot_msg::msg::WayPoint>()
{
  return "rtcrobot_msg::msg::WayPoint";
}

template<>
inline const char * name<rtcrobot_msg::msg::WayPoint>()
{
  return "rtcrobot_msg/msg/WayPoint";
}

template<>
struct has_fixed_size<rtcrobot_msg::msg::WayPoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtcrobot_msg::msg::WayPoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtcrobot_msg::msg::WayPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTCROBOT_MSG__MSG__DETAIL__WAY_POINT__TRAITS_HPP_
