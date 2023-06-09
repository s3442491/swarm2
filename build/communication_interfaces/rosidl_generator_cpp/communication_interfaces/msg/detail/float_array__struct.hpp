// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_interfaces:msg/FloatArray.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__FLOAT_ARRAY__STRUCT_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__FLOAT_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__communication_interfaces__msg__FloatArray __attribute__((deprecated))
#else
# define DEPRECATED__communication_interfaces__msg__FloatArray __declspec(deprecated)
#endif

namespace communication_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FloatArray_
{
  using Type = FloatArray_<ContainerAllocator>;

  explicit FloatArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FloatArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _floats_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _floats_type floats;

  // setters for named parameter idiom
  Type & set__floats(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->floats = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_interfaces::msg::FloatArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_interfaces::msg::FloatArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_interfaces::msg::FloatArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_interfaces::msg::FloatArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::msg::FloatArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::msg::FloatArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::msg::FloatArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::msg::FloatArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_interfaces::msg::FloatArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_interfaces::msg::FloatArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_interfaces__msg__FloatArray
    std::shared_ptr<communication_interfaces::msg::FloatArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_interfaces__msg__FloatArray
    std::shared_ptr<communication_interfaces::msg::FloatArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FloatArray_ & other) const
  {
    if (this->floats != other.floats) {
      return false;
    }
    return true;
  }
  bool operator!=(const FloatArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FloatArray_

// alias to use template instance with default allocator
using FloatArray =
  communication_interfaces::msg::FloatArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__FLOAT_ARRAY__STRUCT_HPP_
