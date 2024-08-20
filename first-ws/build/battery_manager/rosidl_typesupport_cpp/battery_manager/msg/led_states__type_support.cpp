// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from battery_manager:msg/LedStates.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "battery_manager/msg/detail/led_states__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace battery_manager
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _LedStates_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LedStates_type_support_ids_t;

static const _LedStates_type_support_ids_t _LedStates_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LedStates_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LedStates_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LedStates_type_support_symbol_names_t _LedStates_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_manager, msg, LedStates)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, battery_manager, msg, LedStates)),
  }
};

typedef struct _LedStates_type_support_data_t
{
  void * data[2];
} _LedStates_type_support_data_t;

static _LedStates_type_support_data_t _LedStates_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LedStates_message_typesupport_map = {
  2,
  "battery_manager",
  &_LedStates_message_typesupport_ids.typesupport_identifier[0],
  &_LedStates_message_typesupport_symbol_names.symbol_name[0],
  &_LedStates_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LedStates_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LedStates_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace battery_manager

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<battery_manager::msg::LedStates>()
{
  return &::battery_manager::msg::rosidl_typesupport_cpp::LedStates_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, battery_manager, msg, LedStates)() {
  return get_message_type_support_handle<battery_manager::msg::LedStates>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
