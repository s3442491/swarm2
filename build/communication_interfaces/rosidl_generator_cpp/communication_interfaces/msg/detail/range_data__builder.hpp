// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces:msg/RangeData.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__RANGE_DATA__BUILDER_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__RANGE_DATA__BUILDER_HPP_

#include "communication_interfaces/msg/detail/range_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces
{

namespace msg
{

namespace builder
{

class Init_RangeData_angles
{
public:
  explicit Init_RangeData_angles(::communication_interfaces::msg::RangeData & msg)
  : msg_(msg)
  {}
  ::communication_interfaces::msg::RangeData angles(::communication_interfaces::msg::RangeData::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces::msg::RangeData msg_;
};

class Init_RangeData_ranges
{
public:
  explicit Init_RangeData_ranges(::communication_interfaces::msg::RangeData & msg)
  : msg_(msg)
  {}
  Init_RangeData_angles ranges(::communication_interfaces::msg::RangeData::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return Init_RangeData_angles(msg_);
  }

private:
  ::communication_interfaces::msg::RangeData msg_;
};

class Init_RangeData_header
{
public:
  Init_RangeData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RangeData_ranges header(::communication_interfaces::msg::RangeData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RangeData_ranges(msg_);
  }

private:
  ::communication_interfaces::msg::RangeData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces::msg::RangeData>()
{
  return communication_interfaces::msg::builder::Init_RangeData_header();
}

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__RANGE_DATA__BUILDER_HPP_
