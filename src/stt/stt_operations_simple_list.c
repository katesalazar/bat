/*
 * Copyright 2018 Mercedes Catherine Salazar
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
 * src/stt/stt_operations_simple_list.c: Amara syntax tree application
 * function operations simple list.
 */

/*   For `int fprintf(FILE * restrict stream,
 * const char * restrict format, ...)`. */
#include <stdio.h>

/*   For `void * malloc(size_t size)`. */
#include <stdlib.h>

/*   For `void assertion(int expression)`. */
#include "../asr/assertion.h"

/*   For own definitions. */
#include "stt_operations_simple_list.h"

stt_operations_simple_list *
stt_operations_simple_list_default_constructor()
{
	stt_operations_simple_list * ret_;
	ret_ = malloc(sizeof(stt_operations_simple_list));
	ret_->first = NULL;
	ret_->next = NULL;
	return ret_;
}

stt_operations_simple_list *
stt_operations_simple_list_copy_constructor_inner(
		const stt_operations_simple_list * operations)
{
	stt_operations_simple_list * ret_;
	assertion(operations != NULL);
	ret_ = malloc(sizeof(stt_operations_simple_list));
	assertion(operations->first != NULL);
	ret_->first = stt_operation_copy_constructor(operations->first);
	if (operations->next == NULL) {
		ret_->next = NULL;
		return ret_;
	}
	ret_->next = stt_operations_simple_list_copy_constructor_inner(
			operations->next);
	return ret_;
}

stt_operations_simple_list *
stt_operations_simple_list_copy_constructor(
		const stt_operations_simple_list * operations)
{
	stt_operations_simple_list * ret_;
	assertion(operations != NULL);
	ret_ = malloc(sizeof(stt_operations_simple_list));
	if (operations->first == NULL) {
		ret_->first = NULL;
		assertion(operations->next == NULL);
		ret_->next = NULL;
		return ret_;
	}
	ret_->first = stt_operation_copy_constructor(operations->first);
	if (operations->next == NULL) {
		ret_->next = NULL;
		return ret_;
	}
	ret_->next = stt_operations_simple_list_copy_constructor_inner(
			operations->next);
	return ret_;
}

void
stt_operations_simple_list_destructor(stt_operations_simple_list * list)
{
	assertion(list != NULL);
	if (list->first == NULL) {
		assertion(list->next == NULL);
	} else {
		stt_operation_destructor(list->first);
		list->first = NULL;
		if (list->next != NULL) {
			stt_operations_simple_list_destructor(list->next);
		}
	}
	free(list);
}
