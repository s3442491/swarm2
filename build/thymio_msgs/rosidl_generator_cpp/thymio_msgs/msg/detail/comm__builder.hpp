// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from thymio_msgs:msg/Comm.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__COMM__BUILDER_HPP_
#define THYMIO_MSGS__MSG__DETAIL__COMM__BUILDER_HPP_

#include "thymio_msgs/msg/detail/comm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace thymio_msgs
{

namespace msg
{

namespace builder
{

class Init_Comm_intensities
{
public:
  explicit Init_Comm_intensities(::thymio_msgs::msg::Comm & msg)
  : msg_(msg)
  {}
  ::thymio_msgs::msg::Comm intensities(::thymio_msgs::msg::Comm::_intensities_type arg)
  {
    msg_.intensities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::thymio_msgs::msg::Comm msg_;
};

class Init_Comm_payloads
{
public:
  explicit Init_Comm_payloads(::thymio_msgs::msg::Comm & msg)
  : msg_(msg)
  {}
  Init_Comm_intensities payloads(::thymio_msgs::msg::Comm::_payloads_type arg)
  {
    msg_.payloads = std::move(arg);
    return Init_Comm_intensities(msg_);
  }

private:
  ::thymio_msgs::msg::Comm msg_;
};

class Init_Comm_value
{
public:
  Init_Comm_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Comm_payloads value(::thymio_msgs::msg::Comm::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_Comm_payloads(msg_);
  }

private:
  ::thymio_msgs::msg::Comm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::thymio_msgs::msg::Comm>()
{
  return thymio_msgs::msg::builder::Init_Comm_value();
}

}  // namespace thymio_msgs

#endif  // THYMIO_MSGS__MSG__DETAIL__COMM__BUILDER_HPP_
