// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtcrobot_msg:msg/MotorData.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__MOTOR_DATA__TRAITS_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__MOTOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtcrobot_msg/msg/detail/motor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtcrobot_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: connect
  {
    out << "connect: ";
    rosidl_generator_traits::value_to_yaml(msg.connect, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: enc
  {
    out << "enc: ";
    rosidl_generator_traits::value_to_yaml(msg.enc, out);
    out << ", ";
  }

  // member: err
  {
    out << "err: ";
    rosidl_generator_traits::value_to_yaml(msg.err, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: connect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connect: ";
    rosidl_generator_traits::value_to_yaml(msg.connect, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: enc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enc: ";
    rosidl_generator_traits::value_to_yaml(msg.enc, out);
    out << "\n";
  }

  // member: err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err: ";
    rosidl_generator_traits::value_to_yaml(msg.err, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorData & msg, bool use_flow_style = false)
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
  const rtcrobot_msg::msg::MotorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtcrobot_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtcrobot_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtcrobot_msg::msg::MotorData & msg)
{
  return rtcrobot_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtcrobot_msg::msg::MotorData>()
{
  return "rtcrobot_msg::msg::MotorData";
}

template<>
inline const char * name<rtcrobot_msg::msg::MotorData>()
{
  return "rtcrobot_msg/msg/MotorData";
}

template<>
struct has_fixed_size<rtcrobot_msg::msg::MotorData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtcrobot_msg::msg::MotorData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtcrobot_msg::msg::MotorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTCROBOT_MSG__MSG__DETAIL__MOTOR_DATA__TRAITS_HPP_
