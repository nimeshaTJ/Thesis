// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pnp_msgs:action/Gripper.idl
// generated code does not contain a copyright notice

#ifndef PNP_MSGS__ACTION__DETAIL__GRIPPER__TRAITS_HPP_
#define PNP_MSGS__ACTION__DETAIL__GRIPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pnp_msgs/action/detail/gripper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pnp_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Gripper_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: gripper_goal
  {
    out << "gripper_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gripper_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gripper_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_goal, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gripper_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pnp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pnp_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pnp_msgs::action::Gripper_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  pnp_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pnp_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pnp_msgs::action::Gripper_Goal & msg)
{
  return pnp_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pnp_msgs::action::Gripper_Goal>()
{
  return "pnp_msgs::action::Gripper_Goal";
}

template<>
inline const char * name<pnp_msgs::action::Gripper_Goal>()
{
  return "pnp_msgs/action/Gripper_Goal";
}

template<>
struct has_fixed_size<pnp_msgs::action::Gripper_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pnp_msgs::action::Gripper_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pnp_msgs::action::Gripper_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pnp_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Gripper_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: gripper_result
  {
    out << "gripper_result: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gripper_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gripper_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_result: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gripper_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pnp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pnp_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pnp_msgs::action::Gripper_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  pnp_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pnp_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pnp_msgs::action::Gripper_Result & msg)
{
  return pnp_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pnp_msgs::action::Gripper_Result>()
{
  return "pnp_msgs::action::Gripper_Result";
}

template<>
inline const char * name<pnp_msgs::action::Gripper_Result>()
{
  return "pnp_msgs/action/Gripper_Result";
}

template<>
struct has_fixed_size<pnp_msgs::action::Gripper_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pnp_msgs::action::Gripper_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pnp_msgs::action::Gripper_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pnp_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Gripper_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: gripper_progress
  {
    out << "gripper_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gripper_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gripper_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gripper_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pnp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pnp_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pnp_msgs::action::Gripper_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  pnp_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pnp_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pnp_msgs::action::Gripper_Feedback & msg)
{
  return pnp_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pnp_msgs::action::Gripper_Feedback>()
{
  return "pnp_msgs::action::Gripper_Feedback";
}

template<>
inline const char * name<pnp_msgs::action::Gripper_Feedback>()
{
  return "pnp_msgs/action/Gripper_Feedback";
}

template<>
struct has_fixed_size<pnp_msgs::action::Gripper_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pnp_msgs::action::Gripper_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pnp_msgs::action::Gripper_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "pnp_msgs/action/detail/gripper__traits.hpp"

namespace pnp_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Gripper_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gripper_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gripper_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pnp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pnp_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pnp_msgs::action::Gripper_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pnp_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pnp_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pnp_msgs::action::Gripper_SendGoal_Request & msg)
{
  return pnp_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pnp_msgs::action::Gripper_SendGoal_Request>()
{
  return "pnp_msgs::action::Gripper_SendGoal_Request";
}

template<>
inline const char * name<pnp_msgs::action::Gripper_SendGoal_Request>()
{
  return "pnp_msgs/action/Gripper_SendGoal_Request";
}

template<>
struct has_fixed_size<pnp_msgs::action::Gripper_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<pnp_msgs::action::Gripper_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pnp_msgs::action::Gripper_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<pnp_msgs::action::Gripper_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pnp_msgs::action::Gripper_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace pnp_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Gripper_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gripper_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gripper_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pnp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pnp_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pnp_msgs::action::Gripper_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pnp_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pnp_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pnp_msgs::action::Gripper_SendGoal_Response & msg)
{
  return pnp_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pnp_msgs::action::Gripper_SendGoal_Response>()
{
  return "pnp_msgs::action::Gripper_SendGoal_Response";
}

template<>
inline const char * name<pnp_msgs::action::Gripper_SendGoal_Response>()
{
  return "pnp_msgs/action/Gripper_SendGoal_Response";
}

template<>
struct has_fixed_size<pnp_msgs::action::Gripper_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<pnp_msgs::action::Gripper_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<pnp_msgs::action::Gripper_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pnp_msgs::action::Gripper_SendGoal>()
{
  return "pnp_msgs::action::Gripper_SendGoal";
}

template<>
inline const char * name<pnp_msgs::action::Gripper_SendGoal>()
{
  return "pnp_msgs/action/Gripper_SendGoal";
}

template<>
struct has_fixed_size<pnp_msgs::action::Gripper_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<pnp_msgs::action::Gripper_SendGoal_Request>::value &&
    has_fixed_size<pnp_msgs::action::Gripper_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<pnp_msgs::action::Gripper_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<pnp_msgs::action::Gripper_SendGoal_Request>::value &&
    has_bounded_size<pnp_msgs::action::Gripper_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<pnp_msgs::action::Gripper_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<pnp_msgs::action::Gripper_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pnp_msgs::action::Gripper_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace pnp_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Gripper_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gripper_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gripper_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pnp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pnp_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pnp_msgs::action::Gripper_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pnp_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pnp_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pnp_msgs::action::Gripper_GetResult_Request & msg)
{
  return pnp_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pnp_msgs::action::Gripper_GetResult_Request>()
{
  return "pnp_msgs::action::Gripper_GetResult_Request";
}

template<>
inline const char * name<pnp_msgs::action::Gripper_GetResult_Request>()
{
  return "pnp_msgs/action/Gripper_GetResult_Request";
}

template<>
struct has_fixed_size<pnp_msgs::action::Gripper_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pnp_msgs::action::Gripper_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pnp_msgs::action::Gripper_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "pnp_msgs/action/detail/gripper__traits.hpp"

namespace pnp_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Gripper_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gripper_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gripper_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pnp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pnp_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pnp_msgs::action::Gripper_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pnp_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pnp_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pnp_msgs::action::Gripper_GetResult_Response & msg)
{
  return pnp_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pnp_msgs::action::Gripper_GetResult_Response>()
{
  return "pnp_msgs::action::Gripper_GetResult_Response";
}

template<>
inline const char * name<pnp_msgs::action::Gripper_GetResult_Response>()
{
  return "pnp_msgs/action/Gripper_GetResult_Response";
}

template<>
struct has_fixed_size<pnp_msgs::action::Gripper_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<pnp_msgs::action::Gripper_Result>::value> {};

template<>
struct has_bounded_size<pnp_msgs::action::Gripper_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<pnp_msgs::action::Gripper_Result>::value> {};

template<>
struct is_message<pnp_msgs::action::Gripper_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pnp_msgs::action::Gripper_GetResult>()
{
  return "pnp_msgs::action::Gripper_GetResult";
}

template<>
inline const char * name<pnp_msgs::action::Gripper_GetResult>()
{
  return "pnp_msgs/action/Gripper_GetResult";
}

template<>
struct has_fixed_size<pnp_msgs::action::Gripper_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<pnp_msgs::action::Gripper_GetResult_Request>::value &&
    has_fixed_size<pnp_msgs::action::Gripper_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<pnp_msgs::action::Gripper_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<pnp_msgs::action::Gripper_GetResult_Request>::value &&
    has_bounded_size<pnp_msgs::action::Gripper_GetResult_Response>::value
  >
{
};

template<>
struct is_service<pnp_msgs::action::Gripper_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<pnp_msgs::action::Gripper_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pnp_msgs::action::Gripper_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "pnp_msgs/action/detail/gripper__traits.hpp"

namespace pnp_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Gripper_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gripper_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gripper_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pnp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pnp_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pnp_msgs::action::Gripper_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  pnp_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pnp_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const pnp_msgs::action::Gripper_FeedbackMessage & msg)
{
  return pnp_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<pnp_msgs::action::Gripper_FeedbackMessage>()
{
  return "pnp_msgs::action::Gripper_FeedbackMessage";
}

template<>
inline const char * name<pnp_msgs::action::Gripper_FeedbackMessage>()
{
  return "pnp_msgs/action/Gripper_FeedbackMessage";
}

template<>
struct has_fixed_size<pnp_msgs::action::Gripper_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<pnp_msgs::action::Gripper_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pnp_msgs::action::Gripper_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<pnp_msgs::action::Gripper_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pnp_msgs::action::Gripper_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<pnp_msgs::action::Gripper>
  : std::true_type
{
};

template<>
struct is_action_goal<pnp_msgs::action::Gripper_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<pnp_msgs::action::Gripper_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<pnp_msgs::action::Gripper_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PNP_MSGS__ACTION__DETAIL__GRIPPER__TRAITS_HPP_
