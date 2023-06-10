// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from thymio_msgs:msg/Comm.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__COMM__STRUCT_HPP_
#define THYMIO_MSGS__MSG__DETAIL__COMM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__thymio_msgs__msg__Comm __attribute__((deprecated))
#else
# define DEPRECATED__thymio_msgs__msg__Comm __declspec(deprecated)
#endif

namespace thymio_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Comm_
{
  using Type = Comm_<ContainerAllocator>;

  explicit Comm_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
      std::fill<typename std::array<int16_t, 7>::iterator, int16_t>(this->payloads.begin(), this->payloads.end(), 0);
      std::fill<typename std::array<int16_t, 7>::iterator, int16_t>(this->intensities.begin(), this->intensities.end(), 0);
    }
  }

  explicit Comm_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : payloads(_alloc),
    intensities(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
      std::fill<typename std::array<int16_t, 7>::iterator, int16_t>(this->payloads.begin(), this->payloads.end(), 0);
      std::fill<typename std::array<int16_t, 7>::iterator, int16_t>(this->intensities.begin(), this->intensities.end(), 0);
    }
  }

  // field types and members
  using _value_type =
    int16_t;
  _value_type value;
  using _payloads_type =
    std::array<int16_t, 7>;
  _payloads_type payloads;
  using _intensities_type =
    std::array<int16_t, 7>;
  _intensities_type intensities;

  // setters for named parameter idiom
  Type & set__value(
    const int16_t & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__payloads(
    const std::array<int16_t, 7> & _arg)
  {
    this->payloads = _arg;
    return *this;
  }
  Type & set__intensities(
    const std::array<int16_t, 7> & _arg)
  {
    this->intensities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    thymio_msgs::msg::Comm_<ContainerAllocator> *;
  using ConstRawPtr =
    const thymio_msgs::msg::Comm_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<thymio_msgs::msg::Comm_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<thymio_msgs::msg::Comm_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      thymio_msgs::msg::Comm_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<thymio_msgs::msg::Comm_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      thymio_msgs::msg::Comm_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<thymio_msgs::msg::Comm_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<thymio_msgs::msg::Comm_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<thymio_msgs::msg::Comm_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__thymio_msgs__msg__Comm
    std::shared_ptr<thymio_msgs::msg::Comm_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__thymio_msgs__msg__Comm
    std::shared_ptr<thymio_msgs::msg::Comm_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Comm_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    if (this->payloads != other.payloads) {
      return false;
    }
    if (this->intensities != other.intensities) {
      return false;
    }
    return true;
  }
  bool operator!=(const Comm_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Comm_

// alias to use template instance with default allocator
using Comm =
  thymio_msgs::msg::Comm_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace thymio_msgs

#endif  // THYMIO_MSGS__MSG__DETAIL__COMM__STRUCT_HPP_
