// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtcrobot_msg:msg/CmdJoy.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__CMD_JOY__TRAITS_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__CMD_JOY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtcrobot_msg/msg/detail/cmd_joy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtcrobot_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const CmdJoy & msg,
  std::ostream & out)
{
  out << "{";
  // member: manual
  {
    out << "manual: ";
    rosidl_generator_traits::value_to_yaml(msg.manual, out);
    out << ", ";
  }

  // member: vx
  {
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << ", ";
  }

  // member: vy
  {
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << ", ";
  }

  // member: az
  {
    out << "az: ";
    rosidl_generator_traits::value_to_yaml(msg.az, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CmdJoy & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: manual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manual: ";
    rosidl_generator_traits::value_to_yaml(msg.manual, out);
    out << "\n";
  }

  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: az
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "az: ";
    rosidl_generator_traits::value_to_yaml(msg.az, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CmdJoy & msg, bool use_flow_style = false)
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
  const rtcrobot_msg::msg::CmdJoy & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtcrobot_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtcrobot_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtcrobot_msg::msg::CmdJoy & msg)
{
  return rtcrobot_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtcrobot_msg::msg::CmdJoy>()
{
  return "rtcrobot_msg::msg::CmdJoy";
}

template<>
inline const char * name<rtcrobot_msg::msg::CmdJoy>()
{
  return "rtcrobot_msg/msg/CmdJoy";
}

template<>
struct has_fixed_size<rtcrobot_msg::msg::CmdJoy>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtcrobot_msg::msg::CmdJoy>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtcrobot_msg::msg::CmdJoy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTCROBOT_MSG__MSG__DETAIL__CMD_JOY__TRAITS_HPP_
