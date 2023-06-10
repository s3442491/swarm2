// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from thymio_msgs:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__SOUND__STRUCT_HPP_
#define THYMIO_MSGS__MSG__DETAIL__SOUND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__thymio_msgs__msg__Sound __attribute__((deprecated))
#else
# define DEPRECATED__thymio_msgs__msg__Sound __declspec(deprecated)
#endif

namespace thymio_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sound_
{
  using Type = Sound_<ContainerAllocator>;

  explicit Sound_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frequency = 0.0f;
    }
  }

  explicit Sound_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frequency = 0.0f;
    }
  }

  // field types and members
  using _duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _duration_type duration;
  using _frequency_type =
    float;
  _frequency_type frequency;

  // setters for named parameter idiom
  Type & set__duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__frequency(
    const float & _arg)
  {
    this->frequency = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    thymio_msgs::msg::Sound_<ContainerAllocator> *;
  using ConstRawPtr =
    const thymio_msgs::msg::Sound_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<thymio_msgs::msg::Sound_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<thymio_msgs::msg::Sound_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      thymio_msgs::msg::Sound_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<thymio_msgs::msg::Sound_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      thymio_msgs::msg::Sound_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<thymio_msgs::msg::Sound_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<thymio_msgs::msg::Sound_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<thymio_msgs::msg::Sound_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__thymio_msgs__msg__Sound
    std::shared_ptr<thymio_msgs::msg::Sound_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__thymio_msgs__msg__Sound
    std::shared_ptr<thymio_msgs::msg::Sound_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sound_ & other) const
  {
    if (this->duration != other.duration) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sound_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sound_

// alias to use template instance with default allocator
using Sound =
  thymio_msgs::msg::Sound_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace thymio_msgs

#endif  // THYMIO_MSGS__MSG__DETAIL__SOUND__STRUCT_HPP_
