// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from thymio_msgs:msg/LedGesture.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__LED_GESTURE__STRUCT_HPP_
#define THYMIO_MSGS__MSG__DETAIL__LED_GESTURE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__thymio_msgs__msg__LedGesture __attribute__((deprecated))
#else
# define DEPRECATED__thymio_msgs__msg__LedGesture __declspec(deprecated)
#endif

namespace thymio_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedGesture_
{
  using Type = LedGesture_<ContainerAllocator>;

  explicit LedGesture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gesture = 0;
      this->wave = 0;
      this->leds = 0;
      this->period = 0.0f;
      this->length = 0;
      this->mirror = 0;
    }
  }

  explicit LedGesture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gesture = 0;
      this->wave = 0;
      this->leds = 0;
      this->period = 0.0f;
      this->length = 0;
      this->mirror = 0;
    }
  }

  // field types and members
  using _gesture_type =
    uint8_t;
  _gesture_type gesture;
  using _wave_type =
    uint8_t;
  _wave_type wave;
  using _leds_type =
    uint8_t;
  _leds_type leds;
  using _period_type =
    float;
  _period_type period;
  using _length_type =
    uint16_t;
  _length_type length;
  using _mirror_type =
    uint8_t;
  _mirror_type mirror;
  using _mask_type =
    std::vector<bool, typename ContainerAllocator::template rebind<bool>::other>;
  _mask_type mask;

  // setters for named parameter idiom
  Type & set__gesture(
    const uint8_t & _arg)
  {
    this->gesture = _arg;
    return *this;
  }
  Type & set__wave(
    const uint8_t & _arg)
  {
    this->wave = _arg;
    return *this;
  }
  Type & set__leds(
    const uint8_t & _arg)
  {
    this->leds = _arg;
    return *this;
  }
  Type & set__period(
    const float & _arg)
  {
    this->period = _arg;
    return *this;
  }
  Type & set__length(
    const uint16_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__mirror(
    const uint8_t & _arg)
  {
    this->mirror = _arg;
    return *this;
  }
  Type & set__mask(
    const std::vector<bool, typename ContainerAllocator::template rebind<bool>::other> & _arg)
  {
    this->mask = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OFF =
    0u;
  static constexpr uint8_t WAVE =
    1u;
  static constexpr uint8_t RECT =
    0u;
  static constexpr uint8_t HARMONIC =
    1u;
  static constexpr uint8_t CIRCLE =
    0u;
  static constexpr uint8_t PROXIMITY =
    1u;
  static constexpr uint8_t BUTTONS =
    2u;

  // pointer types
  using RawPtr =
    thymio_msgs::msg::LedGesture_<ContainerAllocator> *;
  using ConstRawPtr =
    const thymio_msgs::msg::LedGesture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<thymio_msgs::msg::LedGesture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<thymio_msgs::msg::LedGesture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      thymio_msgs::msg::LedGesture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<thymio_msgs::msg::LedGesture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      thymio_msgs::msg::LedGesture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<thymio_msgs::msg::LedGesture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<thymio_msgs::msg::LedGesture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<thymio_msgs::msg::LedGesture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__thymio_msgs__msg__LedGesture
    std::shared_ptr<thymio_msgs::msg::LedGesture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__thymio_msgs__msg__LedGesture
    std::shared_ptr<thymio_msgs::msg::LedGesture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedGesture_ & other) const
  {
    if (this->gesture != other.gesture) {
      return false;
    }
    if (this->wave != other.wave) {
      return false;
    }
    if (this->leds != other.leds) {
      return false;
    }
    if (this->period != other.period) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->mirror != other.mirror) {
      return false;
    }
    if (this->mask != other.mask) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedGesture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedGesture_

// alias to use template instance with default allocator
using LedGesture =
  thymio_msgs::msg::LedGesture_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t LedGesture_<ContainerAllocator>::OFF;
template<typename ContainerAllocator>
constexpr uint8_t LedGesture_<ContainerAllocator>::WAVE;
template<typename ContainerAllocator>
constexpr uint8_t LedGesture_<ContainerAllocator>::RECT;
template<typename ContainerAllocator>
constexpr uint8_t LedGesture_<ContainerAllocator>::HARMONIC;
template<typename ContainerAllocator>
constexpr uint8_t LedGesture_<ContainerAllocator>::CIRCLE;
template<typename ContainerAllocator>
constexpr uint8_t LedGesture_<ContainerAllocator>::PROXIMITY;
template<typename ContainerAllocator>
constexpr uint8_t LedGesture_<ContainerAllocator>::BUTTONS;

}  // namespace msg

}  // namespace thymio_msgs

#endif  // THYMIO_MSGS__MSG__DETAIL__LED_GESTURE__STRUCT_HPP_
