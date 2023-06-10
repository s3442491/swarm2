// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from thymio_msgs:msg/LedGesture.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__LED_GESTURE__BUILDER_HPP_
#define THYMIO_MSGS__MSG__DETAIL__LED_GESTURE__BUILDER_HPP_

#include "thymio_msgs/msg/detail/led_gesture__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace thymio_msgs
{

namespace msg
{

namespace builder
{

class Init_LedGesture_mask
{
public:
  explicit Init_LedGesture_mask(::thymio_msgs::msg::LedGesture & msg)
  : msg_(msg)
  {}
  ::thymio_msgs::msg::LedGesture mask(::thymio_msgs::msg::LedGesture::_mask_type arg)
  {
    msg_.mask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::thymio_msgs::msg::LedGesture msg_;
};

class Init_LedGesture_mirror
{
public:
  explicit Init_LedGesture_mirror(::thymio_msgs::msg::LedGesture & msg)
  : msg_(msg)
  {}
  Init_LedGesture_mask mirror(::thymio_msgs::msg::LedGesture::_mirror_type arg)
  {
    msg_.mirror = std::move(arg);
    return Init_LedGesture_mask(msg_);
  }

private:
  ::thymio_msgs::msg::LedGesture msg_;
};

class Init_LedGesture_length
{
public:
  explicit Init_LedGesture_length(::thymio_msgs::msg::LedGesture & msg)
  : msg_(msg)
  {}
  Init_LedGesture_mirror length(::thymio_msgs::msg::LedGesture::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_LedGesture_mirror(msg_);
  }

private:
  ::thymio_msgs::msg::LedGesture msg_;
};

class Init_LedGesture_period
{
public:
  explicit Init_LedGesture_period(::thymio_msgs::msg::LedGesture & msg)
  : msg_(msg)
  {}
  Init_LedGesture_length period(::thymio_msgs::msg::LedGesture::_period_type arg)
  {
    msg_.period = std::move(arg);
    return Init_LedGesture_length(msg_);
  }

private:
  ::thymio_msgs::msg::LedGesture msg_;
};

class Init_LedGesture_leds
{
public:
  explicit Init_LedGesture_leds(::thymio_msgs::msg::LedGesture & msg)
  : msg_(msg)
  {}
  Init_LedGesture_period leds(::thymio_msgs::msg::LedGesture::_leds_type arg)
  {
    msg_.leds = std::move(arg);
    return Init_LedGesture_period(msg_);
  }

private:
  ::thymio_msgs::msg::LedGesture msg_;
};

class Init_LedGesture_wave
{
public:
  explicit Init_LedGesture_wave(::thymio_msgs::msg::LedGesture & msg)
  : msg_(msg)
  {}
  Init_LedGesture_leds wave(::thymio_msgs::msg::LedGesture::_wave_type arg)
  {
    msg_.wave = std::move(arg);
    return Init_LedGesture_leds(msg_);
  }

private:
  ::thymio_msgs::msg::LedGesture msg_;
};

class Init_LedGesture_gesture
{
public:
  Init_LedGesture_gesture()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedGesture_wave gesture(::thymio_msgs::msg::LedGesture::_gesture_type arg)
  {
    msg_.gesture = std::move(arg);
    return Init_LedGesture_wave(msg_);
  }

private:
  ::thymio_msgs::msg::LedGesture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::thymio_msgs::msg::LedGesture>()
{
  return thymio_msgs::msg::builder::Init_LedGesture_gesture();
}

}  // namespace thymio_msgs

#endif  // THYMIO_MSGS__MSG__DETAIL__LED_GESTURE__BUILDER_HPP_
