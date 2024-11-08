// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_ur5_msgs:srv/PlanRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_UR5_MSGS__SRV__DETAIL__PLAN_REQUEST__TRAITS_HPP_
#define MOVEIT_UR5_MSGS__SRV__DETAIL__PLAN_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_ur5_msgs/srv/detail/plan_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace moveit_ur5_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanRequest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanRequest_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace moveit_ur5_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_ur5_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_ur5_msgs::srv::PlanRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_ur5_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_ur5_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_ur5_msgs::srv::PlanRequest_Request & msg)
{
  return moveit_ur5_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_ur5_msgs::srv::PlanRequest_Request>()
{
  return "moveit_ur5_msgs::srv::PlanRequest_Request";
}

template<>
inline const char * name<moveit_ur5_msgs::srv::PlanRequest_Request>()
{
  return "moveit_ur5_msgs/srv/PlanRequest_Request";
}

template<>
struct has_fixed_size<moveit_ur5_msgs::srv::PlanRequest_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<moveit_ur5_msgs::srv::PlanRequest_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<moveit_ur5_msgs::srv::PlanRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace moveit_ur5_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanRequest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanRequest_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace moveit_ur5_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_ur5_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_ur5_msgs::srv::PlanRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_ur5_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_ur5_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_ur5_msgs::srv::PlanRequest_Response & msg)
{
  return moveit_ur5_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_ur5_msgs::srv::PlanRequest_Response>()
{
  return "moveit_ur5_msgs::srv::PlanRequest_Response";
}

template<>
inline const char * name<moveit_ur5_msgs::srv::PlanRequest_Response>()
{
  return "moveit_ur5_msgs/srv/PlanRequest_Response";
}

template<>
struct has_fixed_size<moveit_ur5_msgs::srv::PlanRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_ur5_msgs::srv::PlanRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_ur5_msgs::srv::PlanRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_ur5_msgs::srv::PlanRequest>()
{
  return "moveit_ur5_msgs::srv::PlanRequest";
}

template<>
inline const char * name<moveit_ur5_msgs::srv::PlanRequest>()
{
  return "moveit_ur5_msgs/srv/PlanRequest";
}

template<>
struct has_fixed_size<moveit_ur5_msgs::srv::PlanRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_ur5_msgs::srv::PlanRequest_Request>::value &&
    has_fixed_size<moveit_ur5_msgs::srv::PlanRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_ur5_msgs::srv::PlanRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_ur5_msgs::srv::PlanRequest_Request>::value &&
    has_bounded_size<moveit_ur5_msgs::srv::PlanRequest_Response>::value
  >
{
};

template<>
struct is_service<moveit_ur5_msgs::srv::PlanRequest>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_ur5_msgs::srv::PlanRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_ur5_msgs::srv::PlanRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_UR5_MSGS__SRV__DETAIL__PLAN_REQUEST__TRAITS_HPP_
