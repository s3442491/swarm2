// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from thymio_msgs:msg/SystemSound.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__BUILDER_HPP_
#define THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__BUILDER_HPP_

#include "thymio_msgs/msg/detail/system_sound__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace thymio_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemSound_sound
{
public:
  Init_SystemSound_sound()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::thymio_msgs::msg::SystemSound sound(::thymio_msgs::msg::SystemSound::_sound_type arg)
  {
    msg_.sound = std::move(arg);
    return std::move(msg_);
  }

private:
  ::thymio_msgs::msg::SystemSound msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::thymio_msgs::msg::SystemSound>()
{
  return thymio_msgs::msg::builder::Init_SystemSound_sound();
}

}  // namespace thymio_msgs

#endif  // THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__BUILDER_HPP_
