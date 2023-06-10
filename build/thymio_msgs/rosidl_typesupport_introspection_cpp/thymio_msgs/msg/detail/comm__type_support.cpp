// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from thymio_msgs:msg/Comm.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "thymio_msgs/msg/detail/comm__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace thymio_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Comm_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) thymio_msgs::msg::Comm(_init);
}

void Comm_fini_function(void * message_memory)
{
  auto typed_message = static_cast<thymio_msgs::msg::Comm *>(message_memory);
  typed_message->~Comm();
}

size_t size_function__Comm__payloads(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__Comm__payloads(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__Comm__payloads(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 7> *>(untyped_member);
  return &member[index];
}

size_t size_function__Comm__intensities(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__Comm__intensities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__Comm__intensities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 7> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Comm_message_member_array[3] = {
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs::msg::Comm, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "payloads",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs::msg::Comm, payloads),  // bytes offset in struct
    nullptr,  // default value
    size_function__Comm__payloads,  // size() function pointer
    get_const_function__Comm__payloads,  // get_const(index) function pointer
    get_function__Comm__payloads,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "intensities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs::msg::Comm, intensities),  // bytes offset in struct
    nullptr,  // default value
    size_function__Comm__intensities,  // size() function pointer
    get_const_function__Comm__intensities,  // get_const(index) function pointer
    get_function__Comm__intensities,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Comm_message_members = {
  "thymio_msgs::msg",  // message namespace
  "Comm",  // message name
  3,  // number of fields
  sizeof(thymio_msgs::msg::Comm),
  Comm_message_member_array,  // message members
  Comm_init_function,  // function to initialize message memory (memory has to be allocated)
  Comm_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Comm_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Comm_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace thymio_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<thymio_msgs::msg::Comm>()
{
  return &::thymio_msgs::msg::rosidl_typesupport_introspection_cpp::Comm_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, thymio_msgs, msg, Comm)() {
  return &::thymio_msgs::msg::rosidl_typesupport_introspection_cpp::Comm_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
