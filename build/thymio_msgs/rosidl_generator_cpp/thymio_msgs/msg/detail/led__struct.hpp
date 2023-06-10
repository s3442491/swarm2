// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from thymio_msgs:msg/Led.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__LED__STRUCT_HPP_
#define THYMIO_MSGS__MSG__DETAIL__LED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__thymio_msgs__msg__Led __attribute__((deprecated))
#else
# define DEPRECATED__thymio_msgs__msg__Led __declspec(deprecated)
#endif

namespace thymio_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Led_
{
  using Type = Led_<ContainerAllocator>;

  explicit Led_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
    }
  }

  explicit Led_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _values_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _values_type values;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__values(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->values = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CIRCLE =
    0u;
  static constexpr uint8_t PROXIMITY =
    1u;
  static constexpr uint8_t BUTTONS =
    2u;
  static constexpr uint8_t GROUND =
    3u;
  static constexpr uint8_t TEMPERATURE =
    4u;
  static constexpr uint8_t MICROPHONE =
    5u;
  static constexpr uint8_t REMOTE =
    6u;

  // pointer types
  using RawPtr =
    thymio_msgs::msg::Led_<ContainerAllocator> *;
  using ConstRawPtr =
    const thymio_msgs::msg::Led_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<thymio_msgs::msg::Led_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<thymio_msgs::msg::Led_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      thymio_msgs::msg::Led_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<thymio_msgs::msg::Led_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      thymio_msgs::msg::Led_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<thymio_msgs::msg::Led_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<thymio_msgs::msg::Led_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<thymio_msgs::msg::Led_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__thymio_msgs__msg__Led
    std::shared_ptr<thymio_msgs::msg::Led_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__thymio_msgs__msg__Led
    std::shared_ptr<thymio_msgs::msg::Led_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Led_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->values != other.values) {
      return false;
    }
    return true;
  }
  bool operator!=(const Led_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Led_

// alias to use template instance with default allocator
using Led =
  thymio_msgs::msg::Led_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Led_<ContainerAllocator>::CIRCLE;
template<typename ContainerAllocator>
constexpr uint8_t Led_<ContainerAllocator>::PROXIMITY;
template<typename ContainerAllocator>
constexpr uint8_t Led_<ContainerAllocator>::BUTTONS;
template<typename ContainerAllocator>
constexpr uint8_t Led_<ContainerAllocator>::GROUND;
template<typename ContainerAllocator>
constexpr uint8_t Led_<ContainerAllocator>::TEMPERATURE;
template<typename ContainerAllocator>
constexpr uint8_t Led_<ContainerAllocator>::MICROPHONE;
template<typename ContainerAllocator>
constexpr uint8_t Led_<ContainerAllocator>::REMOTE;

}  // namespace msg

}  // namespace thymio_msgs

#endif  // THYMIO_MSGS__MSG__DETAIL__LED__STRUCT_HPP_
