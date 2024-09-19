// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtcrobot_msg:msg/AmrConn.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__AMR_CONN__TRAITS_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__AMR_CONN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtcrobot_msg/msg/detail/amr_conn__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtcrobot_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const AmrConn & msg,
  std::ostream & out)
{
  out << "{";
  // member: ip
  {
    out << "ip: ";
    rosidl_generator_traits::value_to_yaml(msg.ip, out);
    out << ", ";
  }

  // member: connect
  {
    out << "connect: ";
    rosidl_generator_traits::value_to_yaml(msg.connect, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AmrConn & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip: ";
    rosidl_generator_traits::value_to_yaml(msg.ip, out);
    out << "\n";
  }

  // member: connect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connect: ";
    rosidl_generator_traits::value_to_yaml(msg.connect, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AmrConn & msg, bool use_flow_style = false)
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
  const rtcrobot_msg::msg::AmrConn & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtcrobot_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtcrobot_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtcrobot_msg::msg::AmrConn & msg)
{
  return rtcrobot_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtcrobot_msg::msg::AmrConn>()
{
  return "rtcrobot_msg::msg::AmrConn";
}

template<>
inline const char * name<rtcrobot_msg::msg::AmrConn>()
{
  return "rtcrobot_msg/msg/AmrConn";
}

template<>
struct has_fixed_size<rtcrobot_msg::msg::AmrConn>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtcrobot_msg::msg::AmrConn>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtcrobot_msg::msg::AmrConn>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTCROBOT_MSG__MSG__DETAIL__AMR_CONN__TRAITS_HPP_