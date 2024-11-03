// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_ur5_msgs:srv/PlanRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_UR5_MSGS__SRV__DETAIL__PLAN_REQUEST__BUILDER_HPP_
#define MOVEIT_UR5_MSGS__SRV__DETAIL__PLAN_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_ur5_msgs/srv/detail/plan_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_ur5_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanRequest_Request_target
{
public:
  Init_PlanRequest_Request_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_ur5_msgs::srv::PlanRequest_Request target(::moveit_ur5_msgs::srv::PlanRequest_Request::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_ur5_msgs::srv::PlanRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_ur5_msgs::srv::PlanRequest_Request>()
{
  return moveit_ur5_msgs::srv::builder::Init_PlanRequest_Request_target();
}

}  // namespace moveit_ur5_msgs


namespace moveit_ur5_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanRequest_Response_result
{
public:
  Init_PlanRequest_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_ur5_msgs::srv::PlanRequest_Response result(::moveit_ur5_msgs::srv::PlanRequest_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_ur5_msgs::srv::PlanRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_ur5_msgs::srv::PlanRequest_Response>()
{
  return moveit_ur5_msgs::srv::builder::Init_PlanRequest_Response_result();
}

}  // namespace moveit_ur5_msgs

#endif  // MOVEIT_UR5_MSGS__SRV__DETAIL__PLAN_REQUEST__BUILDER_HPP_
