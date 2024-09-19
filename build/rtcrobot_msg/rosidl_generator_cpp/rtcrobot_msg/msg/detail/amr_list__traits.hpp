// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtcrobot_msg:msg/AmrList.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__AMR_LIST__TRAITS_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__AMR_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtcrobot_msg/msg/detail/amr_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtcrobot_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const AmrList & msg,
  std::ostream & out)
{
  out << "{";
  // member: list
  {
    if (msg.list.size() == 0) {
      out << "list: []";
    } else {
      out << "list: [";
      size_t pending_items = msg.list.size();
      for (auto item : msg.list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AmrList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.list.size() == 0) {
      out << "list: []\n";
    } else {
      out << "list:\n";
      for (auto item : msg.list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AmrList & msg, bool use_flow_style = false)
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
  const rtcrobot_msg::msg::AmrList & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtcrobot_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtcrobot_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtcrobot_msg::msg::AmrList & msg)
{
  return rtcrobot_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtcrobot_msg::msg::AmrList>()
{
  return "rtcrobot_msg::msg::AmrList";
}

template<>
inline const char * name<rtcrobot_msg::msg::AmrList>()
{
  return "rtcrobot_msg/msg/AmrList";
}

template<>
struct has_fixed_size<rtcrobot_msg::msg::AmrList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtcrobot_msg::msg::AmrList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtcrobot_msg::msg::AmrList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTCROBOT_MSG__MSG__DETAIL__AMR_LIST__TRAITS_HPP_
