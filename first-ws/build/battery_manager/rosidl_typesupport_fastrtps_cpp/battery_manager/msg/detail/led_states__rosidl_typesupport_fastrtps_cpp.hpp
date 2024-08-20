// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from battery_manager:msg/LedStates.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_MANAGER__MSG__DETAIL__LED_STATES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BATTERY_MANAGER__MSG__DETAIL__LED_STATES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "battery_manager/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "battery_manager/msg/detail/led_states__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace battery_manager
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_manager
cdr_serialize(
  const battery_manager::msg::LedStates & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_manager
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  battery_manager::msg::LedStates & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_manager
get_serialized_size(
  const battery_manager::msg::LedStates & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_manager
max_serialized_size_LedStates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace battery_manager

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_manager
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_manager, msg, LedStates)();

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_MANAGER__MSG__DETAIL__LED_STATES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
