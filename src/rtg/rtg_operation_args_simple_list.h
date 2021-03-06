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
 * src/rtg/rtg_operation_args_simple_list.h: Amara runtime graph
 * application function operation arguments simple list.
 */

#ifndef __AMARA__RUN_TIME_GRAPH__OPERATION_ARGS_SIMPLE_LIST__H__
#define __AMARA__RUN_TIME_GRAPH__OPERATION_ARGS_SIMPLE_LIST__H__

/*   For `stt_operation_args_simple_list`. */
#include "../stt/stt_operation_args_simple_list.h"

/*   For `rtg_operation_arg`. */
#include "rtg_operation_arg.h"

typedef struct rtg_operation_args_simple_list {

	struct rtg_operation_arg * first;

	struct rtg_operation_args_simple_list * next;
} rtg_operation_args_simple_list
;

rtg_operation_args_simple_list *
rtg_operation_args_simple_list_default_constructor(void)
__attribute__((warn_unused_result))
;

rtg_operation_args_simple_list *
rtg_operation_args_simple_list_copy_constructor(
		const rtg_operation_args_simple_list * operation_args)
__attribute__((warn_unused_result))
;

void
rtg_operation_args_simple_list_destructor(
		rtg_operation_args_simple_list * operation_args)
;

rtg_operation_args_simple_list *
rtg_operation_args_simple_list_push_front(
		rtg_operation_args_simple_list * operation_args,
		const struct rtg_operation_arg * operation_arg)
__attribute__((warn_unused_result))
;

unsigned char
rtg_operation_args_simple_list_length(
		const rtg_operation_args_simple_list * operation_args)
__attribute__((warn_unused_result))
;

#define RTG_OPERATION_ARGS_SIMPLE_LIST_OUT_OF_STT_OPERATION_ARGS_SIMPLE_LIST_RET_STATUS_INVALID 0x00
#define RTG_OPERATION_ARGS_SIMPLE_LIST_OUT_OF_STT_OPERATION_ARGS_SIMPLE_LIST_RET_STATUS_ERROR_UNABLE_TO_RESOLVE_AT_LEAST_ONE_IDENTIFIER 0x0E
#define RTG_OPERATION_ARGS_SIMPLE_LIST_OUT_OF_STT_OPERATION_ARGS_SIMPLE_LIST_RET_STATUS_ERROR_UNSPECIFIC 0x0F
#define RTG_OPERATION_ARGS_SIMPLE_LIST_OUT_OF_STT_OPERATION_ARGS_SIMPLE_LIST_RET_STATUS_SUCCESS 0xFF

typedef struct rtg_operation_args_simple_list_out_of_stt_operation_args_simple_list_ret {

	unsigned char status;

	amara_strings_simple_list * error_messages;

	rtg_operation_args_simple_list * operation_args;
} rtg_operation_args_simple_list_out_of_stt_operation_args_simple_list_ret
;

void
rtg_operation_args_simple_list_out_of_stt_operation_args_simple_list_ret_destructor(
		rtg_operation_args_simple_list_out_of_stt_operation_args_simple_list_ret * rtg_operation_args_simple_list_out_of_stt_operation_args_simple_list_ret_)
;

rtg_operation_args_simple_list_out_of_stt_operation_args_simple_list_ret *
rtg_operation_args_simple_list_out_of_stt_operation_args_simple_list(
		const stt_operation_args_simple_list * operation_args,
		const stt_operation_type operation_type,
		const struct stt_where_value_bindings_simple_list * function_where_bindings)
__attribute__((warn_unused_result))
;

#endif
