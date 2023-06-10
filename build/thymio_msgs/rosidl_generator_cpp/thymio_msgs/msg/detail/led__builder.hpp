// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from thymio_msgs:msg/Led.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__LED__BUILDER_HPP_
#define THYMIO_MSGS__MSG__DETAIL__LED__BUILDER_HPP_

#include "thymio_msgs/msg/detail/led__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace thymio_msgs
{

namespace msg
{

namespace builder
{

class Init_Led_values
{
public:
  explicit Init_Led_values(::thymio_msgs::msg::Led & msg)
  : msg_(msg)
  {}
  ::thymio_msgs::msg::Led values(::thymio_msgs::msg::Led::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::thymio_msgs::msg::Led msg_;
};

class Init_Led_id
{
public:
  Init_Led_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Led_values id(::thymio_msgs::msg::Led::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Led_values(msg_);
  }

private:
  ::thymio_msgs::msg::Led msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::thymio_msgs::msg::Led>()
{
  return thymio_msgs::msg::builder::Init_Led_id();
}

}  // namespace thymio_msgs

#endif  // THYMIO_MSGS__MSG__DETAIL__LED__BUILDER_HPP_
