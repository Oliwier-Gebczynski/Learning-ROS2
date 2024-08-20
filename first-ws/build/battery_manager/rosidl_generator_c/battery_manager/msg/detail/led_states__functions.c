// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from battery_manager:msg/LedStates.idl
// generated code does not contain a copyright notice
#include "battery_manager/msg/detail/led_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
battery_manager__msg__LedStates__init(battery_manager__msg__LedStates * msg)
{
  if (!msg) {
    return false;
  }
  // led_id
  // state
  return true;
}

void
battery_manager__msg__LedStates__fini(battery_manager__msg__LedStates * msg)
{
  if (!msg) {
    return;
  }
  // led_id
  // state
}

bool
battery_manager__msg__LedStates__are_equal(const battery_manager__msg__LedStates * lhs, const battery_manager__msg__LedStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_id
  if (lhs->led_id != rhs->led_id) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
battery_manager__msg__LedStates__copy(
  const battery_manager__msg__LedStates * input,
  battery_manager__msg__LedStates * output)
{
  if (!input || !output) {
    return false;
  }
  // led_id
  output->led_id = input->led_id;
  // state
  output->state = input->state;
  return true;
}

battery_manager__msg__LedStates *
battery_manager__msg__LedStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_manager__msg__LedStates * msg = (battery_manager__msg__LedStates *)allocator.allocate(sizeof(battery_manager__msg__LedStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_manager__msg__LedStates));
  bool success = battery_manager__msg__LedStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_manager__msg__LedStates__destroy(battery_manager__msg__LedStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_manager__msg__LedStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_manager__msg__LedStates__Sequence__init(battery_manager__msg__LedStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_manager__msg__LedStates * data = NULL;

  if (size) {
    data = (battery_manager__msg__LedStates *)allocator.zero_allocate(size, sizeof(battery_manager__msg__LedStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_manager__msg__LedStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_manager__msg__LedStates__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_manager__msg__LedStates__Sequence__fini(battery_manager__msg__LedStates__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_manager__msg__LedStates__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_manager__msg__LedStates__Sequence *
battery_manager__msg__LedStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_manager__msg__LedStates__Sequence * array = (battery_manager__msg__LedStates__Sequence *)allocator.allocate(sizeof(battery_manager__msg__LedStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_manager__msg__LedStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_manager__msg__LedStates__Sequence__destroy(battery_manager__msg__LedStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_manager__msg__LedStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_manager__msg__LedStates__Sequence__are_equal(const battery_manager__msg__LedStates__Sequence * lhs, const battery_manager__msg__LedStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_manager__msg__LedStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_manager__msg__LedStates__Sequence__copy(
  const battery_manager__msg__LedStates__Sequence * input,
  battery_manager__msg__LedStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_manager__msg__LedStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_manager__msg__LedStates * data =
      (battery_manager__msg__LedStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_manager__msg__LedStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_manager__msg__LedStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_manager__msg__LedStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
