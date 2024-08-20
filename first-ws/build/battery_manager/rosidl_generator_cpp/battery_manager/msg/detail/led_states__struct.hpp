// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from battery_manager:msg/LedStates.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_MANAGER__MSG__DETAIL__LED_STATES__STRUCT_HPP_
#define BATTERY_MANAGER__MSG__DETAIL__LED_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__battery_manager__msg__LedStates __attribute__((deprecated))
#else
# define DEPRECATED__battery_manager__msg__LedStates __declspec(deprecated)
#endif

namespace battery_manager
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedStates_
{
  using Type = LedStates_<ContainerAllocator>;

  explicit LedStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_id = 0ll;
      this->state = false;
    }
  }

  explicit LedStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_id = 0ll;
      this->state = false;
    }
  }

  // field types and members
  using _led_id_type =
    int64_t;
  _led_id_type led_id;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__led_id(
    const int64_t & _arg)
  {
    this->led_id = _arg;
    return *this;
  }
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    battery_manager::msg::LedStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const battery_manager::msg::LedStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<battery_manager::msg::LedStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<battery_manager::msg::LedStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      battery_manager::msg::LedStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<battery_manager::msg::LedStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      battery_manager::msg::LedStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<battery_manager::msg::LedStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<battery_manager::msg::LedStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<battery_manager::msg::LedStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__battery_manager__msg__LedStates
    std::shared_ptr<battery_manager::msg::LedStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__battery_manager__msg__LedStates
    std::shared_ptr<battery_manager::msg::LedStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedStates_ & other) const
  {
    if (this->led_id != other.led_id) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedStates_

// alias to use template instance with default allocator
using LedStates =
  battery_manager::msg::LedStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace battery_manager

#endif  // BATTERY_MANAGER__MSG__DETAIL__LED_STATES__STRUCT_HPP_
