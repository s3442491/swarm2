// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces:msg/FloatArray.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__FLOAT_ARRAY__BUILDER_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__FLOAT_ARRAY__BUILDER_HPP_

#include "communication_interfaces/msg/detail/float_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces
{

namespace msg
{

namespace builder
{

class Init_FloatArray_floats
{
public:
  Init_FloatArray_floats()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::communication_interfaces::msg::FloatArray floats(::communication_interfaces::msg::FloatArray::_floats_type arg)
  {
    msg_.floats = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces::msg::FloatArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces::msg::FloatArray>()
{
  return communication_interfaces::msg::builder::Init_FloatArray_floats();
}

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__FLOAT_ARRAY__BUILDER_HPP_
