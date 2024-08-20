// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from battery_manager:msg/LedStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "battery_manager/msg/detail/led_states__rosidl_typesupport_introspection_c.h"
#include "battery_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "battery_manager/msg/detail/led_states__functions.h"
#include "battery_manager/msg/detail/led_states__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void battery_manager__msg__LedStates__rosidl_typesupport_introspection_c__LedStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  battery_manager__msg__LedStates__init(message_memory);
}

void battery_manager__msg__LedStates__rosidl_typesupport_introspection_c__LedStates_fini_function(void * message_memory)
{
  battery_manager__msg__LedStates__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember battery_manager__msg__LedStates__rosidl_typesupport_introspection_c__LedStates_message_member_array[2] = {
  {
    "led_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(battery_manager__msg__LedStates, led_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(battery_manager__msg__LedStates, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers battery_manager__msg__LedStates__rosidl_typesupport_introspection_c__LedStates_message_members = {
  "battery_manager__msg",  // message namespace
  "LedStates",  // message name
  2,  // number of fields
  sizeof(battery_manager__msg__LedStates),
  battery_manager__msg__LedStates__rosidl_typesupport_introspection_c__LedStates_message_member_array,  // message members
  battery_manager__msg__LedStates__rosidl_typesupport_introspection_c__LedStates_init_function,  // function to initialize message memory (memory has to be allocated)
  battery_manager__msg__LedStates__rosidl_typesupport_introspection_c__LedStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t battery_manager__msg__LedStates__rosidl_typesupport_introspection_c__LedStates_message_type_support_handle = {
  0,
  &battery_manager__msg__LedStates__rosidl_typesupport_introspection_c__LedStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_battery_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_manager, msg, LedStates)() {
  if (!battery_manager__msg__LedStates__rosidl_typesupport_introspection_c__LedStates_message_type_support_handle.typesupport_identifier) {
    battery_manager__msg__LedStates__rosidl_typesupport_introspection_c__LedStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &battery_manager__msg__LedStates__rosidl_typesupport_introspection_c__LedStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
