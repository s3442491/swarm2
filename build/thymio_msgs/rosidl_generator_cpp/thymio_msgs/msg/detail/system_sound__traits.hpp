// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from thymio_msgs:msg/SystemSound.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__TRAITS_HPP_
#define THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__TRAITS_HPP_

#include "thymio_msgs/msg/detail/system_sound__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<thymio_msgs::msg::SystemSound>()
{
  return "thymio_msgs::msg::SystemSound";
}

template<>
inline const char * name<thymio_msgs::msg::SystemSound>()
{
  return "thymio_msgs/msg/SystemSound";
}

template<>
struct has_fixed_size<thymio_msgs::msg::SystemSound>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<thymio_msgs::msg::SystemSound>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<thymio_msgs::msg::SystemSound>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__TRAITS_HPP_
