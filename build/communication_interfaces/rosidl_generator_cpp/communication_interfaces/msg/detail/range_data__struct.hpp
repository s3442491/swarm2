// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_interfaces:msg/RangeData.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__RANGE_DATA__STRUCT_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__RANGE_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__communication_interfaces__msg__RangeData __attribute__((deprecated))
#else
# define DEPRECATED__communication_interfaces__msg__RangeData __declspec(deprecated)
#endif

namespace communication_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RangeData_
{
  using Type = RangeData_<ContainerAllocator>;

  explicit RangeData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RangeData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ranges_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _ranges_type ranges;
  using _angles_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _angles_type angles;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ranges(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->ranges = _arg;
    return *this;
  }
  Type & set__angles(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_interfaces::msg::RangeData_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_interfaces::msg::RangeData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_interfaces::msg::RangeData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_interfaces::msg::RangeData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::msg::RangeData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::msg::RangeData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::msg::RangeData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::msg::RangeData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_interfaces::msg::RangeData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_interfaces::msg::RangeData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_interfaces__msg__RangeData
    std::shared_ptr<communication_interfaces::msg::RangeData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_interfaces__msg__RangeData
    std::shared_ptr<communication_interfaces::msg::RangeData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RangeData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ranges != other.ranges) {
      return false;
    }
    if (this->angles != other.angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const RangeData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RangeData_

// alias to use template instance with default allocator
using RangeData =
  communication_interfaces::msg::RangeData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__RANGE_DATA__STRUCT_HPP_
