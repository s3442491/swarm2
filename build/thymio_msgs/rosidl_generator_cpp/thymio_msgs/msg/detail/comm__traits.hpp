// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from thymio_msgs:msg/Comm.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__COMM__TRAITS_HPP_
#define THYMIO_MSGS__MSG__DETAIL__COMM__TRAITS_HPP_

#include "thymio_msgs/msg/detail/comm__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<thymio_msgs::msg::Comm>()
{
  return "thymio_msgs::msg::Comm";
}

template<>
inline const char * name<thymio_msgs::msg::Comm>()
{
  return "thymio_msgs/msg/Comm";
}

template<>
struct has_fixed_size<thymio_msgs::msg::Comm>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<thymio_msgs::msg::Comm>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<thymio_msgs::msg::Comm>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THYMIO_MSGS__MSG__DETAIL__COMM__TRAITS_HPP_
