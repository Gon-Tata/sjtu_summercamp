// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from originbot_msgs:msg/OriginbotStatus.idl
// generated code does not contain a copyright notice
#include "originbot_msgs/msg/detail/originbot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
originbot_msgs__msg__OriginbotStatus__init(originbot_msgs__msg__OriginbotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // battery_voltage
  // buzzer_on
  // led_on
  return true;
}

void
originbot_msgs__msg__OriginbotStatus__fini(originbot_msgs__msg__OriginbotStatus * msg)
{
  if (!msg) {
    return;
  }
  // battery_voltage
  // buzzer_on
  // led_on
}

bool
originbot_msgs__msg__OriginbotStatus__are_equal(const originbot_msgs__msg__OriginbotStatus * lhs, const originbot_msgs__msg__OriginbotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // buzzer_on
  if (lhs->buzzer_on != rhs->buzzer_on) {
    return false;
  }
  // led_on
  if (lhs->led_on != rhs->led_on) {
    return false;
  }
  return true;
}

bool
originbot_msgs__msg__OriginbotStatus__copy(
  const originbot_msgs__msg__OriginbotStatus * input,
  originbot_msgs__msg__OriginbotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // buzzer_on
  output->buzzer_on = input->buzzer_on;
  // led_on
  output->led_on = input->led_on;
  return true;
}

originbot_msgs__msg__OriginbotStatus *
originbot_msgs__msg__OriginbotStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  originbot_msgs__msg__OriginbotStatus * msg = (originbot_msgs__msg__OriginbotStatus *)allocator.allocate(sizeof(originbot_msgs__msg__OriginbotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(originbot_msgs__msg__OriginbotStatus));
  bool success = originbot_msgs__msg__OriginbotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
originbot_msgs__msg__OriginbotStatus__destroy(originbot_msgs__msg__OriginbotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    originbot_msgs__msg__OriginbotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
originbot_msgs__msg__OriginbotStatus__Sequence__init(originbot_msgs__msg__OriginbotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  originbot_msgs__msg__OriginbotStatus * data = NULL;

  if (size) {
    data = (originbot_msgs__msg__OriginbotStatus *)allocator.zero_allocate(size, sizeof(originbot_msgs__msg__OriginbotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = originbot_msgs__msg__OriginbotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        originbot_msgs__msg__OriginbotStatus__fini(&data[i - 1]);
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
originbot_msgs__msg__OriginbotStatus__Sequence__fini(originbot_msgs__msg__OriginbotStatus__Sequence * array)
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
      originbot_msgs__msg__OriginbotStatus__fini(&array->data[i]);
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

originbot_msgs__msg__OriginbotStatus__Sequence *
originbot_msgs__msg__OriginbotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  originbot_msgs__msg__OriginbotStatus__Sequence * array = (originbot_msgs__msg__OriginbotStatus__Sequence *)allocator.allocate(sizeof(originbot_msgs__msg__OriginbotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = originbot_msgs__msg__OriginbotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
originbot_msgs__msg__OriginbotStatus__Sequence__destroy(originbot_msgs__msg__OriginbotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    originbot_msgs__msg__OriginbotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
originbot_msgs__msg__OriginbotStatus__Sequence__are_equal(const originbot_msgs__msg__OriginbotStatus__Sequence * lhs, const originbot_msgs__msg__OriginbotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!originbot_msgs__msg__OriginbotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
originbot_msgs__msg__OriginbotStatus__Sequence__copy(
  const originbot_msgs__msg__OriginbotStatus__Sequence * input,
  originbot_msgs__msg__OriginbotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(originbot_msgs__msg__OriginbotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    originbot_msgs__msg__OriginbotStatus * data =
      (originbot_msgs__msg__OriginbotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!originbot_msgs__msg__OriginbotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          originbot_msgs__msg__OriginbotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!originbot_msgs__msg__OriginbotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
