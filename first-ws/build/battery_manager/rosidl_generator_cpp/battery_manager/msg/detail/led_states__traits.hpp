// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from battery_manager:msg/LedStates.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_MANAGER__MSG__DETAIL__LED_STATES__TRAITS_HPP_
#define BATTERY_MANAGER__MSG__DETAIL__LED_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "battery_manager/msg/detail/led_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace battery_manager
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedStates & msg,
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
  const LedStates & msg,
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

inline std::string to_yaml(const LedStates & msg, bool use_flow_style = false)
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

}  // namespace battery_manager

namespace rosidl_generator_traits
{

[[deprecated("use battery_manager::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_manager::msg::LedStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_manager::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_manager::msg::to_yaml() instead")]]
inline std::string to_yaml(const battery_manager::msg::LedStates & msg)
{
  return battery_manager::msg::to_yaml(msg);
}

template<>
inline const char * data_type<battery_manager::msg::LedStates>()
{
  return "battery_manager::msg::LedStates";
}

template<>
inline const char * name<battery_manager::msg::LedStates>()
{
  return "battery_manager/msg/LedStates";
}

template<>
struct has_fixed_size<battery_manager::msg::LedStates>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<battery_manager::msg::LedStates>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<battery_manager::msg::LedStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BATTERY_MANAGER__MSG__DETAIL__LED_STATES__TRAITS_HPP_
