// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from originbot_msgs:srv/OriginbotLed.idl
// generated code does not contain a copyright notice
#include "originbot_msgs/srv/detail/originbot_led__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
originbot_msgs__srv__OriginbotLed_Request__init(originbot_msgs__srv__OriginbotLed_Request * msg)
{
  if (!msg) {
    return false;
  }
  // on
  return true;
}

void
originbot_msgs__srv__OriginbotLed_Request__fini(originbot_msgs__srv__OriginbotLed_Request * msg)
{
  if (!msg) {
    return;
  }
  // on
}

bool
originbot_msgs__srv__OriginbotLed_Request__are_equal(const originbot_msgs__srv__OriginbotLed_Request * lhs, const originbot_msgs__srv__OriginbotLed_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // on
  if (lhs->on != rhs->on) {
    return false;
  }
  return true;
}

bool
originbot_msgs__srv__OriginbotLed_Request__copy(
  const originbot_msgs__srv__OriginbotLed_Request * input,
  originbot_msgs__srv__OriginbotLed_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // on
  output->on = input->on;
  return true;
}

originbot_msgs__srv__OriginbotLed_Request *
originbot_msgs__srv__OriginbotLed_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  originbot_msgs__srv__OriginbotLed_Request * msg = (originbot_msgs__srv__OriginbotLed_Request *)allocator.allocate(sizeof(originbot_msgs__srv__OriginbotLed_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(originbot_msgs__srv__OriginbotLed_Request));
  bool success = originbot_msgs__srv__OriginbotLed_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
originbot_msgs__srv__OriginbotLed_Request__destroy(originbot_msgs__srv__OriginbotLed_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    originbot_msgs__srv__OriginbotLed_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
originbot_msgs__srv__OriginbotLed_Request__Sequence__init(originbot_msgs__srv__OriginbotLed_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  originbot_msgs__srv__OriginbotLed_Request * data = NULL;

  if (size) {
    data = (originbot_msgs__srv__OriginbotLed_Request *)allocator.zero_allocate(size, sizeof(originbot_msgs__srv__OriginbotLed_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = originbot_msgs__srv__OriginbotLed_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        originbot_msgs__srv__OriginbotLed_Request__fini(&data[i - 1]);
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
originbot_msgs__srv__OriginbotLed_Request__Sequence__fini(originbot_msgs__srv__OriginbotLed_Request__Sequence * array)
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
      originbot_msgs__srv__OriginbotLed_Request__fini(&array->data[i]);
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

originbot_msgs__srv__OriginbotLed_Request__Sequence *
originbot_msgs__srv__OriginbotLed_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  originbot_msgs__srv__OriginbotLed_Request__Sequence * array = (originbot_msgs__srv__OriginbotLed_Request__Sequence *)allocator.allocate(sizeof(originbot_msgs__srv__OriginbotLed_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = originbot_msgs__srv__OriginbotLed_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
originbot_msgs__srv__OriginbotLed_Request__Sequence__destroy(originbot_msgs__srv__OriginbotLed_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    originbot_msgs__srv__OriginbotLed_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
originbot_msgs__srv__OriginbotLed_Request__Sequence__are_equal(const originbot_msgs__srv__OriginbotLed_Request__Sequence * lhs, const originbot_msgs__srv__OriginbotLed_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!originbot_msgs__srv__OriginbotLed_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
originbot_msgs__srv__OriginbotLed_Request__Sequence__copy(
  const originbot_msgs__srv__OriginbotLed_Request__Sequence * input,
  originbot_msgs__srv__OriginbotLed_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(originbot_msgs__srv__OriginbotLed_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    originbot_msgs__srv__OriginbotLed_Request * data =
      (originbot_msgs__srv__OriginbotLed_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!originbot_msgs__srv__OriginbotLed_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          originbot_msgs__srv__OriginbotLed_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!originbot_msgs__srv__OriginbotLed_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
originbot_msgs__srv__OriginbotLed_Response__init(originbot_msgs__srv__OriginbotLed_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
originbot_msgs__srv__OriginbotLed_Response__fini(originbot_msgs__srv__OriginbotLed_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
originbot_msgs__srv__OriginbotLed_Response__are_equal(const originbot_msgs__srv__OriginbotLed_Response * lhs, const originbot_msgs__srv__OriginbotLed_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
originbot_msgs__srv__OriginbotLed_Response__copy(
  const originbot_msgs__srv__OriginbotLed_Response * input,
  originbot_msgs__srv__OriginbotLed_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

originbot_msgs__srv__OriginbotLed_Response *
originbot_msgs__srv__OriginbotLed_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  originbot_msgs__srv__OriginbotLed_Response * msg = (originbot_msgs__srv__OriginbotLed_Response *)allocator.allocate(sizeof(originbot_msgs__srv__OriginbotLed_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(originbot_msgs__srv__OriginbotLed_Response));
  bool success = originbot_msgs__srv__OriginbotLed_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
originbot_msgs__srv__OriginbotLed_Response__destroy(originbot_msgs__srv__OriginbotLed_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    originbot_msgs__srv__OriginbotLed_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
originbot_msgs__srv__OriginbotLed_Response__Sequence__init(originbot_msgs__srv__OriginbotLed_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  originbot_msgs__srv__OriginbotLed_Response * data = NULL;

  if (size) {
    data = (originbot_msgs__srv__OriginbotLed_Response *)allocator.zero_allocate(size, sizeof(originbot_msgs__srv__OriginbotLed_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = originbot_msgs__srv__OriginbotLed_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        originbot_msgs__srv__OriginbotLed_Response__fini(&data[i - 1]);
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
originbot_msgs__srv__OriginbotLed_Response__Sequence__fini(originbot_msgs__srv__OriginbotLed_Response__Sequence * array)
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
      originbot_msgs__srv__OriginbotLed_Response__fini(&array->data[i]);
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

originbot_msgs__srv__OriginbotLed_Response__Sequence *
originbot_msgs__srv__OriginbotLed_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  originbot_msgs__srv__OriginbotLed_Response__Sequence * array = (originbot_msgs__srv__OriginbotLed_Response__Sequence *)allocator.allocate(sizeof(originbot_msgs__srv__OriginbotLed_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = originbot_msgs__srv__OriginbotLed_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
originbot_msgs__srv__OriginbotLed_Response__Sequence__destroy(originbot_msgs__srv__OriginbotLed_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    originbot_msgs__srv__OriginbotLed_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
originbot_msgs__srv__OriginbotLed_Response__Sequence__are_equal(const originbot_msgs__srv__OriginbotLed_Response__Sequence * lhs, const originbot_msgs__srv__OriginbotLed_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!originbot_msgs__srv__OriginbotLed_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
originbot_msgs__srv__OriginbotLed_Response__Sequence__copy(
  const originbot_msgs__srv__OriginbotLed_Response__Sequence * input,
  originbot_msgs__srv__OriginbotLed_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(originbot_msgs__srv__OriginbotLed_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    originbot_msgs__srv__OriginbotLed_Response * data =
      (originbot_msgs__srv__OriginbotLed_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!originbot_msgs__srv__OriginbotLed_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          originbot_msgs__srv__OriginbotLed_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!originbot_msgs__srv__OriginbotLed_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
