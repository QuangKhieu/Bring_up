// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtcrobot_msg:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__MODE__TRAITS_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtcrobot_msg/msg/detail/mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtcrobot_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Mode & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mode & msg, bool use_flow_style = false)
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
  const rtcrobot_msg::msg::Mode & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtcrobot_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtcrobot_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtcrobot_msg::msg::Mode & msg)
{
  return rtcrobot_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtcrobot_msg::msg::Mode>()
{
  return "rtcrobot_msg::msg::Mode";
}

template<>
inline const char * name<rtcrobot_msg::msg::Mode>()
{
  return "rtcrobot_msg/msg/Mode";
}

template<>
struct has_fixed_size<rtcrobot_msg::msg::Mode>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtcrobot_msg::msg::Mode>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtcrobot_msg::msg::Mode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTCROBOT_MSG__MSG__DETAIL__MODE__TRAITS_HPP_
