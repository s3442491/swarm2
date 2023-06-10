// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from thymio_msgs:msg/SystemSound.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__STRUCT_HPP_
#define THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__thymio_msgs__msg__SystemSound __attribute__((deprecated))
#else
# define DEPRECATED__thymio_msgs__msg__SystemSound __declspec(deprecated)
#endif

namespace thymio_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemSound_
{
  using Type = SystemSound_<ContainerAllocator>;

  explicit SystemSound_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sound = 0;
    }
  }

  explicit SystemSound_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sound = 0;
    }
  }

  // field types and members
  using _sound_type =
    int8_t;
  _sound_type sound;

  // setters for named parameter idiom
  Type & set__sound(
    const int8_t & _arg)
  {
    this->sound = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t STOP =
    -1;
  static constexpr int8_t STARTUP =
    0;
  static constexpr int8_t SHUTDOWN =
    1;
  static constexpr int8_t ARROW_BUTTON =
    2;
  static constexpr int8_t CENTRAL_BUTTON =
    3;
  static constexpr int8_t FREE_FALL =
    4;
  static constexpr int8_t COLLISION =
    5;
  static constexpr int8_t TARGET_OK =
    6;
  static constexpr int8_t TARGET_DETECT =
    7;

  // pointer types
  using RawPtr =
    thymio_msgs::msg::SystemSound_<ContainerAllocator> *;
  using ConstRawPtr =
    const thymio_msgs::msg::SystemSound_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<thymio_msgs::msg::SystemSound_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<thymio_msgs::msg::SystemSound_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      thymio_msgs::msg::SystemSound_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<thymio_msgs::msg::SystemSound_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      thymio_msgs::msg::SystemSound_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<thymio_msgs::msg::SystemSound_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<thymio_msgs::msg::SystemSound_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<thymio_msgs::msg::SystemSound_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__thymio_msgs__msg__SystemSound
    std::shared_ptr<thymio_msgs::msg::SystemSound_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__thymio_msgs__msg__SystemSound
    std::shared_ptr<thymio_msgs::msg::SystemSound_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemSound_ & other) const
  {
    if (this->sound != other.sound) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemSound_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemSound_

// alias to use template instance with default allocator
using SystemSound =
  thymio_msgs::msg::SystemSound_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t SystemSound_<ContainerAllocator>::STOP;
template<typename ContainerAllocator>
constexpr int8_t SystemSound_<ContainerAllocator>::STARTUP;
template<typename ContainerAllocator>
constexpr int8_t SystemSound_<ContainerAllocator>::SHUTDOWN;
template<typename ContainerAllocator>
constexpr int8_t SystemSound_<ContainerAllocator>::ARROW_BUTTON;
template<typename ContainerAllocator>
constexpr int8_t SystemSound_<ContainerAllocator>::CENTRAL_BUTTON;
template<typename ContainerAllocator>
constexpr int8_t SystemSound_<ContainerAllocator>::FREE_FALL;
template<typename ContainerAllocator>
constexpr int8_t SystemSound_<ContainerAllocator>::COLLISION;
template<typename ContainerAllocator>
constexpr int8_t SystemSound_<ContainerAllocator>::TARGET_OK;
template<typename ContainerAllocator>
constexpr int8_t SystemSound_<ContainerAllocator>::TARGET_DETECT;

}  // namespace msg

}  // namespace thymio_msgs

#endif  // THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__STRUCT_HPP_
