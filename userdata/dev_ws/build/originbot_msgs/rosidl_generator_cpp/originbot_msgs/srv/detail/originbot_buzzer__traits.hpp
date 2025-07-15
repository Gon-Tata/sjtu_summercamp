// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from originbot_msgs:srv/OriginbotBuzzer.idl
// generated code does not contain a copyright notice

#ifndef ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_BUZZER__TRAITS_HPP_
#define ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_BUZZER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "originbot_msgs/srv/detail/originbot_buzzer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace originbot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const OriginbotBuzzer_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: on
  {
    out << "on: ";
    rosidl_generator_traits::value_to_yaml(msg.on, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OriginbotBuzzer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on: ";
    rosidl_generator_traits::value_to_yaml(msg.on, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OriginbotBuzzer_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace originbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use originbot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const originbot_msgs::srv::OriginbotBuzzer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  originbot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use originbot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const originbot_msgs::srv::OriginbotBuzzer_Request & msg)
{
  return originbot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<originbot_msgs::srv::OriginbotBuzzer_Request>()
{
  return "originbot_msgs::srv::OriginbotBuzzer_Request";
}

template<>
inline const char * name<originbot_msgs::srv::OriginbotBuzzer_Request>()
{
  return "originbot_msgs/srv/OriginbotBuzzer_Request";
}

template<>
struct has_fixed_size<originbot_msgs::srv::OriginbotBuzzer_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<originbot_msgs::srv::OriginbotBuzzer_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<originbot_msgs::srv::OriginbotBuzzer_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace originbot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const OriginbotBuzzer_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OriginbotBuzzer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OriginbotBuzzer_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace originbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use originbot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const originbot_msgs::srv::OriginbotBuzzer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  originbot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use originbot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const originbot_msgs::srv::OriginbotBuzzer_Response & msg)
{
  return originbot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<originbot_msgs::srv::OriginbotBuzzer_Response>()
{
  return "originbot_msgs::srv::OriginbotBuzzer_Response";
}

template<>
inline const char * name<originbot_msgs::srv::OriginbotBuzzer_Response>()
{
  return "originbot_msgs/srv/OriginbotBuzzer_Response";
}

template<>
struct has_fixed_size<originbot_msgs::srv::OriginbotBuzzer_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<originbot_msgs::srv::OriginbotBuzzer_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<originbot_msgs::srv::OriginbotBuzzer_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<originbot_msgs::srv::OriginbotBuzzer>()
{
  return "originbot_msgs::srv::OriginbotBuzzer";
}

template<>
inline const char * name<originbot_msgs::srv::OriginbotBuzzer>()
{
  return "originbot_msgs/srv/OriginbotBuzzer";
}

template<>
struct has_fixed_size<originbot_msgs::srv::OriginbotBuzzer>
  : std::integral_constant<
    bool,
    has_fixed_size<originbot_msgs::srv::OriginbotBuzzer_Request>::value &&
    has_fixed_size<originbot_msgs::srv::OriginbotBuzzer_Response>::value
  >
{
};

template<>
struct has_bounded_size<originbot_msgs::srv::OriginbotBuzzer>
  : std::integral_constant<
    bool,
    has_bounded_size<originbot_msgs::srv::OriginbotBuzzer_Request>::value &&
    has_bounded_size<originbot_msgs::srv::OriginbotBuzzer_Response>::value
  >
{
};

template<>
struct is_service<originbot_msgs::srv::OriginbotBuzzer>
  : std::true_type
{
};

template<>
struct is_service_request<originbot_msgs::srv::OriginbotBuzzer_Request>
  : std::true_type
{
};

template<>
struct is_service_response<originbot_msgs::srv::OriginbotBuzzer_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_BUZZER__TRAITS_HPP_
