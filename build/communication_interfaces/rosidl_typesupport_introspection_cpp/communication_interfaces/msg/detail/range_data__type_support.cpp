// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from communication_interfaces:msg/RangeData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "communication_interfaces/msg/detail/range_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace communication_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RangeData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) communication_interfaces::msg::RangeData(_init);
}

void RangeData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<communication_interfaces::msg::RangeData *>(message_memory);
  typed_message->~RangeData();
}

size_t size_function__RangeData__ranges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RangeData__ranges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__RangeData__ranges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__RangeData__ranges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RangeData__angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RangeData__angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RangeData__angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__RangeData__angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RangeData_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces::msg::RangeData, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ranges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces::msg::RangeData, ranges),  // bytes offset in struct
    nullptr,  // default value
    size_function__RangeData__ranges,  // size() function pointer
    get_const_function__RangeData__ranges,  // get_const(index) function pointer
    get_function__RangeData__ranges,  // get(index) function pointer
    resize_function__RangeData__ranges  // resize(index) function pointer
  },
  {
    "angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces::msg::RangeData, angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__RangeData__angles,  // size() function pointer
    get_const_function__RangeData__angles,  // get_const(index) function pointer
    get_function__RangeData__angles,  // get(index) function pointer
    resize_function__RangeData__angles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RangeData_message_members = {
  "communication_interfaces::msg",  // message namespace
  "RangeData",  // message name
  3,  // number of fields
  sizeof(communication_interfaces::msg::RangeData),
  RangeData_message_member_array,  // message members
  RangeData_init_function,  // function to initialize message memory (memory has to be allocated)
  RangeData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RangeData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RangeData_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace communication_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<communication_interfaces::msg::RangeData>()
{
  return &::communication_interfaces::msg::rosidl_typesupport_introspection_cpp::RangeData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, communication_interfaces, msg, RangeData)() {
  return &::communication_interfaces::msg::rosidl_typesupport_introspection_cpp::RangeData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
