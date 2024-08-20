// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from battery_manager:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_MANAGER__SRV__DETAIL__SET_LED__TRAITS_HPP_
#define BATTERY_MANAGER__SRV__DETAIL__SET_LED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "battery_manager/srv/detail/set_led__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace battery_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLed_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_id
  {
    out << "led_id: ";
    rosidl_generator_traits::value_to_yaml(msg.led_id, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_id: ";
    rosidl_generator_traits::value_to_yaml(msg.led_id, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLed_Request & msg, bool use_flow_style = false)
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

}  // namespace battery_manager

namespace rosidl_generator_traits
{

[[deprecated("use battery_manager::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_manager::srv::SetLed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const battery_manager::srv::SetLed_Request & msg)
{
  return battery_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<battery_manager::srv::SetLed_Request>()
{
  return "battery_manager::srv::SetLed_Request";
}

template<>
inline const char * name<battery_manager::srv::SetLed_Request>()
{
  return "battery_manager/srv/SetLed_Request";
}

template<>
struct has_fixed_size<battery_manager::srv::SetLed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<battery_manager::srv::SetLed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<battery_manager::srv::SetLed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace battery_manager
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLed_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: switch_state
  {
    out << "switch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.switch_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: switch_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "switch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.switch_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLed_Response & msg, bool use_flow_style = false)
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

}  // namespace battery_manager

namespace rosidl_generator_traits
{

[[deprecated("use battery_manager::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_manager::srv::SetLed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_manager::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_manager::srv::to_yaml() instead")]]
inline std::string to_yaml(const battery_manager::srv::SetLed_Response & msg)
{
  return battery_manager::srv::to_yaml(msg);
}

template<>
inline const char * data_type<battery_manager::srv::SetLed_Response>()
{
  return "battery_manager::srv::SetLed_Response";
}

template<>
inline const char * name<battery_manager::srv::SetLed_Response>()
{
  return "battery_manager/srv/SetLed_Response";
}

template<>
struct has_fixed_size<battery_manager::srv::SetLed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<battery_manager::srv::SetLed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<battery_manager::srv::SetLed_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<battery_manager::srv::SetLed>()
{
  return "battery_manager::srv::SetLed";
}

template<>
inline const char * name<battery_manager::srv::SetLed>()
{
  return "battery_manager/srv/SetLed";
}

template<>
struct has_fixed_size<battery_manager::srv::SetLed>
  : std::integral_constant<
    bool,
    has_fixed_size<battery_manager::srv::SetLed_Request>::value &&
    has_fixed_size<battery_manager::srv::SetLed_Response>::value
  >
{
};

template<>
struct has_bounded_size<battery_manager::srv::SetLed>
  : std::integral_constant<
    bool,
    has_bounded_size<battery_manager::srv::SetLed_Request>::value &&
    has_bounded_size<battery_manager::srv::SetLed_Response>::value
  >
{
};

template<>
struct is_service<battery_manager::srv::SetLed>
  : std::true_type
{
};

template<>
struct is_service_request<battery_manager::srv::SetLed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<battery_manager::srv::SetLed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BATTERY_MANAGER__SRV__DETAIL__SET_LED__TRAITS_HPP_
