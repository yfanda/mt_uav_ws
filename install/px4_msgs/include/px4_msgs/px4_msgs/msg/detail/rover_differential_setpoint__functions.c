// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/RoverDifferentialSetpoint.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/rover_differential_setpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__RoverDifferentialSetpoint__init(px4_msgs__msg__RoverDifferentialSetpoint * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // forward_speed_setpoint
  // forward_speed_setpoint_normalized
  // yaw_rate_setpoint
  // yaw_rate_setpoint_normalized
  // yaw_setpoint
  return true;
}

void
px4_msgs__msg__RoverDifferentialSetpoint__fini(px4_msgs__msg__RoverDifferentialSetpoint * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // forward_speed_setpoint
  // forward_speed_setpoint_normalized
  // yaw_rate_setpoint
  // yaw_rate_setpoint_normalized
  // yaw_setpoint
}

bool
px4_msgs__msg__RoverDifferentialSetpoint__are_equal(const px4_msgs__msg__RoverDifferentialSetpoint * lhs, const px4_msgs__msg__RoverDifferentialSetpoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // forward_speed_setpoint
  if (lhs->forward_speed_setpoint != rhs->forward_speed_setpoint) {
    return false;
  }
  // forward_speed_setpoint_normalized
  if (lhs->forward_speed_setpoint_normalized != rhs->forward_speed_setpoint_normalized) {
    return false;
  }
  // yaw_rate_setpoint
  if (lhs->yaw_rate_setpoint != rhs->yaw_rate_setpoint) {
    return false;
  }
  // yaw_rate_setpoint_normalized
  if (lhs->yaw_rate_setpoint_normalized != rhs->yaw_rate_setpoint_normalized) {
    return false;
  }
  // yaw_setpoint
  if (lhs->yaw_setpoint != rhs->yaw_setpoint) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__RoverDifferentialSetpoint__copy(
  const px4_msgs__msg__RoverDifferentialSetpoint * input,
  px4_msgs__msg__RoverDifferentialSetpoint * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // forward_speed_setpoint
  output->forward_speed_setpoint = input->forward_speed_setpoint;
  // forward_speed_setpoint_normalized
  output->forward_speed_setpoint_normalized = input->forward_speed_setpoint_normalized;
  // yaw_rate_setpoint
  output->yaw_rate_setpoint = input->yaw_rate_setpoint;
  // yaw_rate_setpoint_normalized
  output->yaw_rate_setpoint_normalized = input->yaw_rate_setpoint_normalized;
  // yaw_setpoint
  output->yaw_setpoint = input->yaw_setpoint;
  return true;
}

px4_msgs__msg__RoverDifferentialSetpoint *
px4_msgs__msg__RoverDifferentialSetpoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RoverDifferentialSetpoint * msg = (px4_msgs__msg__RoverDifferentialSetpoint *)allocator.allocate(sizeof(px4_msgs__msg__RoverDifferentialSetpoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__RoverDifferentialSetpoint));
  bool success = px4_msgs__msg__RoverDifferentialSetpoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__RoverDifferentialSetpoint__destroy(px4_msgs__msg__RoverDifferentialSetpoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__RoverDifferentialSetpoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__RoverDifferentialSetpoint__Sequence__init(px4_msgs__msg__RoverDifferentialSetpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RoverDifferentialSetpoint * data = NULL;

  if (size) {
    data = (px4_msgs__msg__RoverDifferentialSetpoint *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__RoverDifferentialSetpoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__RoverDifferentialSetpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__RoverDifferentialSetpoint__fini(&data[i - 1]);
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
px4_msgs__msg__RoverDifferentialSetpoint__Sequence__fini(px4_msgs__msg__RoverDifferentialSetpoint__Sequence * array)
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
      px4_msgs__msg__RoverDifferentialSetpoint__fini(&array->data[i]);
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

px4_msgs__msg__RoverDifferentialSetpoint__Sequence *
px4_msgs__msg__RoverDifferentialSetpoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RoverDifferentialSetpoint__Sequence * array = (px4_msgs__msg__RoverDifferentialSetpoint__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__RoverDifferentialSetpoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__RoverDifferentialSetpoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__RoverDifferentialSetpoint__Sequence__destroy(px4_msgs__msg__RoverDifferentialSetpoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__RoverDifferentialSetpoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__RoverDifferentialSetpoint__Sequence__are_equal(const px4_msgs__msg__RoverDifferentialSetpoint__Sequence * lhs, const px4_msgs__msg__RoverDifferentialSetpoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__RoverDifferentialSetpoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RoverDifferentialSetpoint__Sequence__copy(
  const px4_msgs__msg__RoverDifferentialSetpoint__Sequence * input,
  px4_msgs__msg__RoverDifferentialSetpoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__RoverDifferentialSetpoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__RoverDifferentialSetpoint * data =
      (px4_msgs__msg__RoverDifferentialSetpoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__RoverDifferentialSetpoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__RoverDifferentialSetpoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__RoverDifferentialSetpoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
