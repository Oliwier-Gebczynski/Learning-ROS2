// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from battery_manager:msg/LedStates.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_MANAGER__MSG__DETAIL__LED_STATES__FUNCTIONS_H_
#define BATTERY_MANAGER__MSG__DETAIL__LED_STATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "battery_manager/msg/rosidl_generator_c__visibility_control.h"

#include "battery_manager/msg/detail/led_states__struct.h"

/// Initialize msg/LedStates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * battery_manager__msg__LedStates
 * )) before or use
 * battery_manager__msg__LedStates__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_manager
bool
battery_manager__msg__LedStates__init(battery_manager__msg__LedStates * msg);

/// Finalize msg/LedStates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_manager
void
battery_manager__msg__LedStates__fini(battery_manager__msg__LedStates * msg);

/// Create msg/LedStates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * battery_manager__msg__LedStates__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_manager
battery_manager__msg__LedStates *
battery_manager__msg__LedStates__create();

/// Destroy msg/LedStates message.
/**
 * It calls
 * battery_manager__msg__LedStates__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_manager
void
battery_manager__msg__LedStates__destroy(battery_manager__msg__LedStates * msg);

/// Check for msg/LedStates message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_manager
bool
battery_manager__msg__LedStates__are_equal(const battery_manager__msg__LedStates * lhs, const battery_manager__msg__LedStates * rhs);

/// Copy a msg/LedStates message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_manager
bool
battery_manager__msg__LedStates__copy(
  const battery_manager__msg__LedStates * input,
  battery_manager__msg__LedStates * output);

/// Initialize array of msg/LedStates messages.
/**
 * It allocates the memory for the number of elements and calls
 * battery_manager__msg__LedStates__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_manager
bool
battery_manager__msg__LedStates__Sequence__init(battery_manager__msg__LedStates__Sequence * array, size_t size);

/// Finalize array of msg/LedStates messages.
/**
 * It calls
 * battery_manager__msg__LedStates__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_manager
void
battery_manager__msg__LedStates__Sequence__fini(battery_manager__msg__LedStates__Sequence * array);

/// Create array of msg/LedStates messages.
/**
 * It allocates the memory for the array and calls
 * battery_manager__msg__LedStates__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_manager
battery_manager__msg__LedStates__Sequence *
battery_manager__msg__LedStates__Sequence__create(size_t size);

/// Destroy array of msg/LedStates messages.
/**
 * It calls
 * battery_manager__msg__LedStates__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_manager
void
battery_manager__msg__LedStates__Sequence__destroy(battery_manager__msg__LedStates__Sequence * array);

/// Check for msg/LedStates message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_manager
bool
battery_manager__msg__LedStates__Sequence__are_equal(const battery_manager__msg__LedStates__Sequence * lhs, const battery_manager__msg__LedStates__Sequence * rhs);

/// Copy an array of msg/LedStates messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_manager
bool
battery_manager__msg__LedStates__Sequence__copy(
  const battery_manager__msg__LedStates__Sequence * input,
  battery_manager__msg__LedStates__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_MANAGER__MSG__DETAIL__LED_STATES__FUNCTIONS_H_
