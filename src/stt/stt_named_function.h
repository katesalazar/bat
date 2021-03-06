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
 * src/stt/stt_named_function.h: Amara syntax tree application named
 * function.
 */

#ifndef __AMARA__SYNTAX_TREE__NAMED_FUNCTION__H__
#define __AMARA__SYNTAX_TREE__NAMED_FUNCTION__H__

/*   For `amara_string`. */
/* #include "../cmn/amara_string.h" */

/*   For `stt_named_function`. */
#include "stt_forward_declarations.h"

/*   For `stt_named_function_subnode`. */
#include "stt_named_function_subnode.h"

/*   For `stt_operations_simple_list`. */
#include "stt_operations_simple_list.h"

/*   For `stt_where_value_bindings_simple_list`. */
#include "stt_where_value_bindings_simple_list.h"

/*   This is an enumeration, but it should probably become a mask. */

typedef unsigned char stt_named_function_type;

#define STT_NAMED_FUNCTION_TYPE_INVALID                0x49  /* '73': 'I'. */
#define STT_NAMED_FUNCTION_TYPE_PURE_FUNCTION          0x50  /* '80': 'P'. */
#define STT_NAMED_FUNCTION_TYPE_CLI_APP_FUNCTION       0x43  /* '67': 'C'. */
#define STT_NAMED_FUNCTION_TYPE_CLI_APP_NAMED_FUNCTION \
		STT_NAMED_FUNCTION_TYPE_CLI_APP_FUNCTION

stt_named_function *
stt_named_function_default_constructor(void)
__attribute__((warn_unused_result))
;

stt_named_function *
stt_named_function_exhaustive_constructor(
		stt_named_function_type type, const amara_string * name,
		const stt_operations_simple_list * operations,
		const stt_where_value_bindings_simple_list * where_value_bindings_)
__attribute__((warn_unused_result))
;

stt_named_function *
stt_named_function_copy_constructor(const stt_named_function * named_function)
__attribute__((warn_unused_result))
;

void
stt_named_function_destructor(stt_named_function * named_function)
;

void
stt_named_function_set_type(
		stt_named_function * named_function, unsigned char type)
;

void
stt_named_function_set_name(
		stt_named_function * named_function, const amara_string * name)
;

void
stt_named_function_set_operations(
		stt_named_function * named_function,
		const stt_operations_simple_list * operations)
;

void
stt_named_function_set_where_value_bindings(
		stt_named_function * named_function,
		const stt_where_value_bindings_simple_list * where_value_bindings)
;

stt_named_function *
stt_named_function_out_of_stt_named_function_subnode(
		const stt_named_function_subnode * named_function_subnode)
__attribute__((warn_unused_result))
;

#endif
