// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from originbot_msgs:msg/OriginbotStatus.idl
// generated code does not contain a copyright notice

#ifndef ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__TRAITS_HPP_
#define ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "originbot_msgs/msg/detail/originbot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace originbot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OriginbotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: buzzer_on
  {
    out << "buzzer_on: ";
    rosidl_generator_traits::value_to_yaml(msg.buzzer_on, out);
    out << ", ";
  }

  // member: led_on
  {
    out << "led_on: ";
    rosidl_generator_traits::value_to_yaml(msg.led_on, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OriginbotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: buzzer_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buzzer_on: ";
    rosidl_generator_traits::value_to_yaml(msg.buzzer_on, out);
    out << "\n";
  }

  // member: led_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_on: ";
    rosidl_generator_traits::value_to_yaml(msg.led_on, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OriginbotStatus & msg, bool use_flow_style = false)
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

}  // namespace originbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use originbot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const originbot_msgs::msg::OriginbotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  originbot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use originbot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const originbot_msgs::msg::OriginbotStatus & msg)
{
  return originbot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<originbot_msgs::msg::OriginbotStatus>()
{
  return "originbot_msgs::msg::OriginbotStatus";
}

template<>
inline const char * name<originbot_msgs::msg::OriginbotStatus>()
{
  return "originbot_msgs/msg/OriginbotStatus";
}

template<>
struct has_fixed_size<originbot_msgs::msg::OriginbotStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<originbot_msgs::msg::OriginbotStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<originbot_msgs::msg::OriginbotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__TRAITS_HPP_
