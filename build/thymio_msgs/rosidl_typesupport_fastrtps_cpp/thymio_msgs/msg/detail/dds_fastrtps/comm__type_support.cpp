// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from thymio_msgs:msg/Comm.idl
// generated code does not contain a copyright notice
#include "thymio_msgs/msg/detail/comm__rosidl_typesupport_fastrtps_cpp.hpp"
#include "thymio_msgs/msg/detail/comm__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace thymio_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio_msgs
cdr_serialize(
  const thymio_msgs::msg::Comm & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: value
  cdr << ros_message.value;
  // Member: payloads
  {
    cdr << ros_message.payloads;
  }
  // Member: intensities
  {
    cdr << ros_message.intensities;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  thymio_msgs::msg::Comm & ros_message)
{
  // Member: value
  cdr >> ros_message.value;

  // Member: payloads
  {
    cdr >> ros_message.payloads;
  }

  // Member: intensities
  {
    cdr >> ros_message.intensities;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio_msgs
get_serialized_size(
  const thymio_msgs::msg::Comm & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: value
  {
    size_t item_size = sizeof(ros_message.value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: payloads
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.payloads[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: intensities
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.intensities[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio_msgs
max_serialized_size_Comm(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: payloads
  {
    size_t array_size = 7;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: intensities
  {
    size_t array_size = 7;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Comm__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const thymio_msgs::msg::Comm *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Comm__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<thymio_msgs::msg::Comm *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Comm__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const thymio_msgs::msg::Comm *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Comm__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Comm(full_bounded, 0);
}

static message_type_support_callbacks_t _Comm__callbacks = {
  "thymio_msgs::msg",
  "Comm",
  _Comm__cdr_serialize,
  _Comm__cdr_deserialize,
  _Comm__get_serialized_size,
  _Comm__max_serialized_size
};

static rosidl_message_type_support_t _Comm__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Comm__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace thymio_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_thymio_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<thymio_msgs::msg::Comm>()
{
  return &thymio_msgs::msg::typesupport_fastrtps_cpp::_Comm__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, thymio_msgs, msg, Comm)() {
  return &thymio_msgs::msg::typesupport_fastrtps_cpp::_Comm__handle;
}

#ifdef __cplusplus
}
#endif
