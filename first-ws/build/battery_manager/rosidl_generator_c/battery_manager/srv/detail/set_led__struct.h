// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from battery_manager:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_MANAGER__SRV__DETAIL__SET_LED__STRUCT_H_
#define BATTERY_MANAGER__SRV__DETAIL__SET_LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetLed in the package battery_manager.
typedef struct battery_manager__srv__SetLed_Request
{
  int64_t led_id;
  bool state;
} battery_manager__srv__SetLed_Request;

// Struct for a sequence of battery_manager__srv__SetLed_Request.
typedef struct battery_manager__srv__SetLed_Request__Sequence
{
  battery_manager__srv__SetLed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_manager__srv__SetLed_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetLed in the package battery_manager.
typedef struct battery_manager__srv__SetLed_Response
{
  bool switch_state;
} battery_manager__srv__SetLed_Response;

// Struct for a sequence of battery_manager__srv__SetLed_Response.
typedef struct battery_manager__srv__SetLed_Response__Sequence
{
  battery_manager__srv__SetLed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_manager__srv__SetLed_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_MANAGER__SRV__DETAIL__SET_LED__STRUCT_H_
