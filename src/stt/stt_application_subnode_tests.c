/*
 * Copyright 2018-2020 Mercedes Catherine Salazar
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
 * src/stt/stt_application_subnode_tests.c: Test the Amara syntax tree
 * application subnode.
 */

/*   For `void assertion(int expression)`. */
#include "../asr/assertion.h"

/*   For `stt_application_subnode`. */
#include "stt_application_subnode.h"

#include "stt_application_tests.h"

#include "stt_application_subnode_tests.h"

/*

stt_application_subnode *
stt_application_subnode_example_print_foo()
{
	stt_application_subnode * ret_;
	stt_application * application_;

	application_ = stt_application_example_print_foo();
	assertion(application_ != NULL);
	assert_expectations_on_stt_application_example_print_foo(application_);

	ret_ = stt_application_subnode_exhaustive_constructor(application_);

	return ret_;
}

*/

#ifndef NDEBUG

void
assert_expectations_on_stt_application_subnode_example_print_foo(
		const stt_application_subnode * subnode)
{
	amara_string * expected_application_name_;
	amara_string * expected_application_entry_point_function_name_;
	amara_boolean equality_;

	expected_application_name_ = amara_string_exhaustive_constructor(
			"cli_app_print_foo");
	assertion(expected_application_name_ != NULL);
	assertion(expected_application_name_->value_ != NULL);

	expected_application_entry_point_function_name_ =
			amara_string_exhaustive_constructor("print_foo");
	assertion(expected_application_entry_point_function_name_ != NULL);
	assertion(expected_application_entry_point_function_name_->value_ !=
			NULL);

	assertion(subnode != NULL);
	assertion(subnode->type_ ==
			STT_APPLICATION_SUBNODE_TYPE_CLI_APPLICATION);
	assertion(subnode->name_ != NULL);
	assertion(subnode->name_->value_ != NULL);
	equality_ = amara_string_equality(
			expected_application_name_, subnode->name_);
	assertion(equality_ == AMARA_BOOLEAN_TRUE);
	assertion(subnode->entry_point_function_name_ != NULL);
	assertion(subnode->entry_point_function_name_->value_ != NULL);
	equality_ = amara_string_equality(
			expected_application_entry_point_function_name_,
			subnode->entry_point_function_name_);
	assertion(equality_ == AMARA_BOOLEAN_TRUE);

	amara_string_destructor(expected_application_name_);
	amara_string_destructor(
			expected_application_entry_point_function_name_);
}

#endif

void
stt_application_subnode_construct_and_destruct_test_0()
{
	stt_application_subnode * stt_application_subnode_;
	stt_application_subnode_ =
			stt_application_subnode_default_constructor();
	assertion(stt_application_subnode_ != NULL);
	assertion(stt_application_subnode_->type_ ==
			STT_APPLICATION_SUBNODE_TYPE_INVALID);
	assertion(stt_application_subnode_->name_ == NULL);
	assertion(stt_application_subnode_->entry_point_function_name_ ==
			NULL);
	stt_application_subnode_destructor(stt_application_subnode_);
}

void
stt_application_subnode_construct_and_destruct_test_1()
{
	stt_application_subnode * application_subnode_zero_;
	stt_application_subnode * application_subnode_one_;
	amara_string * application_name_;
	amara_string * application_entry_point_function_name_;

	application_subnode_zero_ =
			stt_application_subnode_default_constructor();
	forced_assertion(application_subnode_zero_ != NULL);
#ifndef NDEBUG
	assertion(application_subnode_zero_->type_ ==
			STT_APPLICATION_SUBNODE_TYPE_INVALID);
	assertion(application_subnode_zero_->name_ == NULL);
	assertion(application_subnode_zero_->entry_point_function_name_ ==
			NULL);
#endif

	application_name_ = amara_string_exhaustive_constructor("foo");
	forced_assertion(application_name_ != NULL);

	application_entry_point_function_name_ =
			amara_string_exhaustive_constructor("bar");
	forced_assertion(application_entry_point_function_name_ != NULL);

	stt_application_subnode_set_name(
			application_subnode_zero_, application_name_);
	forced_assertion(application_subnode_zero_->name_ != NULL);

	stt_application_subnode_set_entry_point_function_name(
			application_subnode_zero_,
			application_entry_point_function_name_);
	forced_assertion(application_subnode_zero_->entry_point_function_name_ !=
			NULL);

	stt_application_subnode_set_type(
			application_subnode_zero_,
			STT_APPLICATION_SUBNODE_TYPE_CLI_APPLICATION);

	application_subnode_one_ =
			stt_application_subnode_copy_constructor(
					application_subnode_zero_);
	forced_assertion(application_subnode_one_ != NULL);

	amara_string_destructor(application_entry_point_function_name_);
	amara_string_destructor(application_name_);
	stt_application_subnode_destructor(application_subnode_one_);
	stt_application_subnode_destructor(application_subnode_zero_);
}

void
stt_application_subnode_construct_and_destruct_tests()
{
	stt_application_subnode_construct_and_destruct_test_0();
	stt_application_subnode_construct_and_destruct_test_1();
}

tests_simple_list *
register_stt_application_subnode_construct_and_destruct_tests(
		tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_stt_application_subnode_construct_and_destruct_tests(
		tests_simple_list * tests)
{
	tests_simple_list_push_back(
			tests,
			& stt_application_subnode_construct_and_destruct_test_0);
	tests_simple_list_push_back(
			tests,
			& stt_application_subnode_construct_and_destruct_test_1);
	return tests;
}

void
stt_application_subnode_tests()
{
	stt_application_subnode_construct_and_destruct_tests();
}

tests_simple_list *
register_stt_application_subnode_tests(tests_simple_list * tests)
{
	tests_simple_list * returning_;

	returning_ = register_stt_application_subnode_construct_and_destruct_tests(
			tests);
	return returning_;
}
