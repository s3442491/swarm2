// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from thymio_msgs:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef THYMIO_MSGS__MSG__DETAIL__SOUND__TRAITS_HPP_
#define THYMIO_MSGS__MSG__DETAIL__SOUND__TRAITS_HPP_

#include "thymio_msgs/msg/detail/sound__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<thymio_msgs::msg::Sound>()
{
  return "thymio_msgs::msg::Sound";
}

template<>
inline const char * name<thymio_msgs::msg::Sound>()
{
  return "thymio_msgs/msg/Sound";
}

template<>
struct has_fixed_size<thymio_msgs::msg::Sound>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<thymio_msgs::msg::Sound>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<thymio_msgs::msg::Sound>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THYMIO_MSGS__MSG__DETAIL__SOUND__TRAITS_HPP_
