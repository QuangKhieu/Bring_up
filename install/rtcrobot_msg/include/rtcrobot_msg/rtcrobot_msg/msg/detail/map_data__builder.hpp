// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcrobot_msg:msg/MapData.idl
// generated code does not contain a copyright notice

#ifndef RTCROBOT_MSG__MSG__DETAIL__MAP_DATA__BUILDER_HPP_
#define RTCROBOT_MSG__MSG__DETAIL__MAP_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtcrobot_msg/msg/detail/map_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtcrobot_msg
{

namespace msg
{

namespace builder
{

class Init_MapData_image
{
public:
  explicit Init_MapData_image(::rtcrobot_msg::msg::MapData & msg)
  : msg_(msg)
  {}
  ::rtcrobot_msg::msg::MapData image(::rtcrobot_msg::msg::MapData::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcrobot_msg::msg::MapData msg_;
};

class Init_MapData_name
{
public:
  Init_MapData_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapData_image name(::rtcrobot_msg::msg::MapData::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MapData_image(msg_);
  }

private:
  ::rtcrobot_msg::msg::MapData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcrobot_msg::msg::MapData>()
{
  return rtcrobot_msg::msg::builder::Init_MapData_name();
}

}  // namespace rtcrobot_msg

#endif  // RTCROBOT_MSG__MSG__DETAIL__MAP_DATA__BUILDER_HPP_
