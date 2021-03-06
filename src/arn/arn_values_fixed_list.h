/*
 * Copyright 2018-2019 Mercedes Catherine Salazar
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * src/arn/arn_values_fixed_list.h: Amara application run time values
 * fixed list. A fixed list is like a simple list, but the pointer to it
 * stays constant over time from construction until destruction.
 */

#ifndef __AMARA__APPLICATIONS_RUNNER__VALUES_FIXED_LIST__H__
#define __AMARA__APPLICATIONS_RUNNER__VALUES_FIXED_LIST__H__

/*   For `rtg_where_value_bindings_simple_list`. */
#include "../rtg/rtg_where_value_bindings_simple_list.h"

/*   For `arn_value.h`. */
#include "arn_value.h"

typedef struct arn_values_fixed_list {
	arn_value * first;
	struct arn_values_fixed_list * next;
} arn_values_fixed_list
;

arn_values_fixed_list *
arn_values_fixed_list_default_constructor(void)
__attribute__((warn_unused_result))
;

void
arn_values_fixed_list_destructor(arn_values_fixed_list * values)
;

/**  Transformation constructor. */
arn_values_fixed_list *
arn_values_fixed_list_out_of_rtg_where_value_bindings_simple_list(
		const rtg_where_value_bindings_simple_list * values)
__attribute__((warn_unused_result))
;

/**  FIXME should return at the very least a boolean representing that
 * the system hasn't run out of memory (and so the operation was
 * successful). */
void
arn_values_fixed_list_push_front(
		arn_values_fixed_list * values, const arn_value * value)
;

arn_value *
arn_values_fixed_list_find_value_by_name(
		const arn_values_fixed_list * values,
		const amara_string * value_name)
__attribute__((warn_unused_result))
;

/**  Pre: the value is not assigned (type not
 * `ARN_VALUE_TYPE_ASSIGNED_NATURAL`).
 *   Pre: TODO Is the value known to be added to the list, or not? */
void
arn_values_fixed_list_assign_natural_out_of_unsigned_short(
		arn_values_fixed_list * values,
		const amara_string * value_name,
		const unsigned short unsigned_short)
;

#endif
