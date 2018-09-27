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
 * src/stt/stt_execution_request_subnode_tests.c: Test the Amara syntax
 * tree application execution request subnode.
 */

/*   For `void assertion(int expression)`. */
#include "../asr/assertion.h"

/*   For `stt_execution_request_subnode`. */
#include "stt_execution_request_subnode.h"

void
stt_execution_request_subnode_construct_and_destruct_test_0()
{
	stt_execution_request_subnode * stt_execution_request_subnode_;
	stt_execution_request_subnode_ =
			stt_execution_request_subnode_default_constructor();
	assertion(stt_execution_request_subnode_ != NULL);
	assertion(stt_execution_request_subnode_->type_ ==
			STT_EXECUTION_REQUEST_SUBNODE_TYPE_INVALID);
	assertion(stt_execution_request_subnode_->application_name_ == NULL);
	stt_execution_request_subnode_destructor(
			stt_execution_request_subnode_);
}

void
stt_execution_request_subnode_construct_and_destruct_test_1()
{
	stt_execution_request_subnode * execution_request_subnode_zero_;
	stt_execution_request_subnode * execution_request_subnode_one_;
	execution_request_subnode_zero_ =
			stt_execution_request_subnode_default_constructor();
	assertion(execution_request_subnode_zero_ != NULL);
	assertion(execution_request_subnode_zero_->type_ ==
			STT_EXECUTION_REQUEST_SUBNODE_TYPE_INVALID);
	assertion(execution_request_subnode_zero_->application_name_ == NULL);
	execution_request_subnode_zero_->application_name_ =
			amara_string_exhaustive_constructor("foo");
	execution_request_subnode_zero_->type_ =
			STT_EXECUTION_REQUEST_SUBNODE_TYPE_RUN_CLI_APPLICATION;
	execution_request_subnode_one_ =
			stt_execution_request_subnode_copy_constructor(
					execution_request_subnode_zero_);
	assertion(execution_request_subnode_one_ != NULL);
	assertion(execution_request_subnode_one_->type_ !=
			STT_EXECUTION_REQUEST_SUBNODE_TYPE_INVALID);
	assertion(execution_request_subnode_one_->application_name_ != NULL);
	assertion(execution_request_subnode_one_->application_name_->value_ !=
			NULL);
	assertion(amara_string_equality(
			execution_request_subnode_one_->application_name_,
			amara_string_exhaustive_constructor("foo")));
	stt_execution_request_subnode_destructor(
			execution_request_subnode_one_);
	stt_execution_request_subnode_destructor(
			execution_request_subnode_zero_);
}

void
stt_execution_request_subnode_construct_and_destruct_tests()
{
	stt_execution_request_subnode_construct_and_destruct_test_0();
	stt_execution_request_subnode_construct_and_destruct_test_1();
}

void
stt_execution_request_subnode_tests()
{
	stt_execution_request_subnode_construct_and_destruct_tests();
}
