// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from battery_manager:msg/LedStates.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_MANAGER__MSG__DETAIL__LED_STATES__BUILDER_HPP_
#define BATTERY_MANAGER__MSG__DETAIL__LED_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "battery_manager/msg/detail/led_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace battery_manager
{

namespace msg
{

namespace builder
{

class Init_LedStates_state
{
public:
  explicit Init_LedStates_state(::battery_manager::msg::LedStates & msg)
  : msg_(msg)
  {}
  ::battery_manager::msg::LedStates state(::battery_manager::msg::LedStates::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_manager::msg::LedStates msg_;
};

class Init_LedStates_led_id
{
public:
  Init_LedStates_led_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedStates_state led_id(::battery_manager::msg::LedStates::_led_id_type arg)
  {
    msg_.led_id = std::move(arg);
    return Init_LedStates_state(msg_);
  }

private:
  ::battery_manager::msg::LedStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_manager::msg::LedStates>()
{
  return battery_manager::msg::builder::Init_LedStates_led_id();
}

}  // namespace battery_manager

#endif  // BATTERY_MANAGER__MSG__DETAIL__LED_STATES__BUILDER_HPP_
