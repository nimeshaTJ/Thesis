// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pnp_msgs:action/PickAndPlace.idl
// generated code does not contain a copyright notice

#ifndef PNP_MSGS__ACTION__DETAIL__PICK_AND_PLACE__STRUCT_HPP_
#define PNP_MSGS__ACTION__DETAIL__PICK_AND_PLACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pick_goal'
// Member 'place_goal'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pnp_msgs__action__PickAndPlace_Goal __attribute__((deprecated))
#else
# define DEPRECATED__pnp_msgs__action__PickAndPlace_Goal __declspec(deprecated)
#endif

namespace pnp_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_Goal_
{
  using Type = PickAndPlace_Goal_<ContainerAllocator>;

  explicit PickAndPlace_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pick_goal(_init),
    place_goal(_init)
  {
    (void)_init;
  }

  explicit PickAndPlace_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pick_goal(_alloc, _init),
    place_goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pick_goal_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pick_goal_type pick_goal;
  using _place_goal_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _place_goal_type place_goal;

  // setters for named parameter idiom
  Type & set__pick_goal(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pick_goal = _arg;
    return *this;
  }
  Type & set__place_goal(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->place_goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pnp_msgs::action::PickAndPlace_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const pnp_msgs::action::PickAndPlace_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_Goal
    std::shared_ptr<pnp_msgs::action::PickAndPlace_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_Goal
    std::shared_ptr<pnp_msgs::action::PickAndPlace_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_Goal_ & other) const
  {
    if (this->pick_goal != other.pick_goal) {
      return false;
    }
    if (this->place_goal != other.place_goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_Goal_

// alias to use template instance with default allocator
using PickAndPlace_Goal =
  pnp_msgs::action::PickAndPlace_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pnp_msgs


#ifndef _WIN32
# define DEPRECATED__pnp_msgs__action__PickAndPlace_Result __attribute__((deprecated))
#else
# define DEPRECATED__pnp_msgs__action__PickAndPlace_Result __declspec(deprecated)
#endif

namespace pnp_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_Result_
{
  using Type = PickAndPlace_Result_<ContainerAllocator>;

  explicit PickAndPlace_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pnp_result = "";
    }
  }

  explicit PickAndPlace_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pnp_result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pnp_result = "";
    }
  }

  // field types and members
  using _pnp_result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pnp_result_type pnp_result;

  // setters for named parameter idiom
  Type & set__pnp_result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pnp_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pnp_msgs::action::PickAndPlace_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const pnp_msgs::action::PickAndPlace_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_Result
    std::shared_ptr<pnp_msgs::action::PickAndPlace_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_Result
    std::shared_ptr<pnp_msgs::action::PickAndPlace_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_Result_ & other) const
  {
    if (this->pnp_result != other.pnp_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_Result_

// alias to use template instance with default allocator
using PickAndPlace_Result =
  pnp_msgs::action::PickAndPlace_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pnp_msgs


#ifndef _WIN32
# define DEPRECATED__pnp_msgs__action__PickAndPlace_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__pnp_msgs__action__PickAndPlace_Feedback __declspec(deprecated)
#endif

namespace pnp_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_Feedback_
{
  using Type = PickAndPlace_Feedback_<ContainerAllocator>;

  explicit PickAndPlace_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pnp_message = "";
    }
  }

  explicit PickAndPlace_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pnp_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pnp_message = "";
    }
  }

  // field types and members
  using _pnp_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pnp_message_type pnp_message;

  // setters for named parameter idiom
  Type & set__pnp_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pnp_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pnp_msgs::action::PickAndPlace_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const pnp_msgs::action::PickAndPlace_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_Feedback
    std::shared_ptr<pnp_msgs::action::PickAndPlace_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_Feedback
    std::shared_ptr<pnp_msgs::action::PickAndPlace_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_Feedback_ & other) const
  {
    if (this->pnp_message != other.pnp_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_Feedback_

// alias to use template instance with default allocator
using PickAndPlace_Feedback =
  pnp_msgs::action::PickAndPlace_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pnp_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "pnp_msgs/action/detail/pick_and_place__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pnp_msgs__action__PickAndPlace_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__pnp_msgs__action__PickAndPlace_SendGoal_Request __declspec(deprecated)
#endif

namespace pnp_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_SendGoal_Request_
{
  using Type = PickAndPlace_SendGoal_Request_<ContainerAllocator>;

  explicit PickAndPlace_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit PickAndPlace_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    pnp_msgs::action::PickAndPlace_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const pnp_msgs::action::PickAndPlace_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pnp_msgs::action::PickAndPlace_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pnp_msgs::action::PickAndPlace_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_SendGoal_Request
    std::shared_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_SendGoal_Request
    std::shared_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_SendGoal_Request_

// alias to use template instance with default allocator
using PickAndPlace_SendGoal_Request =
  pnp_msgs::action::PickAndPlace_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pnp_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pnp_msgs__action__PickAndPlace_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__pnp_msgs__action__PickAndPlace_SendGoal_Response __declspec(deprecated)
#endif

namespace pnp_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_SendGoal_Response_
{
  using Type = PickAndPlace_SendGoal_Response_<ContainerAllocator>;

  explicit PickAndPlace_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit PickAndPlace_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pnp_msgs::action::PickAndPlace_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pnp_msgs::action::PickAndPlace_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_SendGoal_Response
    std::shared_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_SendGoal_Response
    std::shared_ptr<pnp_msgs::action::PickAndPlace_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_SendGoal_Response_

// alias to use template instance with default allocator
using PickAndPlace_SendGoal_Response =
  pnp_msgs::action::PickAndPlace_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pnp_msgs

namespace pnp_msgs
{

namespace action
{

struct PickAndPlace_SendGoal
{
  using Request = pnp_msgs::action::PickAndPlace_SendGoal_Request;
  using Response = pnp_msgs::action::PickAndPlace_SendGoal_Response;
};

}  // namespace action

}  // namespace pnp_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pnp_msgs__action__PickAndPlace_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__pnp_msgs__action__PickAndPlace_GetResult_Request __declspec(deprecated)
#endif

namespace pnp_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_GetResult_Request_
{
  using Type = PickAndPlace_GetResult_Request_<ContainerAllocator>;

  explicit PickAndPlace_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit PickAndPlace_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pnp_msgs::action::PickAndPlace_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pnp_msgs::action::PickAndPlace_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_GetResult_Request
    std::shared_ptr<pnp_msgs::action::PickAndPlace_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_GetResult_Request
    std::shared_ptr<pnp_msgs::action::PickAndPlace_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_GetResult_Request_

// alias to use template instance with default allocator
using PickAndPlace_GetResult_Request =
  pnp_msgs::action::PickAndPlace_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pnp_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pnp_msgs__action__PickAndPlace_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__pnp_msgs__action__PickAndPlace_GetResult_Response __declspec(deprecated)
#endif

namespace pnp_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_GetResult_Response_
{
  using Type = PickAndPlace_GetResult_Response_<ContainerAllocator>;

  explicit PickAndPlace_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PickAndPlace_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    pnp_msgs::action::PickAndPlace_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const pnp_msgs::action::PickAndPlace_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pnp_msgs::action::PickAndPlace_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pnp_msgs::action::PickAndPlace_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_GetResult_Response
    std::shared_ptr<pnp_msgs::action::PickAndPlace_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_GetResult_Response
    std::shared_ptr<pnp_msgs::action::PickAndPlace_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_GetResult_Response_

// alias to use template instance with default allocator
using PickAndPlace_GetResult_Response =
  pnp_msgs::action::PickAndPlace_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pnp_msgs

namespace pnp_msgs
{

namespace action
{

struct PickAndPlace_GetResult
{
  using Request = pnp_msgs::action::PickAndPlace_GetResult_Request;
  using Response = pnp_msgs::action::PickAndPlace_GetResult_Response;
};

}  // namespace action

}  // namespace pnp_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pnp_msgs__action__PickAndPlace_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__pnp_msgs__action__PickAndPlace_FeedbackMessage __declspec(deprecated)
#endif

namespace pnp_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickAndPlace_FeedbackMessage_
{
  using Type = PickAndPlace_FeedbackMessage_<ContainerAllocator>;

  explicit PickAndPlace_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit PickAndPlace_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    pnp_msgs::action::PickAndPlace_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const pnp_msgs::action::PickAndPlace_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pnp_msgs::action::PickAndPlace_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const pnp_msgs::action::PickAndPlace_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pnp_msgs::action::PickAndPlace_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pnp_msgs::action::PickAndPlace_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pnp_msgs::action::PickAndPlace_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pnp_msgs::action::PickAndPlace_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_FeedbackMessage
    std::shared_ptr<pnp_msgs::action::PickAndPlace_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pnp_msgs__action__PickAndPlace_FeedbackMessage
    std::shared_ptr<pnp_msgs::action::PickAndPlace_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickAndPlace_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickAndPlace_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickAndPlace_FeedbackMessage_

// alias to use template instance with default allocator
using PickAndPlace_FeedbackMessage =
  pnp_msgs::action::PickAndPlace_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pnp_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace pnp_msgs
{

namespace action
{

struct PickAndPlace
{
  /// The goal message defined in the action definition.
  using Goal = pnp_msgs::action::PickAndPlace_Goal;
  /// The result message defined in the action definition.
  using Result = pnp_msgs::action::PickAndPlace_Result;
  /// The feedback message defined in the action definition.
  using Feedback = pnp_msgs::action::PickAndPlace_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = pnp_msgs::action::PickAndPlace_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = pnp_msgs::action::PickAndPlace_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = pnp_msgs::action::PickAndPlace_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct PickAndPlace PickAndPlace;

}  // namespace action

}  // namespace pnp_msgs

#endif  // PNP_MSGS__ACTION__DETAIL__PICK_AND_PLACE__STRUCT_HPP_
