// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pnp_msgs:action/PickAndPlace.idl
// generated code does not contain a copyright notice

#ifndef PNP_MSGS__ACTION__DETAIL__PICK_AND_PLACE__BUILDER_HPP_
#define PNP_MSGS__ACTION__DETAIL__PICK_AND_PLACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pnp_msgs/action/detail/pick_and_place__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_Goal_place_goal
{
public:
  explicit Init_PickAndPlace_Goal_place_goal(::pnp_msgs::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  ::pnp_msgs::action::PickAndPlace_Goal place_goal(::pnp_msgs::action::PickAndPlace_Goal::_place_goal_type arg)
  {
    msg_.place_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_pick_goal
{
public:
  Init_PickAndPlace_Goal_pick_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_Goal_place_goal pick_goal(::pnp_msgs::action::PickAndPlace_Goal::_pick_goal_type arg)
  {
    msg_.pick_goal = std::move(arg);
    return Init_PickAndPlace_Goal_place_goal(msg_);
  }

private:
  ::pnp_msgs::action::PickAndPlace_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::PickAndPlace_Goal>()
{
  return pnp_msgs::action::builder::Init_PickAndPlace_Goal_pick_goal();
}

}  // namespace pnp_msgs


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_Result_pnp_result
{
public:
  Init_PickAndPlace_Result_pnp_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pnp_msgs::action::PickAndPlace_Result pnp_result(::pnp_msgs::action::PickAndPlace_Result::_pnp_result_type arg)
  {
    msg_.pnp_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::PickAndPlace_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::PickAndPlace_Result>()
{
  return pnp_msgs::action::builder::Init_PickAndPlace_Result_pnp_result();
}

}  // namespace pnp_msgs


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_Feedback_pnp_message
{
public:
  Init_PickAndPlace_Feedback_pnp_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pnp_msgs::action::PickAndPlace_Feedback pnp_message(::pnp_msgs::action::PickAndPlace_Feedback::_pnp_message_type arg)
  {
    msg_.pnp_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::PickAndPlace_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::PickAndPlace_Feedback>()
{
  return pnp_msgs::action::builder::Init_PickAndPlace_Feedback_pnp_message();
}

}  // namespace pnp_msgs


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_SendGoal_Request_goal
{
public:
  explicit Init_PickAndPlace_SendGoal_Request_goal(::pnp_msgs::action::PickAndPlace_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pnp_msgs::action::PickAndPlace_SendGoal_Request goal(::pnp_msgs::action::PickAndPlace_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::PickAndPlace_SendGoal_Request msg_;
};

class Init_PickAndPlace_SendGoal_Request_goal_id
{
public:
  Init_PickAndPlace_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_SendGoal_Request_goal goal_id(::pnp_msgs::action::PickAndPlace_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PickAndPlace_SendGoal_Request_goal(msg_);
  }

private:
  ::pnp_msgs::action::PickAndPlace_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::PickAndPlace_SendGoal_Request>()
{
  return pnp_msgs::action::builder::Init_PickAndPlace_SendGoal_Request_goal_id();
}

}  // namespace pnp_msgs


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_SendGoal_Response_stamp
{
public:
  explicit Init_PickAndPlace_SendGoal_Response_stamp(::pnp_msgs::action::PickAndPlace_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pnp_msgs::action::PickAndPlace_SendGoal_Response stamp(::pnp_msgs::action::PickAndPlace_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::PickAndPlace_SendGoal_Response msg_;
};

class Init_PickAndPlace_SendGoal_Response_accepted
{
public:
  Init_PickAndPlace_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_SendGoal_Response_stamp accepted(::pnp_msgs::action::PickAndPlace_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PickAndPlace_SendGoal_Response_stamp(msg_);
  }

private:
  ::pnp_msgs::action::PickAndPlace_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::PickAndPlace_SendGoal_Response>()
{
  return pnp_msgs::action::builder::Init_PickAndPlace_SendGoal_Response_accepted();
}

}  // namespace pnp_msgs


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_GetResult_Request_goal_id
{
public:
  Init_PickAndPlace_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pnp_msgs::action::PickAndPlace_GetResult_Request goal_id(::pnp_msgs::action::PickAndPlace_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::PickAndPlace_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::PickAndPlace_GetResult_Request>()
{
  return pnp_msgs::action::builder::Init_PickAndPlace_GetResult_Request_goal_id();
}

}  // namespace pnp_msgs


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_GetResult_Response_result
{
public:
  explicit Init_PickAndPlace_GetResult_Response_result(::pnp_msgs::action::PickAndPlace_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pnp_msgs::action::PickAndPlace_GetResult_Response result(::pnp_msgs::action::PickAndPlace_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::PickAndPlace_GetResult_Response msg_;
};

class Init_PickAndPlace_GetResult_Response_status
{
public:
  Init_PickAndPlace_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_GetResult_Response_result status(::pnp_msgs::action::PickAndPlace_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PickAndPlace_GetResult_Response_result(msg_);
  }

private:
  ::pnp_msgs::action::PickAndPlace_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::PickAndPlace_GetResult_Response>()
{
  return pnp_msgs::action::builder::Init_PickAndPlace_GetResult_Response_status();
}

}  // namespace pnp_msgs


namespace pnp_msgs
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_FeedbackMessage_feedback
{
public:
  explicit Init_PickAndPlace_FeedbackMessage_feedback(::pnp_msgs::action::PickAndPlace_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pnp_msgs::action::PickAndPlace_FeedbackMessage feedback(::pnp_msgs::action::PickAndPlace_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pnp_msgs::action::PickAndPlace_FeedbackMessage msg_;
};

class Init_PickAndPlace_FeedbackMessage_goal_id
{
public:
  Init_PickAndPlace_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_FeedbackMessage_feedback goal_id(::pnp_msgs::action::PickAndPlace_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PickAndPlace_FeedbackMessage_feedback(msg_);
  }

private:
  ::pnp_msgs::action::PickAndPlace_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pnp_msgs::action::PickAndPlace_FeedbackMessage>()
{
  return pnp_msgs::action::builder::Init_PickAndPlace_FeedbackMessage_goal_id();
}

}  // namespace pnp_msgs

#endif  // PNP_MSGS__ACTION__DETAIL__PICK_AND_PLACE__BUILDER_HPP_
