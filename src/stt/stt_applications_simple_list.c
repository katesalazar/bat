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
 * src/stt/stt_applications_simple_list.c: Amara syntax tree
 * applications simple list.
 */

/*   For `int fprintf(FILE * restrict stream,
 * const char * restrict format, ...)`. */
#include <stdio.h>

/*   For `void assertion(int expression)`. */
#include "../asr/assertion.h"

/*   For own definitions. */
#include "stt_applications_simple_list.h"

stt_applications_simple_list *
stt_applications_simple_list_copy_constructor_inner(
		stt_applications_simple_list * applications)
{
	stt_applications_simple_list * ret_;
	assertion(applications != NULL);
	ret_ = malloc(sizeof(stt_applications_simple_list));
	assertion(applications->first != NULL);
	ret_->first = stt_application_copy_constructor(applications->first);
	if (applications->next == NULL) {
		ret_->next = NULL;
		return ret_;
	}
	ret_->next = stt_applications_simple_list_copy_constructor(
			applications->next);
	return ret_;
}

stt_applications_simple_list *
stt_applications_simple_list_copy_constructor(
		stt_applications_simple_list * applications)
{
	stt_applications_simple_list * ret_;
	assertion(applications != NULL);
	ret_ = malloc(sizeof(stt_applications_simple_list));
	if (applications->first != NULL) {
		ret_->first = NULL;
		assertion(applications->next == NULL);
		ret_->next = NULL;
		return ret_;
	}
	ret_->first = stt_application_copy_constructor(applications->first);
	if (applications->next == NULL) {
		ret_->next = NULL;
		return ret_;
	}
	ret_->next = stt_applications_simple_list_copy_constructor_inner(
			applications->next);
	return ret_;
}

void
stt_applications_simple_list_destructor(
		stt_applications_simple_list * list)
{
	if (list->first == NULL) {
		assertion(list->next == NULL);
	} else {
		stt_application_destructor(list->first);
		stt_applications_simple_list_destructor(list->next);
	}
	free(list);
}

uint_fast8_t
stt_applications_simple_list_length(stt_applications_simple_list * list)
{
	uint_fast8_t returning_ = 0;
	while (list != NULL) {
		if (returning_ >= UINT8_MAX) {
			fprintf(stderr, "%s:%u (uint_fast8_t functions_list_length(functions_list *)): fatal\n",
					__FILE__, __LINE__);
			exit(EXIT_FAILURE);
		}
		list = list->next;
		returning_++;
	}
	return returning_;
}
