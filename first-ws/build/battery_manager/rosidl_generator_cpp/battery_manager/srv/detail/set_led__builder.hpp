// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from battery_manager:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_MANAGER__SRV__DETAIL__SET_LED__BUILDER_HPP_
#define BATTERY_MANAGER__SRV__DETAIL__SET_LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "battery_manager/srv/detail/set_led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace battery_manager
{

namespace srv
{

namespace builder
{

class Init_SetLed_Request_state
{
public:
  explicit Init_SetLed_Request_state(::battery_manager::srv::SetLed_Request & msg)
  : msg_(msg)
  {}
  ::battery_manager::srv::SetLed_Request state(::battery_manager::srv::SetLed_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_manager::srv::SetLed_Request msg_;
};

class Init_SetLed_Request_led_id
{
public:
  Init_SetLed_Request_led_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLed_Request_state led_id(::battery_manager::srv::SetLed_Request::_led_id_type arg)
  {
    msg_.led_id = std::move(arg);
    return Init_SetLed_Request_state(msg_);
  }

private:
  ::battery_manager::srv::SetLed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_manager::srv::SetLed_Request>()
{
  return battery_manager::srv::builder::Init_SetLed_Request_led_id();
}

}  // namespace battery_manager


namespace battery_manager
{

namespace srv
{

namespace builder
{

class Init_SetLed_Response_switch_state
{
public:
  Init_SetLed_Response_switch_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::battery_manager::srv::SetLed_Response switch_state(::battery_manager::srv::SetLed_Response::_switch_state_type arg)
  {
    msg_.switch_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_manager::srv::SetLed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_manager::srv::SetLed_Response>()
{
  return battery_manager::srv::builder::Init_SetLed_Response_switch_state();
}

}  // namespace battery_manager

#endif  // BATTERY_MANAGER__SRV__DETAIL__SET_LED__BUILDER_HPP_
