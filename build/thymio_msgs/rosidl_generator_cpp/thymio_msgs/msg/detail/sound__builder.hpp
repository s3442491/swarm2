// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from thymio_msgs:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__SOUND__BUILDER_HPP_
#define THYMIO_MSGS__MSG__DETAIL__SOUND__BUILDER_HPP_

#include "thymio_msgs/msg/detail/sound__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace thymio_msgs
{

namespace msg
{

namespace builder
{

class Init_Sound_frequency
{
public:
  explicit Init_Sound_frequency(::thymio_msgs::msg::Sound & msg)
  : msg_(msg)
  {}
  ::thymio_msgs::msg::Sound frequency(::thymio_msgs::msg::Sound::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::thymio_msgs::msg::Sound msg_;
};

class Init_Sound_duration
{
public:
  Init_Sound_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sound_frequency duration(::thymio_msgs::msg::Sound::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_Sound_frequency(msg_);
  }

private:
  ::thymio_msgs::msg::Sound msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::thymio_msgs::msg::Sound>()
{
  return thymio_msgs::msg::builder::Init_Sound_duration();
}

}  // namespace thymio_msgs

#endif  // THYMIO_MSGS__MSG__DETAIL__SOUND__BUILDER_HPP_
