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
 * src/stt/stt_string_literal_subnode.c: Amara syntax tree string
 * literal subnode.
 */

/*   For `amara_boolean` and its values. */
#include "../cmn/amara_boolean.h"

/*   For `void assertion(int expression)`. */
#include "../asr/assertion.h"

/*   For own definitions. */
#include "stt_string_literal_subnode.h"

stt_string_literal_subnode *
stt_string_literal_subnode_default_constructor()
{
	stt_string_literal_subnode * ret_;

	ret_ =
#ifdef AMARA_USE_STD_CXX98
			(stt_string_literal_subnode *)
#endif
			malloc(sizeof(stt_string_literal_subnode));
	forced_assertion(ret_ != NULL);

	ret_->string_literal_ = NULL;

	return ret_;
}

stt_string_literal_subnode *
stt_string_literal_subnode_copy_constructor(
		const stt_string_literal_subnode * subnode)
{
	stt_string_literal_subnode * ret_;

#ifndef NDEBUG
	assertion(subnode != NULL);
	assertion(subnode->string_literal_ != NULL);
	assertion(subnode->string_literal_->value_ != NULL);
#endif

	ret_ =
#ifdef AMARA_USE_STD_CXX98
			(stt_string_literal_subnode *)
#endif
			malloc(sizeof(stt_string_literal_subnode));
	forced_assertion(ret_ != NULL);

	ret_->string_literal_ = amara_string_copy_constructor(
			subnode->string_literal_);
	forced_assertion(ret_->string_literal_ != NULL);

	return ret_;
}

stt_string_literal_subnode *
stt_string_literal_subnode_exhaustive_constructor(
		const amara_string * string_literal)
{
	stt_string_literal_subnode * ret_;

	ret_ =
#ifdef AMARA_USE_STD_CXX98
			(stt_string_literal_subnode *)
#endif
			malloc(sizeof(stt_string_literal_subnode));
	forced_assertion(ret_ != NULL);

	ret_->string_literal_ = amara_string_copy_constructor(string_literal);
	forced_assertion(ret_->string_literal_ != NULL);

	return ret_;
}

void
stt_string_literal_subnode_destructor(stt_string_literal_subnode * subnode)
{
#ifndef NDEBUG
	assertion(subnode != NULL);
#endif
	if (subnode->string_literal_ != NULL) {
		amara_string_destructor(subnode->string_literal_);
	}
	free(subnode);
}

void
stt_string_literal_subnode_set_string_literal(
		stt_string_literal_subnode * subnode,
		const amara_string * string_literal)
{
	forced_assertion(subnode != NULL);
    if (subnode->string_literal_ != NULL) {
	forced_assertion(subnode->string_literal_ != NULL);
	amara_string_destructor(subnode->string_literal_);
    }

	if (string_literal != NULL) {

		subnode->string_literal_ =
				amara_string_copy_constructor(string_literal);
	} else {

		subnode->string_literal_ = NULL;
	}
}

amara_boolean
stt_string_literal_subnode_equality(
		const stt_string_literal_subnode * subnode0,
		const stt_string_literal_subnode * subnode1)
{
	assertion(subnode0 != NULL);
	assertion(subnode1 != NULL);
	if (subnode0->string_literal_ == NULL) {
		assertion(subnode1->string_literal_ == NULL);
		return AMARA_BOOLEAN_TRUE;
	} else {
		return amara_string_equality(
				subnode0->string_literal_,
				subnode1->string_literal_);
	}
}
