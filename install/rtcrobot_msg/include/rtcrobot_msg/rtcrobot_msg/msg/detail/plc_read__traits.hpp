// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtcrobot_msg:msg/PlcRead.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__PLC_READ__TRAITS_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__PLC_READ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtcrobot_msg/msg/detail/plc_read__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtcrobot_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlcRead & msg,
  std::ostream & out)
{
  out << "{";
  // member: bumper
  {
    out << "bumper: ";
    rosidl_generator_traits::value_to_yaml(msg.bumper, out);
    out << ", ";
  }

  // member: sensor_check_product
  {
    out << "sensor_check_product: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_check_product, out);
    out << ", ";
  }

  // member: emo_forward
  {
    out << "emo_forward: ";
    rosidl_generator_traits::value_to_yaml(msg.emo_forward, out);
    out << ", ";
  }

  // member: emo_backward
  {
    out << "emo_backward: ";
    rosidl_generator_traits::value_to_yaml(msg.emo_backward, out);
    out << ", ";
  }

  // member: auto_switch
  {
    out << "auto_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_switch, out);
    out << ", ";
  }

  // member: manual_switch
  {
    out << "manual_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_switch, out);
    out << ", ";
  }

  // member: motor_left_out1
  {
    out << "motor_left_out1: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_left_out1, out);
    out << ", ";
  }

  // member: motor_left_out2
  {
    out << "motor_left_out2: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_left_out2, out);
    out << ", ";
  }

  // member: motor_right_out1
  {
    out << "motor_right_out1: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_right_out1, out);
    out << ", ";
  }

  // member: motor_right_out2
  {
    out << "motor_right_out2: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_right_out2, out);
    out << ", ";
  }

  // member: start_btn
  {
    out << "start_btn: ";
    rosidl_generator_traits::value_to_yaml(msg.start_btn, out);
    out << ", ";
  }

  // member: stop_btn
  {
    out << "stop_btn: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_btn, out);
    out << ", ";
  }

  // member: reset_btn
  {
    out << "reset_btn: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_btn, out);
    out << ", ";
  }

  // member: he_forward_out
  {
    out << "he_forward_out: ";
    rosidl_generator_traits::value_to_yaml(msg.he_forward_out, out);
    out << ", ";
  }

  // member: he_forward_er
  {
    out << "he_forward_er: ";
    rosidl_generator_traits::value_to_yaml(msg.he_forward_er, out);
    out << ", ";
  }

  // member: he_backward_out
  {
    out << "he_backward_out: ";
    rosidl_generator_traits::value_to_yaml(msg.he_backward_out, out);
    out << ", ";
  }

  // member: he_backward_er
  {
    out << "he_backward_er: ";
    rosidl_generator_traits::value_to_yaml(msg.he_backward_er, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlcRead & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bumper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bumper: ";
    rosidl_generator_traits::value_to_yaml(msg.bumper, out);
    out << "\n";
  }

  // member: sensor_check_product
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_check_product: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_check_product, out);
    out << "\n";
  }

  // member: emo_forward
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emo_forward: ";
    rosidl_generator_traits::value_to_yaml(msg.emo_forward, out);
    out << "\n";
  }

  // member: emo_backward
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emo_backward: ";
    rosidl_generator_traits::value_to_yaml(msg.emo_backward, out);
    out << "\n";
  }

  // member: auto_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_switch, out);
    out << "\n";
  }

  // member: manual_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manual_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_switch, out);
    out << "\n";
  }

  // member: motor_left_out1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_left_out1: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_left_out1, out);
    out << "\n";
  }

  // member: motor_left_out2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_left_out2: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_left_out2, out);
    out << "\n";
  }

  // member: motor_right_out1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_right_out1: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_right_out1, out);
    out << "\n";
  }

  // member: motor_right_out2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_right_out2: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_right_out2, out);
    out << "\n";
  }

  // member: start_btn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_btn: ";
    rosidl_generator_traits::value_to_yaml(msg.start_btn, out);
    out << "\n";
  }

  // member: stop_btn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_btn: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_btn, out);
    out << "\n";
  }

  // member: reset_btn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_btn: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_btn, out);
    out << "\n";
  }

  // member: he_forward_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "he_forward_out: ";
    rosidl_generator_traits::value_to_yaml(msg.he_forward_out, out);
    out << "\n";
  }

  // member: he_forward_er
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "he_forward_er: ";
    rosidl_generator_traits::value_to_yaml(msg.he_forward_er, out);
    out << "\n";
  }

  // member: he_backward_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "he_backward_out: ";
    rosidl_generator_traits::value_to_yaml(msg.he_backward_out, out);
    out << "\n";
  }

  // member: he_backward_er
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "he_backward_er: ";
    rosidl_generator_traits::value_to_yaml(msg.he_backward_er, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlcRead & msg, bool use_flow_style = false)
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
  const rtcrobot_msg::msg::PlcRead & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtcrobot_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtcrobot_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtcrobot_msg::msg::PlcRead & msg)
{
  return rtcrobot_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtcrobot_msg::msg::PlcRead>()
{
  return "rtcrobot_msg::msg::PlcRead";
}

template<>
inline const char * name<rtcrobot_msg::msg::PlcRead>()
{
  return "rtcrobot_msg/msg/PlcRead";
}

template<>
struct has_fixed_size<rtcrobot_msg::msg::PlcRead>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtcrobot_msg::msg::PlcRead>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtcrobot_msg::msg::PlcRead>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTCROBOT_MSG__MSG__DETAIL__PLC_READ__TRAITS_HPP_
