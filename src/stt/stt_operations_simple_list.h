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
 * src/stt/stt_operations_simple_list.h: Amara syntax tree application
 * function operations simple list.
 */

#ifndef __AMARA__SYNTAX_TREE__OPERATIONS_SIMPLE_LIST__H__
#define __AMARA__SYNTAX_TREE__OPERATIONS_SIMPLE_LIST__H__

#include "../definitions.h"

/*   For `stt_operation`. */
#include "stt_operation.h"

typedef struct stt_operations_simple_list {
	stt_operation * first;
	struct stt_operations_simple_list * next;
} stt_operations_simple_list;

stt_operations_simple_list *
stt_operations_simple_list_default_constructor(void)
__attribute__((warn_unused_result))
;

stt_operations_simple_list *
stt_operations_simple_list_copy_constructor(
		const stt_operations_simple_list * operations)
__attribute__((warn_unused_result))
;

void
stt_operations_simple_list_destructor(stt_operations_simple_list * list)
;

stt_operations_simple_list *
stt_operations_simple_list_push_front(
		stt_operations_simple_list * operations,
		const stt_operation * operation)
__attribute__((warn_unused_result))
;

void
stt_operations_simple_list_push_back(
		stt_operations_simple_list * operations,
		const stt_operation * operation)
;

amara_boolean
stt_operations_simple_list_equality(
		const stt_operations_simple_list * l0,
		const stt_operations_simple_list * l1)
__attribute__((warn_unused_result))
;

amara_boolean
stt_operations_simple_lists_equality(
		const stt_operations_simple_list * l0,
		const stt_operations_simple_list * l1)
__amara__warn_unused_result__
;

#endif
