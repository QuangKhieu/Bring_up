// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtcrobot_msg:msg/PlcWrite.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__PLC_WRITE__TRAITS_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__PLC_WRITE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtcrobot_msg/msg/detail/plc_write__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtcrobot_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlcWrite & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_left_stop
  {
    out << "motor_left_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_left_stop, out);
    out << ", ";
  }

  // member: motor_left_reset
  {
    out << "motor_left_reset: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_left_reset, out);
    out << ", ";
  }

  // member: motor_right_stop
  {
    out << "motor_right_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_right_stop, out);
    out << ", ";
  }

  // member: motor_right_reset
  {
    out << "motor_right_reset: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_right_reset, out);
    out << ", ";
  }

  // member: front_left_lamp
  {
    out << "front_left_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_lamp, out);
    out << ", ";
  }

  // member: front_right_lamp
  {
    out << "front_right_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_lamp, out);
    out << ", ";
  }

  // member: back_left_lamp
  {
    out << "back_left_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.back_left_lamp, out);
    out << ", ";
  }

  // member: back_right_lamp
  {
    out << "back_right_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.back_right_lamp, out);
    out << ", ";
  }

  // member: red_lamp
  {
    out << "red_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_lamp, out);
    out << ", ";
  }

  // member: yellow_lamp
  {
    out << "yellow_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_lamp, out);
    out << ", ";
  }

  // member: green_lamp
  {
    out << "green_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.green_lamp, out);
    out << ", ";
  }

  // member: charger
  {
    out << "charger: ";
    rosidl_generator_traits::value_to_yaml(msg.charger, out);
    out << ", ";
  }

  // member: plc_safety
  {
    out << "plc_safety: ";
    rosidl_generator_traits::value_to_yaml(msg.plc_safety, out);
    out << ", ";
  }

  // member: brake_on
  {
    out << "brake_on: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_on, out);
    out << ", ";
  }

  // member: tim_forward_in1
  {
    out << "tim_forward_in1: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_forward_in1, out);
    out << ", ";
  }

  // member: tim_forward_in2
  {
    out << "tim_forward_in2: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_forward_in2, out);
    out << ", ";
  }

  // member: tim_forward_in3
  {
    out << "tim_forward_in3: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_forward_in3, out);
    out << ", ";
  }

  // member: tim_forward_in4
  {
    out << "tim_forward_in4: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_forward_in4, out);
    out << ", ";
  }

  // member: tim_backward_in1
  {
    out << "tim_backward_in1: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_backward_in1, out);
    out << ", ";
  }

  // member: tim_backward_in2
  {
    out << "tim_backward_in2: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_backward_in2, out);
    out << ", ";
  }

  // member: tim_backward_in3
  {
    out << "tim_backward_in3: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_backward_in3, out);
    out << ", ";
  }

  // member: tim_backward_in4
  {
    out << "tim_backward_in4: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_backward_in4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlcWrite & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_left_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_left_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_left_stop, out);
    out << "\n";
  }

  // member: motor_left_reset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_left_reset: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_left_reset, out);
    out << "\n";
  }

  // member: motor_right_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_right_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_right_stop, out);
    out << "\n";
  }

  // member: motor_right_reset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_right_reset: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_right_reset, out);
    out << "\n";
  }

  // member: front_left_lamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_lamp, out);
    out << "\n";
  }

  // member: front_right_lamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_lamp, out);
    out << "\n";
  }

  // member: back_left_lamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_left_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.back_left_lamp, out);
    out << "\n";
  }

  // member: back_right_lamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_right_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.back_right_lamp, out);
    out << "\n";
  }

  // member: red_lamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_lamp, out);
    out << "\n";
  }

  // member: yellow_lamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yellow_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.yellow_lamp, out);
    out << "\n";
  }

  // member: green_lamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "green_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.green_lamp, out);
    out << "\n";
  }

  // member: charger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charger: ";
    rosidl_generator_traits::value_to_yaml(msg.charger, out);
    out << "\n";
  }

  // member: plc_safety
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plc_safety: ";
    rosidl_generator_traits::value_to_yaml(msg.plc_safety, out);
    out << "\n";
  }

  // member: brake_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_on: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_on, out);
    out << "\n";
  }

  // member: tim_forward_in1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tim_forward_in1: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_forward_in1, out);
    out << "\n";
  }

  // member: tim_forward_in2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tim_forward_in2: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_forward_in2, out);
    out << "\n";
  }

  // member: tim_forward_in3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tim_forward_in3: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_forward_in3, out);
    out << "\n";
  }

  // member: tim_forward_in4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tim_forward_in4: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_forward_in4, out);
    out << "\n";
  }

  // member: tim_backward_in1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tim_backward_in1: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_backward_in1, out);
    out << "\n";
  }

  // member: tim_backward_in2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tim_backward_in2: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_backward_in2, out);
    out << "\n";
  }

  // member: tim_backward_in3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tim_backward_in3: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_backward_in3, out);
    out << "\n";
  }

  // member: tim_backward_in4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tim_backward_in4: ";
    rosidl_generator_traits::value_to_yaml(msg.tim_backward_in4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlcWrite & msg, bool use_flow_style = false)
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
  const rtcrobot_msg::msg::PlcWrite & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtcrobot_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtcrobot_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtcrobot_msg::msg::PlcWrite & msg)
{
  return rtcrobot_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtcrobot_msg::msg::PlcWrite>()
{
  return "rtcrobot_msg::msg::PlcWrite";
}

template<>
inline const char * name<rtcrobot_msg::msg::PlcWrite>()
{
  return "rtcrobot_msg/msg/PlcWrite";
}

template<>
struct has_fixed_size<rtcrobot_msg::msg::PlcWrite>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtcrobot_msg::msg::PlcWrite>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtcrobot_msg::msg::PlcWrite>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTCROBOT_MSG__MSG__DETAIL__PLC_WRITE__TRAITS_HPP_
