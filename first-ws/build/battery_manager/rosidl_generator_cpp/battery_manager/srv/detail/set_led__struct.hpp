// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from battery_manager:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_MANAGER__SRV__DETAIL__SET_LED__STRUCT_HPP_
#define BATTERY_MANAGER__SRV__DETAIL__SET_LED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__battery_manager__srv__SetLed_Request __attribute__((deprecated))
#else
# define DEPRECATED__battery_manager__srv__SetLed_Request __declspec(deprecated)
#endif

namespace battery_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLed_Request_
{
  using Type = SetLed_Request_<ContainerAllocator>;

  explicit SetLed_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_id = 0ll;
      this->state = false;
    }
  }

  explicit SetLed_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    battery_manager::srv::SetLed_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const battery_manager::srv::SetLed_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<battery_manager::srv::SetLed_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<battery_manager::srv::SetLed_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      battery_manager::srv::SetLed_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<battery_manager::srv::SetLed_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      battery_manager::srv::SetLed_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<battery_manager::srv::SetLed_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<battery_manager::srv::SetLed_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<battery_manager::srv::SetLed_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__battery_manager__srv__SetLed_Request
    std::shared_ptr<battery_manager::srv::SetLed_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__battery_manager__srv__SetLed_Request
    std::shared_ptr<battery_manager::srv::SetLed_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLed_Request_ & other) const
  {
    if (this->led_id != other.led_id) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLed_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLed_Request_

// alias to use template instance with default allocator
using SetLed_Request =
  battery_manager::srv::SetLed_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace battery_manager


#ifndef _WIN32
# define DEPRECATED__battery_manager__srv__SetLed_Response __attribute__((deprecated))
#else
# define DEPRECATED__battery_manager__srv__SetLed_Response __declspec(deprecated)
#endif

namespace battery_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLed_Response_
{
  using Type = SetLed_Response_<ContainerAllocator>;

  explicit SetLed_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->switch_state = false;
    }
  }

  explicit SetLed_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->switch_state = false;
    }
  }

  // field types and members
  using _switch_state_type =
    bool;
  _switch_state_type switch_state;

  // setters for named parameter idiom
  Type & set__switch_state(
    const bool & _arg)
  {
    this->switch_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    battery_manager::srv::SetLed_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const battery_manager::srv::SetLed_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<battery_manager::srv::SetLed_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<battery_manager::srv::SetLed_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      battery_manager::srv::SetLed_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<battery_manager::srv::SetLed_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      battery_manager::srv::SetLed_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<battery_manager::srv::SetLed_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<battery_manager::srv::SetLed_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<battery_manager::srv::SetLed_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__battery_manager__srv__SetLed_Response
    std::shared_ptr<battery_manager::srv::SetLed_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__battery_manager__srv__SetLed_Response
    std::shared_ptr<battery_manager::srv::SetLed_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLed_Response_ & other) const
  {
    if (this->switch_state != other.switch_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLed_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLed_Response_

// alias to use template instance with default allocator
using SetLed_Response =
  battery_manager::srv::SetLed_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace battery_manager

namespace battery_manager
{

namespace srv
{

struct SetLed
{
  using Request = battery_manager::srv::SetLed_Request;
  using Response = battery_manager::srv::SetLed_Response;
};

}  // namespace srv

}  // namespace battery_manager

#endif  // BATTERY_MANAGER__SRV__DETAIL__SET_LED__STRUCT_HPP_
