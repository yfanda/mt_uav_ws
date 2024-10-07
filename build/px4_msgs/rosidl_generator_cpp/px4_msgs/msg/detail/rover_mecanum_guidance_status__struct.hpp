// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RoverMecanumGuidanceStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_MECANUM_GUIDANCE_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_MECANUM_GUIDANCE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RoverMecanumGuidanceStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RoverMecanumGuidanceStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoverMecanumGuidanceStatus_
{
  using Type = RoverMecanumGuidanceStatus_<ContainerAllocator>;

  explicit RoverMecanumGuidanceStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->lookahead_distance = 0.0f;
      this->heading_error = 0.0f;
      this->desired_speed = 0.0f;
    }
  }

  explicit RoverMecanumGuidanceStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->lookahead_distance = 0.0f;
      this->heading_error = 0.0f;
      this->desired_speed = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _lookahead_distance_type =
    float;
  _lookahead_distance_type lookahead_distance;
  using _heading_error_type =
    float;
  _heading_error_type heading_error;
  using _desired_speed_type =
    float;
  _desired_speed_type desired_speed;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__lookahead_distance(
    const float & _arg)
  {
    this->lookahead_distance = _arg;
    return *this;
  }
  Type & set__heading_error(
    const float & _arg)
  {
    this->heading_error = _arg;
    return *this;
  }
  Type & set__desired_speed(
    const float & _arg)
  {
    this->desired_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::RoverMecanumGuidanceStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RoverMecanumGuidanceStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RoverMecanumGuidanceStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RoverMecanumGuidanceStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RoverMecanumGuidanceStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RoverMecanumGuidanceStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RoverMecanumGuidanceStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RoverMecanumGuidanceStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RoverMecanumGuidanceStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RoverMecanumGuidanceStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RoverMecanumGuidanceStatus
    std::shared_ptr<px4_msgs::msg::RoverMecanumGuidanceStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RoverMecanumGuidanceStatus
    std::shared_ptr<px4_msgs::msg::RoverMecanumGuidanceStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoverMecanumGuidanceStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->lookahead_distance != other.lookahead_distance) {
      return false;
    }
    if (this->heading_error != other.heading_error) {
      return false;
    }
    if (this->desired_speed != other.desired_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoverMecanumGuidanceStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoverMecanumGuidanceStatus_

// alias to use template instance with default allocator
using RoverMecanumGuidanceStatus =
  px4_msgs::msg::RoverMecanumGuidanceStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_MECANUM_GUIDANCE_STATUS__STRUCT_HPP_
