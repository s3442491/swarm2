// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from thymio_msgs:msg/Led.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__LED__TRAITS_HPP_
#define THYMIO_MSGS__MSG__DETAIL__LED__TRAITS_HPP_

#include "thymio_msgs/msg/detail/led__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<thymio_msgs::msg::Led>()
{
  return "thymio_msgs::msg::Led";
}

template<>
inline const char * name<thymio_msgs::msg::Led>()
{
  return "thymio_msgs/msg/Led";
}

template<>
struct has_fixed_size<thymio_msgs::msg::Led>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<thymio_msgs::msg::Led>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<thymio_msgs::msg::Led>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THYMIO_MSGS__MSG__DETAIL__LED__TRAITS_HPP_
