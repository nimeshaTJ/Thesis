// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pnp_msgs:action/PickAndPlace.idl
// generated code does not contain a copyright notice
#include "pnp_msgs/action/detail/pick_and_place__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pick_goal`
// Member `place_goal`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
pnp_msgs__action__PickAndPlace_Goal__init(pnp_msgs__action__PickAndPlace_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // pick_goal
  if (!geometry_msgs__msg__Pose__init(&msg->pick_goal)) {
    pnp_msgs__action__PickAndPlace_Goal__fini(msg);
    return false;
  }
  // place_goal
  if (!geometry_msgs__msg__Pose__init(&msg->place_goal)) {
    pnp_msgs__action__PickAndPlace_Goal__fini(msg);
    return false;
  }
  return true;
}

void
pnp_msgs__action__PickAndPlace_Goal__fini(pnp_msgs__action__PickAndPlace_Goal * msg)
{
  if (!msg) {
    return;
  }
  // pick_goal
  geometry_msgs__msg__Pose__fini(&msg->pick_goal);
  // place_goal
  geometry_msgs__msg__Pose__fini(&msg->place_goal);
}

bool
pnp_msgs__action__PickAndPlace_Goal__are_equal(const pnp_msgs__action__PickAndPlace_Goal * lhs, const pnp_msgs__action__PickAndPlace_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pick_goal
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pick_goal), &(rhs->pick_goal)))
  {
    return false;
  }
  // place_goal
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->place_goal), &(rhs->place_goal)))
  {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_Goal__copy(
  const pnp_msgs__action__PickAndPlace_Goal * input,
  pnp_msgs__action__PickAndPlace_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // pick_goal
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pick_goal), &(output->pick_goal)))
  {
    return false;
  }
  // place_goal
  if (!geometry_msgs__msg__Pose__copy(
      &(input->place_goal), &(output->place_goal)))
  {
    return false;
  }
  return true;
}

pnp_msgs__action__PickAndPlace_Goal *
pnp_msgs__action__PickAndPlace_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_Goal * msg = (pnp_msgs__action__PickAndPlace_Goal *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__PickAndPlace_Goal));
  bool success = pnp_msgs__action__PickAndPlace_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__PickAndPlace_Goal__destroy(pnp_msgs__action__PickAndPlace_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pnp_msgs__action__PickAndPlace_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pnp_msgs__action__PickAndPlace_Goal__Sequence__init(pnp_msgs__action__PickAndPlace_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_Goal * data = NULL;

  if (size) {
    data = (pnp_msgs__action__PickAndPlace_Goal *)allocator.zero_allocate(size, sizeof(pnp_msgs__action__PickAndPlace_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__PickAndPlace_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__PickAndPlace_Goal__fini(&data[i - 1]);
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
pnp_msgs__action__PickAndPlace_Goal__Sequence__fini(pnp_msgs__action__PickAndPlace_Goal__Sequence * array)
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
      pnp_msgs__action__PickAndPlace_Goal__fini(&array->data[i]);
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

pnp_msgs__action__PickAndPlace_Goal__Sequence *
pnp_msgs__action__PickAndPlace_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_Goal__Sequence * array = (pnp_msgs__action__PickAndPlace_Goal__Sequence *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__PickAndPlace_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__PickAndPlace_Goal__Sequence__destroy(pnp_msgs__action__PickAndPlace_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pnp_msgs__action__PickAndPlace_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pnp_msgs__action__PickAndPlace_Goal__Sequence__are_equal(const pnp_msgs__action__PickAndPlace_Goal__Sequence * lhs, const pnp_msgs__action__PickAndPlace_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_Goal__Sequence__copy(
  const pnp_msgs__action__PickAndPlace_Goal__Sequence * input,
  pnp_msgs__action__PickAndPlace_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__PickAndPlace_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pnp_msgs__action__PickAndPlace_Goal * data =
      (pnp_msgs__action__PickAndPlace_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__PickAndPlace_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__PickAndPlace_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pnp_result`
#include "rosidl_runtime_c/string_functions.h"

bool
pnp_msgs__action__PickAndPlace_Result__init(pnp_msgs__action__PickAndPlace_Result * msg)
{
  if (!msg) {
    return false;
  }
  // pnp_result
  if (!rosidl_runtime_c__String__init(&msg->pnp_result)) {
    pnp_msgs__action__PickAndPlace_Result__fini(msg);
    return false;
  }
  return true;
}

void
pnp_msgs__action__PickAndPlace_Result__fini(pnp_msgs__action__PickAndPlace_Result * msg)
{
  if (!msg) {
    return;
  }
  // pnp_result
  rosidl_runtime_c__String__fini(&msg->pnp_result);
}

bool
pnp_msgs__action__PickAndPlace_Result__are_equal(const pnp_msgs__action__PickAndPlace_Result * lhs, const pnp_msgs__action__PickAndPlace_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pnp_result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pnp_result), &(rhs->pnp_result)))
  {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_Result__copy(
  const pnp_msgs__action__PickAndPlace_Result * input,
  pnp_msgs__action__PickAndPlace_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // pnp_result
  if (!rosidl_runtime_c__String__copy(
      &(input->pnp_result), &(output->pnp_result)))
  {
    return false;
  }
  return true;
}

pnp_msgs__action__PickAndPlace_Result *
pnp_msgs__action__PickAndPlace_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_Result * msg = (pnp_msgs__action__PickAndPlace_Result *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__PickAndPlace_Result));
  bool success = pnp_msgs__action__PickAndPlace_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__PickAndPlace_Result__destroy(pnp_msgs__action__PickAndPlace_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pnp_msgs__action__PickAndPlace_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pnp_msgs__action__PickAndPlace_Result__Sequence__init(pnp_msgs__action__PickAndPlace_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_Result * data = NULL;

  if (size) {
    data = (pnp_msgs__action__PickAndPlace_Result *)allocator.zero_allocate(size, sizeof(pnp_msgs__action__PickAndPlace_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__PickAndPlace_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__PickAndPlace_Result__fini(&data[i - 1]);
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
pnp_msgs__action__PickAndPlace_Result__Sequence__fini(pnp_msgs__action__PickAndPlace_Result__Sequence * array)
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
      pnp_msgs__action__PickAndPlace_Result__fini(&array->data[i]);
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

pnp_msgs__action__PickAndPlace_Result__Sequence *
pnp_msgs__action__PickAndPlace_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_Result__Sequence * array = (pnp_msgs__action__PickAndPlace_Result__Sequence *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__PickAndPlace_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__PickAndPlace_Result__Sequence__destroy(pnp_msgs__action__PickAndPlace_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pnp_msgs__action__PickAndPlace_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pnp_msgs__action__PickAndPlace_Result__Sequence__are_equal(const pnp_msgs__action__PickAndPlace_Result__Sequence * lhs, const pnp_msgs__action__PickAndPlace_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_Result__Sequence__copy(
  const pnp_msgs__action__PickAndPlace_Result__Sequence * input,
  pnp_msgs__action__PickAndPlace_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__PickAndPlace_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pnp_msgs__action__PickAndPlace_Result * data =
      (pnp_msgs__action__PickAndPlace_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__PickAndPlace_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__PickAndPlace_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pnp_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
pnp_msgs__action__PickAndPlace_Feedback__init(pnp_msgs__action__PickAndPlace_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // pnp_message
  if (!rosidl_runtime_c__String__init(&msg->pnp_message)) {
    pnp_msgs__action__PickAndPlace_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
pnp_msgs__action__PickAndPlace_Feedback__fini(pnp_msgs__action__PickAndPlace_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // pnp_message
  rosidl_runtime_c__String__fini(&msg->pnp_message);
}

bool
pnp_msgs__action__PickAndPlace_Feedback__are_equal(const pnp_msgs__action__PickAndPlace_Feedback * lhs, const pnp_msgs__action__PickAndPlace_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pnp_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pnp_message), &(rhs->pnp_message)))
  {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_Feedback__copy(
  const pnp_msgs__action__PickAndPlace_Feedback * input,
  pnp_msgs__action__PickAndPlace_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // pnp_message
  if (!rosidl_runtime_c__String__copy(
      &(input->pnp_message), &(output->pnp_message)))
  {
    return false;
  }
  return true;
}

pnp_msgs__action__PickAndPlace_Feedback *
pnp_msgs__action__PickAndPlace_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_Feedback * msg = (pnp_msgs__action__PickAndPlace_Feedback *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__PickAndPlace_Feedback));
  bool success = pnp_msgs__action__PickAndPlace_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__PickAndPlace_Feedback__destroy(pnp_msgs__action__PickAndPlace_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pnp_msgs__action__PickAndPlace_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pnp_msgs__action__PickAndPlace_Feedback__Sequence__init(pnp_msgs__action__PickAndPlace_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_Feedback * data = NULL;

  if (size) {
    data = (pnp_msgs__action__PickAndPlace_Feedback *)allocator.zero_allocate(size, sizeof(pnp_msgs__action__PickAndPlace_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__PickAndPlace_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__PickAndPlace_Feedback__fini(&data[i - 1]);
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
pnp_msgs__action__PickAndPlace_Feedback__Sequence__fini(pnp_msgs__action__PickAndPlace_Feedback__Sequence * array)
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
      pnp_msgs__action__PickAndPlace_Feedback__fini(&array->data[i]);
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

pnp_msgs__action__PickAndPlace_Feedback__Sequence *
pnp_msgs__action__PickAndPlace_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_Feedback__Sequence * array = (pnp_msgs__action__PickAndPlace_Feedback__Sequence *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__PickAndPlace_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__PickAndPlace_Feedback__Sequence__destroy(pnp_msgs__action__PickAndPlace_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pnp_msgs__action__PickAndPlace_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pnp_msgs__action__PickAndPlace_Feedback__Sequence__are_equal(const pnp_msgs__action__PickAndPlace_Feedback__Sequence * lhs, const pnp_msgs__action__PickAndPlace_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_Feedback__Sequence__copy(
  const pnp_msgs__action__PickAndPlace_Feedback__Sequence * input,
  pnp_msgs__action__PickAndPlace_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__PickAndPlace_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pnp_msgs__action__PickAndPlace_Feedback * data =
      (pnp_msgs__action__PickAndPlace_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__PickAndPlace_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__PickAndPlace_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__functions.h"

bool
pnp_msgs__action__PickAndPlace_SendGoal_Request__init(pnp_msgs__action__PickAndPlace_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pnp_msgs__action__PickAndPlace_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!pnp_msgs__action__PickAndPlace_Goal__init(&msg->goal)) {
    pnp_msgs__action__PickAndPlace_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
pnp_msgs__action__PickAndPlace_SendGoal_Request__fini(pnp_msgs__action__PickAndPlace_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  pnp_msgs__action__PickAndPlace_Goal__fini(&msg->goal);
}

bool
pnp_msgs__action__PickAndPlace_SendGoal_Request__are_equal(const pnp_msgs__action__PickAndPlace_SendGoal_Request * lhs, const pnp_msgs__action__PickAndPlace_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!pnp_msgs__action__PickAndPlace_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_SendGoal_Request__copy(
  const pnp_msgs__action__PickAndPlace_SendGoal_Request * input,
  pnp_msgs__action__PickAndPlace_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!pnp_msgs__action__PickAndPlace_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

pnp_msgs__action__PickAndPlace_SendGoal_Request *
pnp_msgs__action__PickAndPlace_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_SendGoal_Request * msg = (pnp_msgs__action__PickAndPlace_SendGoal_Request *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__PickAndPlace_SendGoal_Request));
  bool success = pnp_msgs__action__PickAndPlace_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__PickAndPlace_SendGoal_Request__destroy(pnp_msgs__action__PickAndPlace_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pnp_msgs__action__PickAndPlace_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence__init(pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_SendGoal_Request * data = NULL;

  if (size) {
    data = (pnp_msgs__action__PickAndPlace_SendGoal_Request *)allocator.zero_allocate(size, sizeof(pnp_msgs__action__PickAndPlace_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__PickAndPlace_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__PickAndPlace_SendGoal_Request__fini(&data[i - 1]);
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
pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence__fini(pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence * array)
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
      pnp_msgs__action__PickAndPlace_SendGoal_Request__fini(&array->data[i]);
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

pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence *
pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence * array = (pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence__destroy(pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence__are_equal(const pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence * lhs, const pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence__copy(
  const pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence * input,
  pnp_msgs__action__PickAndPlace_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__PickAndPlace_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pnp_msgs__action__PickAndPlace_SendGoal_Request * data =
      (pnp_msgs__action__PickAndPlace_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__PickAndPlace_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__PickAndPlace_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
pnp_msgs__action__PickAndPlace_SendGoal_Response__init(pnp_msgs__action__PickAndPlace_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    pnp_msgs__action__PickAndPlace_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
pnp_msgs__action__PickAndPlace_SendGoal_Response__fini(pnp_msgs__action__PickAndPlace_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
pnp_msgs__action__PickAndPlace_SendGoal_Response__are_equal(const pnp_msgs__action__PickAndPlace_SendGoal_Response * lhs, const pnp_msgs__action__PickAndPlace_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_SendGoal_Response__copy(
  const pnp_msgs__action__PickAndPlace_SendGoal_Response * input,
  pnp_msgs__action__PickAndPlace_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

pnp_msgs__action__PickAndPlace_SendGoal_Response *
pnp_msgs__action__PickAndPlace_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_SendGoal_Response * msg = (pnp_msgs__action__PickAndPlace_SendGoal_Response *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__PickAndPlace_SendGoal_Response));
  bool success = pnp_msgs__action__PickAndPlace_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__PickAndPlace_SendGoal_Response__destroy(pnp_msgs__action__PickAndPlace_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pnp_msgs__action__PickAndPlace_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence__init(pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_SendGoal_Response * data = NULL;

  if (size) {
    data = (pnp_msgs__action__PickAndPlace_SendGoal_Response *)allocator.zero_allocate(size, sizeof(pnp_msgs__action__PickAndPlace_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__PickAndPlace_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__PickAndPlace_SendGoal_Response__fini(&data[i - 1]);
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
pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence__fini(pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence * array)
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
      pnp_msgs__action__PickAndPlace_SendGoal_Response__fini(&array->data[i]);
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

pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence *
pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence * array = (pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence__destroy(pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence__are_equal(const pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence * lhs, const pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence__copy(
  const pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence * input,
  pnp_msgs__action__PickAndPlace_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__PickAndPlace_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pnp_msgs__action__PickAndPlace_SendGoal_Response * data =
      (pnp_msgs__action__PickAndPlace_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__PickAndPlace_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__PickAndPlace_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
pnp_msgs__action__PickAndPlace_GetResult_Request__init(pnp_msgs__action__PickAndPlace_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pnp_msgs__action__PickAndPlace_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
pnp_msgs__action__PickAndPlace_GetResult_Request__fini(pnp_msgs__action__PickAndPlace_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
pnp_msgs__action__PickAndPlace_GetResult_Request__are_equal(const pnp_msgs__action__PickAndPlace_GetResult_Request * lhs, const pnp_msgs__action__PickAndPlace_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_GetResult_Request__copy(
  const pnp_msgs__action__PickAndPlace_GetResult_Request * input,
  pnp_msgs__action__PickAndPlace_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

pnp_msgs__action__PickAndPlace_GetResult_Request *
pnp_msgs__action__PickAndPlace_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_GetResult_Request * msg = (pnp_msgs__action__PickAndPlace_GetResult_Request *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__PickAndPlace_GetResult_Request));
  bool success = pnp_msgs__action__PickAndPlace_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__PickAndPlace_GetResult_Request__destroy(pnp_msgs__action__PickAndPlace_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pnp_msgs__action__PickAndPlace_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence__init(pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_GetResult_Request * data = NULL;

  if (size) {
    data = (pnp_msgs__action__PickAndPlace_GetResult_Request *)allocator.zero_allocate(size, sizeof(pnp_msgs__action__PickAndPlace_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__PickAndPlace_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__PickAndPlace_GetResult_Request__fini(&data[i - 1]);
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
pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence__fini(pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence * array)
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
      pnp_msgs__action__PickAndPlace_GetResult_Request__fini(&array->data[i]);
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

pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence *
pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence * array = (pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence__destroy(pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence__are_equal(const pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence * lhs, const pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence__copy(
  const pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence * input,
  pnp_msgs__action__PickAndPlace_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__PickAndPlace_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pnp_msgs__action__PickAndPlace_GetResult_Request * data =
      (pnp_msgs__action__PickAndPlace_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__PickAndPlace_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__PickAndPlace_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__functions.h"

bool
pnp_msgs__action__PickAndPlace_GetResult_Response__init(pnp_msgs__action__PickAndPlace_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!pnp_msgs__action__PickAndPlace_Result__init(&msg->result)) {
    pnp_msgs__action__PickAndPlace_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
pnp_msgs__action__PickAndPlace_GetResult_Response__fini(pnp_msgs__action__PickAndPlace_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  pnp_msgs__action__PickAndPlace_Result__fini(&msg->result);
}

bool
pnp_msgs__action__PickAndPlace_GetResult_Response__are_equal(const pnp_msgs__action__PickAndPlace_GetResult_Response * lhs, const pnp_msgs__action__PickAndPlace_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!pnp_msgs__action__PickAndPlace_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_GetResult_Response__copy(
  const pnp_msgs__action__PickAndPlace_GetResult_Response * input,
  pnp_msgs__action__PickAndPlace_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!pnp_msgs__action__PickAndPlace_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

pnp_msgs__action__PickAndPlace_GetResult_Response *
pnp_msgs__action__PickAndPlace_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_GetResult_Response * msg = (pnp_msgs__action__PickAndPlace_GetResult_Response *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__PickAndPlace_GetResult_Response));
  bool success = pnp_msgs__action__PickAndPlace_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__PickAndPlace_GetResult_Response__destroy(pnp_msgs__action__PickAndPlace_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pnp_msgs__action__PickAndPlace_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence__init(pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_GetResult_Response * data = NULL;

  if (size) {
    data = (pnp_msgs__action__PickAndPlace_GetResult_Response *)allocator.zero_allocate(size, sizeof(pnp_msgs__action__PickAndPlace_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__PickAndPlace_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__PickAndPlace_GetResult_Response__fini(&data[i - 1]);
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
pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence__fini(pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence * array)
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
      pnp_msgs__action__PickAndPlace_GetResult_Response__fini(&array->data[i]);
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

pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence *
pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence * array = (pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence__destroy(pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence__are_equal(const pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence * lhs, const pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence__copy(
  const pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence * input,
  pnp_msgs__action__PickAndPlace_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__PickAndPlace_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pnp_msgs__action__PickAndPlace_GetResult_Response * data =
      (pnp_msgs__action__PickAndPlace_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__PickAndPlace_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__PickAndPlace_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__functions.h"

bool
pnp_msgs__action__PickAndPlace_FeedbackMessage__init(pnp_msgs__action__PickAndPlace_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pnp_msgs__action__PickAndPlace_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!pnp_msgs__action__PickAndPlace_Feedback__init(&msg->feedback)) {
    pnp_msgs__action__PickAndPlace_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
pnp_msgs__action__PickAndPlace_FeedbackMessage__fini(pnp_msgs__action__PickAndPlace_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  pnp_msgs__action__PickAndPlace_Feedback__fini(&msg->feedback);
}

bool
pnp_msgs__action__PickAndPlace_FeedbackMessage__are_equal(const pnp_msgs__action__PickAndPlace_FeedbackMessage * lhs, const pnp_msgs__action__PickAndPlace_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!pnp_msgs__action__PickAndPlace_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_FeedbackMessage__copy(
  const pnp_msgs__action__PickAndPlace_FeedbackMessage * input,
  pnp_msgs__action__PickAndPlace_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!pnp_msgs__action__PickAndPlace_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

pnp_msgs__action__PickAndPlace_FeedbackMessage *
pnp_msgs__action__PickAndPlace_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_FeedbackMessage * msg = (pnp_msgs__action__PickAndPlace_FeedbackMessage *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__PickAndPlace_FeedbackMessage));
  bool success = pnp_msgs__action__PickAndPlace_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__PickAndPlace_FeedbackMessage__destroy(pnp_msgs__action__PickAndPlace_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pnp_msgs__action__PickAndPlace_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence__init(pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_FeedbackMessage * data = NULL;

  if (size) {
    data = (pnp_msgs__action__PickAndPlace_FeedbackMessage *)allocator.zero_allocate(size, sizeof(pnp_msgs__action__PickAndPlace_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__PickAndPlace_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__PickAndPlace_FeedbackMessage__fini(&data[i - 1]);
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
pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence__fini(pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence * array)
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
      pnp_msgs__action__PickAndPlace_FeedbackMessage__fini(&array->data[i]);
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

pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence *
pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence * array = (pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence *)allocator.allocate(sizeof(pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence__destroy(pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence__are_equal(const pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence * lhs, const pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence__copy(
  const pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence * input,
  pnp_msgs__action__PickAndPlace_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__PickAndPlace_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pnp_msgs__action__PickAndPlace_FeedbackMessage * data =
      (pnp_msgs__action__PickAndPlace_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__PickAndPlace_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__PickAndPlace_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pnp_msgs__action__PickAndPlace_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
