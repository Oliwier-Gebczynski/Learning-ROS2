// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from battery_manager:msg/LedStates.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_MANAGER__MSG__DETAIL__LED_STATES__STRUCT_H_
#define BATTERY_MANAGER__MSG__DETAIL__LED_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LedStates in the package battery_manager.
typedef struct battery_manager__msg__LedStates
{
  int64_t led_id;
  bool state;
} battery_manager__msg__LedStates;

// Struct for a sequence of battery_manager__msg__LedStates.
typedef struct battery_manager__msg__LedStates__Sequence
{
  battery_manager__msg__LedStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_manager__msg__LedStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_MANAGER__MSG__DETAIL__LED_STATES__STRUCT_H_
