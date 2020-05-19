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
 * src/stt/stt_named_function_call.c: TODO
 */

/*   For `NULL`. */
#include <stdlib.h>

#include "../macros.h"

#include "../asr/assertion.h"

#include "../mmm/allocator.h"

#include "../stt/stt_node.h"

#include "stt_named_function_call.h"

/**  Warning: fields are returned unitialized. */
stt_named_function_call_pending_semantic_checks *
stt_named_function_call_pending_semantic_checks_default_constructor()
__amara__warn_unused_result__
;

stt_named_function_call_pending_semantic_checks *
stt_named_function_call_pending_semantic_checks_default_constructor()
{
	stt_named_function_call_pending_semantic_checks * returning_;

#if defined AMARA_USE_STD_C89
	returning_ = amara_malloc(sizeof(stt_named_function_call_pending_semantic_checks));
#elif defined AMARA_USE_STD_CXX98
	returning_ = (stt_named_function_call *) amara_malloc(sizeof(stt_named_function_call_pending_semantic_checks));
#else
	PREPROCESSOR_ASSERT(AMARA_BOOLEAN_FALSE, stt_named_function_call);
#endif
	forced_assertion(returning_ != NULL);

	return returning_;
}

stt_named_function_call *
stt_named_function_call_copy_constructor(
		const stt_named_function_call * named_function_call)
{
	stt_named_function_call * returning_;

	forced_assertion(named_function_call != NULL);
#ifndef NDEBUG
	assertion(named_function_call->function_name_identifier_ != NULL);
	stt_node_assertion_clean_identifier_node(named_function_call->function_name_identifier_);
	assertion(named_function_call->call_arguments_ != NULL);
	stt_node_assertion_clean_named_function_call_arguments_list_node(named_function_call->call_arguments_);
#endif

#if defined AMARA_USE_STD_C89
	returning_ = amara_malloc(sizeof(stt_named_function_call));
#elif defined AMARA_USE_STD_CXX98
	returning_ = (stt_named_function_call *) amara_malloc(sizeof(stt_named_function_call));
#else
	PREPROCESSOR_ASSERT(AMARA_BOOLEAN_FALSE, stt_named_function_call);
#endif
	forced_assertion(returning_ != NULL);

	returning_->function_name_identifier_ = stt_node_copy_constructor(named_function_call->function_name_identifier_);
	forced_assertion(returning_->function_name_identifier_ != NULL);

	returning_->call_arguments_ = stt_node_copy_constructor(named_function_call->call_arguments_);
	forced_assertion(returning_->call_arguments_ != NULL);

	returning_->pending_semantic_checks_ = stt_named_function_call_pending_semantic_checks_default_constructor();
	forced_assertion(returning_->pending_semantic_checks_ != NULL);

	returning_->pending_semantic_checks_->called_function_has_no_return_value_ = AMARA_BOOLEAN_INVALID;

	return returning_;
}

stt_named_function_call *
stt_named_function_call_exhaustive_constructor(
		const struct stt_node * function_name_identifier,
		const struct stt_node * call_arguments)
{
	stt_named_function_call * returning_;

	forced_assertion(function_name_identifier != NULL);
	stt_node_forced_assertion_clean_identifier_node(function_name_identifier);
	forced_assertion(call_arguments != NULL);
	stt_node_forced_assertion_clean_named_function_call_arguments_list_node(call_arguments);

#if defined AMARA_USE_STD_C89
	returning_ = amara_malloc(sizeof(stt_named_function_call));
#elif defined AMARA_USE_STD_CXX98
	returning_ = (stt_named_function_call *) amara_malloc(sizeof(stt_named_function_call));
#else
	PREPROCESSOR_ASSERT(AMARA_BOOLEAN_FALSE, stt_named_function_call);
#endif
	forced_assertion(returning_ != NULL);

	returning_->function_name_identifier_ = stt_node_copy_constructor(function_name_identifier);
	forced_assertion(returning_->function_name_identifier_ != NULL);

	returning_->call_arguments_ = stt_node_copy_constructor(call_arguments);
	forced_assertion(returning_->call_arguments_ != NULL);

	returning_->pending_semantic_checks_ = stt_named_function_call_pending_semantic_checks_default_constructor();
	returning_->pending_semantic_checks_->called_function_has_no_return_value_ = AMARA_BOOLEAN_INVALID;

	return returning_;
}

void
stt_named_function_call_destructor(stt_named_function_call * nfc)
{
	forced_assertion(nfc != NULL);
	forced_assertion(nfc->function_name_identifier_ != NULL);
	stt_node_destructor(nfc->function_name_identifier_);
	forced_assertion(nfc->call_arguments_ != NULL);
	stt_node_destructor(nfc->call_arguments_);
	forced_assertion(nfc->pending_semantic_checks_ != NULL);
	stt_named_function_call_pending_semantic_checks_destructor(nfc->pending_semantic_checks_);
	amara_free(nfc);
}

amara_boolean
stt_named_function_call_equality(
		const stt_named_function_call * nfc0,
		const stt_named_function_call * nfc1)
{
	forced_assertion(nfc0 != NULL);
	forced_assertion(nfc1 != NULL);
	amara_boolean identifier_nodes_equal_;
	amara_boolean arguments_nodes_equal_;

	forced_assertion(nfc0->function_name_identifier_ != NULL);
	forced_assertion(nfc1->function_name_identifier_ != NULL);
	identifier_nodes_equal_ = stt_nodes_equality(nfc0->function_name_identifier_, nfc1->function_name_identifier_);
	if (AMARA_BOOLEAN_FALSE == identifier_nodes_equal_) {
		return AMARA_BOOLEAN_FALSE;
	}
	forced_assertion(nfc0->call_arguments_ != NULL);
	forced_assertion(nfc1->call_arguments_ != NULL);
	arguments_nodes_equal_ = stt_nodes_equality(nfc0->call_arguments_, nfc1->call_arguments_);
	if (AMARA_BOOLEAN_FALSE == arguments_nodes_equal_) {
		return AMARA_BOOLEAN_FALSE;
	}
	forced_assertion(nfc0->pending_semantic_checks_ != NULL);
	forced_assertion(nfc1->pending_semantic_checks_ != NULL);
	if (nfc0->pending_semantic_checks_->called_function_has_no_return_value_ != nfc1->pending_semantic_checks_->called_function_has_no_return_value_) {
		return AMARA_BOOLEAN_FALSE;
	}
	return AMARA_BOOLEAN_TRUE;
}

amara_boolean
stt_named_function_calls_equality(
		const stt_named_function_call * nfc0,
		const stt_named_function_call * nfc1)
{
	return stt_named_function_call_equality(nfc0, nfc1);
}
