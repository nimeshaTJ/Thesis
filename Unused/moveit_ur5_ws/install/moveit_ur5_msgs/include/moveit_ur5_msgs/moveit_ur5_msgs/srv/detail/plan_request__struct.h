// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_ur5_msgs:srv/PlanRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_UR5_MSGS__SRV__DETAIL__PLAN_REQUEST__STRUCT_H_
#define MOVEIT_UR5_MSGS__SRV__DETAIL__PLAN_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/PlanRequest in the package moveit_ur5_msgs.
typedef struct moveit_ur5_msgs__srv__PlanRequest_Request
{
  geometry_msgs__msg__Pose target;
} moveit_ur5_msgs__srv__PlanRequest_Request;

// Struct for a sequence of moveit_ur5_msgs__srv__PlanRequest_Request.
typedef struct moveit_ur5_msgs__srv__PlanRequest_Request__Sequence
{
  moveit_ur5_msgs__srv__PlanRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_ur5_msgs__srv__PlanRequest_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlanRequest in the package moveit_ur5_msgs.
typedef struct moveit_ur5_msgs__srv__PlanRequest_Response
{
  rosidl_runtime_c__String result;
} moveit_ur5_msgs__srv__PlanRequest_Response;

// Struct for a sequence of moveit_ur5_msgs__srv__PlanRequest_Response.
typedef struct moveit_ur5_msgs__srv__PlanRequest_Response__Sequence
{
  moveit_ur5_msgs__srv__PlanRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_ur5_msgs__srv__PlanRequest_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_UR5_MSGS__SRV__DETAIL__PLAN_REQUEST__STRUCT_H_
