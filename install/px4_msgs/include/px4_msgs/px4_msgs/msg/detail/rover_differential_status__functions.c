// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/RoverDifferentialStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/rover_differential_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__RoverDifferentialStatus__init(px4_msgs__msg__RoverDifferentialStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // actual_speed
  // actual_yaw
  // actual_yaw_rate
  // desired_yaw_rate
  // forward_speed_normalized
  // speed_diff_normalized
  // pid_yaw_integral
  // pid_yaw_rate_integral
  // pid_throttle_integral
  return true;
}

void
px4_msgs__msg__RoverDifferentialStatus__fini(px4_msgs__msg__RoverDifferentialStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // actual_speed
  // actual_yaw
  // actual_yaw_rate
  // desired_yaw_rate
  // forward_speed_normalized
  // speed_diff_normalized
  // pid_yaw_integral
  // pid_yaw_rate_integral
  // pid_throttle_integral
}

bool
px4_msgs__msg__RoverDifferentialStatus__are_equal(const px4_msgs__msg__RoverDifferentialStatus * lhs, const px4_msgs__msg__RoverDifferentialStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // actual_speed
  if (lhs->actual_speed != rhs->actual_speed) {
    return false;
  }
  // actual_yaw
  if (lhs->actual_yaw != rhs->actual_yaw) {
    return false;
  }
  // actual_yaw_rate
  if (lhs->actual_yaw_rate != rhs->actual_yaw_rate) {
    return false;
  }
  // desired_yaw_rate
  if (lhs->desired_yaw_rate != rhs->desired_yaw_rate) {
    return false;
  }
  // forward_speed_normalized
  if (lhs->forward_speed_normalized != rhs->forward_speed_normalized) {
    return false;
  }
  // speed_diff_normalized
  if (lhs->speed_diff_normalized != rhs->speed_diff_normalized) {
    return false;
  }
  // pid_yaw_integral
  if (lhs->pid_yaw_integral != rhs->pid_yaw_integral) {
    return false;
  }
  // pid_yaw_rate_integral
  if (lhs->pid_yaw_rate_integral != rhs->pid_yaw_rate_integral) {
    return false;
  }
  // pid_throttle_integral
  if (lhs->pid_throttle_integral != rhs->pid_throttle_integral) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__RoverDifferentialStatus__copy(
  const px4_msgs__msg__RoverDifferentialStatus * input,
  px4_msgs__msg__RoverDifferentialStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // actual_speed
  output->actual_speed = input->actual_speed;
  // actual_yaw
  output->actual_yaw = input->actual_yaw;
  // actual_yaw_rate
  output->actual_yaw_rate = input->actual_yaw_rate;
  // desired_yaw_rate
  output->desired_yaw_rate = input->desired_yaw_rate;
  // forward_speed_normalized
  output->forward_speed_normalized = input->forward_speed_normalized;
  // speed_diff_normalized
  output->speed_diff_normalized = input->speed_diff_normalized;
  // pid_yaw_integral
  output->pid_yaw_integral = input->pid_yaw_integral;
  // pid_yaw_rate_integral
  output->pid_yaw_rate_integral = input->pid_yaw_rate_integral;
  // pid_throttle_integral
  output->pid_throttle_integral = input->pid_throttle_integral;
  return true;
}

px4_msgs__msg__RoverDifferentialStatus *
px4_msgs__msg__RoverDifferentialStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RoverDifferentialStatus * msg = (px4_msgs__msg__RoverDifferentialStatus *)allocator.allocate(sizeof(px4_msgs__msg__RoverDifferentialStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__RoverDifferentialStatus));
  bool success = px4_msgs__msg__RoverDifferentialStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__RoverDifferentialStatus__destroy(px4_msgs__msg__RoverDifferentialStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__RoverDifferentialStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__RoverDifferentialStatus__Sequence__init(px4_msgs__msg__RoverDifferentialStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RoverDifferentialStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__RoverDifferentialStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__RoverDifferentialStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__RoverDifferentialStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__RoverDifferentialStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
px4_msgs__msg__RoverDifferentialStatus__Sequence__fini(px4_msgs__msg__RoverDifferentialStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__RoverDifferentialStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

px4_msgs__msg__RoverDifferentialStatus__Sequence *
px4_msgs__msg__RoverDifferentialStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RoverDifferentialStatus__Sequence * array = (px4_msgs__msg__RoverDifferentialStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__RoverDifferentialStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__RoverDifferentialStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__RoverDifferentialStatus__Sequence__destroy(px4_msgs__msg__RoverDifferentialStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__RoverDifferentialStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__RoverDifferentialStatus__Sequence__are_equal(const px4_msgs__msg__RoverDifferentialStatus__Sequence * lhs, const px4_msgs__msg__RoverDifferentialStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__RoverDifferentialStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RoverDifferentialStatus__Sequence__copy(
  const px4_msgs__msg__RoverDifferentialStatus__Sequence * input,
  px4_msgs__msg__RoverDifferentialStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__RoverDifferentialStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__RoverDifferentialStatus * data =
      (px4_msgs__msg__RoverDifferentialStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__RoverDifferentialStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__RoverDifferentialStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__RoverDifferentialStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
