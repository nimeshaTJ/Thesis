// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_ur5_msgs:srv/PlanRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_UR5_MSGS__SRV__DETAIL__PLAN_REQUEST__STRUCT_HPP_
#define MOVEIT_UR5_MSGS__SRV__DETAIL__PLAN_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_ur5_msgs__srv__PlanRequest_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_ur5_msgs__srv__PlanRequest_Request __declspec(deprecated)
#endif

namespace moveit_ur5_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanRequest_Request_
{
  using Type = PlanRequest_Request_<ContainerAllocator>;

  explicit PlanRequest_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init)
  {
    (void)_init;
  }

  explicit PlanRequest_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _target_type target;

  // setters for named parameter idiom
  Type & set__target(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_ur5_msgs::srv::PlanRequest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_ur5_msgs::srv::PlanRequest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_ur5_msgs::srv::PlanRequest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_ur5_msgs::srv::PlanRequest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_ur5_msgs::srv::PlanRequest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_ur5_msgs::srv::PlanRequest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_ur5_msgs::srv::PlanRequest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_ur5_msgs::srv::PlanRequest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_ur5_msgs::srv::PlanRequest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_ur5_msgs::srv::PlanRequest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_ur5_msgs__srv__PlanRequest_Request
    std::shared_ptr<moveit_ur5_msgs::srv::PlanRequest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_ur5_msgs__srv__PlanRequest_Request
    std::shared_ptr<moveit_ur5_msgs::srv::PlanRequest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanRequest_Request_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanRequest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanRequest_Request_

// alias to use template instance with default allocator
using PlanRequest_Request =
  moveit_ur5_msgs::srv::PlanRequest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_ur5_msgs


#ifndef _WIN32
# define DEPRECATED__moveit_ur5_msgs__srv__PlanRequest_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_ur5_msgs__srv__PlanRequest_Response __declspec(deprecated)
#endif

namespace moveit_ur5_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanRequest_Response_
{
  using Type = PlanRequest_Response_<ContainerAllocator>;

  explicit PlanRequest_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit PlanRequest_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_ur5_msgs::srv::PlanRequest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_ur5_msgs::srv::PlanRequest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_ur5_msgs::srv::PlanRequest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_ur5_msgs::srv::PlanRequest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_ur5_msgs::srv::PlanRequest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_ur5_msgs::srv::PlanRequest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_ur5_msgs::srv::PlanRequest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_ur5_msgs::srv::PlanRequest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_ur5_msgs::srv::PlanRequest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_ur5_msgs::srv::PlanRequest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_ur5_msgs__srv__PlanRequest_Response
    std::shared_ptr<moveit_ur5_msgs::srv::PlanRequest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_ur5_msgs__srv__PlanRequest_Response
    std::shared_ptr<moveit_ur5_msgs::srv::PlanRequest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanRequest_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanRequest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanRequest_Response_

// alias to use template instance with default allocator
using PlanRequest_Response =
  moveit_ur5_msgs::srv::PlanRequest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_ur5_msgs

namespace moveit_ur5_msgs
{

namespace srv
{

struct PlanRequest
{
  using Request = moveit_ur5_msgs::srv::PlanRequest_Request;
  using Response = moveit_ur5_msgs::srv::PlanRequest_Response;
};

}  // namespace srv

}  // namespace moveit_ur5_msgs

#endif  // MOVEIT_UR5_MSGS__SRV__DETAIL__PLAN_REQUEST__STRUCT_HPP_
