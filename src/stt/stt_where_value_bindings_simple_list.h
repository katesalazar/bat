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
 * src/stt/stt_where_value_bindings_simple_list.h: Amara syntax tree
 * _where_ value bindings simple list.
 */

#ifndef __AMARA__SYNTAX_TREE__WHERE_VALUE_BINDINGS_SIMPLE_LIST__H__
#define __AMARA__SYNTAX_TREE__WHERE_VALUE_BINDINGS_SIMPLE_LIST__H__

#include "stt_where_value_binding.h"

typedef struct stt_where_value_bindings_simple_list {

	stt_where_value_binding * first;

	struct stt_where_value_bindings_simple_list * next;
} stt_where_value_bindings_simple_list
;

stt_where_value_bindings_simple_list *
stt_where_value_bindings_simple_list_default_constructor(void)
__attribute__((warn_unused_result))
;

stt_where_value_bindings_simple_list *
stt_where_value_bindings_simple_list_copy_constructor(
		const stt_where_value_bindings_simple_list * list)
__attribute__((warn_unused_result))
;

void
stt_where_value_bindings_simple_list_destructor(
		stt_where_value_bindings_simple_list * list)
;

stt_where_value_bindings_simple_list *
stt_where_value_bindings_simple_list_push_front(
		stt_where_value_bindings_simple_list * list,
		const stt_where_value_binding * addition)
__attribute__((warn_unused_result))
;

void
stt_where_value_bindings_simple_list_push_back(
		stt_where_value_bindings_simple_list * list,
		const stt_where_value_binding * addition)
;

/**  Returns a pointer **without** ownership, or `NULL` if not found. */
stt_where_value_binding *
stt_where_value_bindings_simple_list_find_by_value_name(
		const stt_where_value_bindings_simple_list * value_bindings_haystack,
		const amara_string * needle_value_name)
__attribute__((warn_unused_result))
;

amara_boolean
stt_where_value_bindings_simple_list_equality(
		const stt_where_value_bindings_simple_list * l0,
		const stt_where_value_bindings_simple_list * l1)
__attribute__((warn_unused_result))
;

amara_boolean
stt_where_value_bindings_simple_lists_equality(
		const stt_where_value_bindings_simple_list * l0,
		const stt_where_value_bindings_simple_list * l1)
__attribute__((warn_unused_result))
;

#endif
