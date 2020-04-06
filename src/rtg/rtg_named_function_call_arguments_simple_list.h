/*
 * Copyright 2020 Mercedes Catherine Salazar
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
 * src/rtg/rtg_named_function_call_arguments_simple_list.h: Amara
 * runtime graph named function call arguments simple list.
 */

#ifndef __AMARA__RUN_TIME_GRAPH__NAMED_FUNCTION_CALL_ARGUMENTS_SIMPLE_LIST__H__
#define __AMARA__RUN_TIME_GRAPH__NAMED_FUNCTION_CALL_ARGUMENTS_SIMPLE_LIST__H__

#include "rtg_named_function_call_argument.h"

typedef struct rtg_named_function_call_arguments_simple_list {

	rtg_named_function_call_argument * first;

	struct rtg_named_function_call_arguments_simple_list * next;
} rtg_named_function_call_arguments_simple_list
;

#endif
