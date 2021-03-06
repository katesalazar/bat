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
 * src/stt/stt_condition_tests.h: Test the Amara syntax tree condition.
 */

/*   For `void assertion(int expression)`. */
#include "../asr/assertion.h"

/*   For `stt_expression * stt_expression_example_natural_zero()`. */
#include "stt_expression_tests.h"

/*   For owned functions prototypes. */
#include "stt_condition_tests.h"

stt_condition *
stt_condition_example_simple_lt_true_condition(void)
{
	stt_expression * left_hand_side_expression_;
	stt_expression * right_hand_side_expression_;
	stt_condition * returning_;

	left_hand_side_expression_ = stt_expression_example_natural_zero();
#ifndef NDEBUG
	assertion(left_hand_side_expression_ != NULL);
	assert_expectations_on_stt_expression_example_natural_zero(
			left_hand_side_expression_);
#endif

	right_hand_side_expression_ = stt_expression_example_natural_one();
#ifndef NDEBUG
	assertion(right_hand_side_expression_ != NULL);
	assert_expectations_on_stt_expression_example_natural_one(
			right_hand_side_expression_);
#endif

	returning_ = stt_condition_default_constructor();
#ifndef NDEBUG
	assertion(returning_ != NULL);
	assertion(returning_->type_ == STT_CONDITION_TYPE_INVALID);
#endif

	stt_condition_initialize_less_than(
			returning_, left_hand_side_expression_,
			right_hand_side_expression_);
#ifndef NDEBUG
	assertion(returning_->type_ == STT_CONDITION_TYPE_LESS_THAN);
	assert_expectations_on_stt_expression_example_natural_zero(
			returning_->left_hand_side_expression_);
	assert_expectations_on_stt_expression_example_natural_one(
			returning_->right_hand_side_expression_);
#endif

#ifndef NDEBUG
	assert_expectations_on_stt_condition_example_simple_condition(
			returning_);
#endif

	stt_expression_destructor(left_hand_side_expression_);
	stt_expression_destructor(right_hand_side_expression_);

	return returning_;
}

#ifndef NDEBUG

void
assert_expectations_on_stt_condition_example_simple_lt_true_condition(
		const stt_condition * condition)
{
	assertion(condition != NULL);
	assertion(condition->type_ == STT_CONDITION_TYPE_LESS_THAN);
	assertion(condition->left_hand_side_expression_ != NULL);
	assert_expectations_on_stt_expression_example_natural_zero(
			condition->left_hand_side_expression_);
	assertion(condition->right_hand_side_expression_ != NULL);
	assert_expectations_on_stt_expression_example_natural_one(
			condition->right_hand_side_expression_);
}

#endif

stt_condition *
stt_condition_example_simple_true_condition(void)
{
	return stt_condition_example_simple_lt_true_condition();
}

#ifndef NDEBUG

void
assert_expectations_on_stt_condition_example_simple_true_condition(
		const stt_condition * condition)
{
	assert_expectations_on_stt_condition_example_simple_lt_true_condition(
			condition);
}

#endif

stt_condition *
stt_condition_example_simple_condition(void)
{
	return stt_condition_example_simple_true_condition();
}

#ifndef NDEBUG

void
assert_expectations_on_stt_condition_example_simple_condition(
		const stt_condition * condition)
{
	assert_expectations_on_stt_condition_example_simple_true_condition(
			condition);
}

#endif

stt_condition *
stt_condition_example_simple_false_condition(void)
{
	stt_expression * left_hand_side_expression_;
	stt_expression * right_hand_side_expression_;
	stt_condition * returning_;

	left_hand_side_expression_ = stt_expression_example_natural_zero();
#ifndef NDEBUG
	assertion(left_hand_side_expression_ != NULL);
	assert_expectations_on_stt_expression_example_natural_zero(
			left_hand_side_expression_);
#endif

	right_hand_side_expression_ = stt_expression_example_natural_zero();
#ifndef NDEBUG
	assertion(right_hand_side_expression_ != NULL);
	assert_expectations_on_stt_expression_example_natural_zero(
			right_hand_side_expression_);
#endif

	returning_ = stt_condition_default_constructor();
#ifndef NDEBUG
	assertion(returning_ != NULL);
	assertion(returning_->type_ == STT_CONDITION_TYPE_INVALID);
#endif

	stt_condition_initialize_less_than(
			returning_, left_hand_side_expression_,
			right_hand_side_expression_);
#ifndef NDEBUG
	assertion(returning_->type_ == STT_CONDITION_TYPE_LESS_THAN);
	assert_expectations_on_stt_expression_example_natural_zero(
			returning_->left_hand_side_expression_);
	assert_expectations_on_stt_expression_example_natural_zero(
			returning_->right_hand_side_expression_);
#endif

#ifndef NDEBUG
	assert_expectations_on_stt_condition_example_simple_false_condition(
			returning_);
#endif

	stt_expression_destructor(left_hand_side_expression_);
	stt_expression_destructor(right_hand_side_expression_);

	return returning_;
}

#ifndef NDEBUG

void
assert_expectations_on_stt_condition_example_simple_false_condition(
		const stt_condition * condition)
{
	assertion(condition != NULL);
	assertion(condition->type_ == STT_CONDITION_TYPE_LESS_THAN);
	assertion(condition->left_hand_side_expression_ != NULL);
	assert_expectations_on_stt_expression_example_natural_zero(
			condition->left_hand_side_expression_);
	assertion(condition->right_hand_side_expression_ != NULL);
	assert_expectations_on_stt_expression_example_natural_zero(
			condition->right_hand_side_expression_);
}

#endif

stt_condition *
stt_condition_example_simple_gt_true_condition(void)
{
	stt_expression * left_hand_side_expression_;
	stt_expression * right_hand_side_expression_;
	stt_condition * returning_;

	left_hand_side_expression_ = stt_expression_example_natural_one();
#ifndef NDEBUG
	assertion(left_hand_side_expression_ != NULL);
	assert_expectations_on_stt_expression_example_natural_one(
			left_hand_side_expression_);
#endif

	right_hand_side_expression_ = stt_expression_example_natural_zero();
#ifndef NDEBUG
	assertion(right_hand_side_expression_ != NULL);
	assert_expectations_on_stt_expression_example_natural_zero(
			right_hand_side_expression_);
#endif

	returning_ = stt_condition_default_constructor();
#ifndef NDEBUG
	assertion(returning_ != NULL);
	assertion(returning_->type_ == STT_CONDITION_TYPE_INVALID);
#endif

	stt_condition_initialize_greater_than(
			returning_, left_hand_side_expression_,
			right_hand_side_expression_);
#ifndef NDEBUG
	assertion(returning_->type_ == STT_CONDITION_TYPE_GREATER_THAN);
	assert_expectations_on_stt_expression_example_natural_one(
			returning_->left_hand_side_expression_);
	assert_expectations_on_stt_expression_example_natural_zero(
			returning_->right_hand_side_expression_);
#endif

	stt_expression_destructor(left_hand_side_expression_);
	stt_expression_destructor(right_hand_side_expression_);

#ifndef NDEBUG
	assert_expectations_on_stt_condition_example_simple_gt_true_condition(
			returning_);
#endif

	return returning_;
}

#ifndef NDEBUG

void
assert_expectations_on_stt_condition_example_simple_gt_true_condition(
		const stt_condition * condition)
{
	assertion(condition != NULL);
	assertion(condition->type_ == STT_CONDITION_TYPE_GREATER_THAN);
	assertion(condition->left_hand_side_expression_ != NULL);
	assert_expectations_on_stt_expression_example_natural_one(
			condition->left_hand_side_expression_);
	assertion(condition->right_hand_side_expression_ != NULL);
	assert_expectations_on_stt_expression_example_natural_zero(
			condition->right_hand_side_expression_);
}

#endif

stt_condition *
stt_condition_example_simple_greater_than_condition()
{
	return stt_condition_example_simple_gt_true_condition();
}

#ifndef NDEBUG

void
assert_expectations_on_stt_condition_example_simple_greater_than_condition(
		const stt_condition * condition)
{
	assertion(condition != NULL);
	assert_expectations_on_stt_condition_example_simple_gt_true_condition(
			condition);
}

#endif

void
stt_condition_create_and_destroy_less_than_examples()
{
	stt_condition * condition_;

	condition_ = stt_condition_example_simple_lt_true_condition();
	forced_assertion(condition_ != NULL);
#ifndef NDEBUG
	assert_expectations_on_stt_condition_example_simple_lt_true_condition(
			condition_);
#endif

	stt_condition_destructor(condition_);
}

void
stt_condition_create_and_destroy_greater_than_example_0()
{
	stt_condition * condition_;

	condition_ = stt_condition_example_simple_gt_true_condition();
	forced_assertion(condition_ != NULL);
#ifndef NDEBUG
	assert_expectations_on_stt_condition_example_simple_gt_true_condition(
			condition_);
#endif

	stt_condition_destructor(condition_);
}

void
stt_condition_create_and_destroy_greater_than_example_1()
{
	stt_condition * condition_;

	condition_ = stt_condition_example_simple_greater_than_condition();
	forced_assertion(condition_ != NULL);
#ifndef NDEBUG
	assert_expectations_on_stt_condition_example_simple_greater_than_condition(
			condition_);
#endif

	stt_condition_destructor(condition_);
}

void
stt_condition_create_and_destroy_greater_than_examples()
{
	stt_condition_create_and_destroy_greater_than_example_0();
	stt_condition_create_and_destroy_greater_than_example_1();
}

tests_simple_list *
register_stt_condition_create_and_destroy_greater_than_examples(
		tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_stt_condition_create_and_destroy_greater_than_examples(
		tests_simple_list * tests)
{
	tests_simple_list * returning_;

	returning_ = tests;
	tests_simple_list_push_back(
			returning_,
			& stt_condition_create_and_destroy_greater_than_example_0);
	tests_simple_list_push_back(
			returning_,
			& stt_condition_create_and_destroy_greater_than_example_1);
	return returning_;
}

void
stt_condition_create_and_destroy_examples()
{
	stt_condition_create_and_destroy_less_than_examples();
	stt_condition_create_and_destroy_greater_than_examples();
}

tests_simple_list *
register_stt_condition_create_and_destroy_examples(tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_stt_condition_create_and_destroy_examples(tests_simple_list * tests)
{
	tests_simple_list * returning_;

	returning_ = tests;
	tests_simple_list_push_back(
			returning_,
			& stt_condition_create_and_destroy_less_than_examples);
	returning_ = register_stt_condition_create_and_destroy_greater_than_examples(
			returning_);
	return returning_;
}

void
stt_condition_equality_test_0()
{
	stt_condition * condition_zero_;
	stt_condition * condition_one_;
	amara_boolean result_;

	condition_zero_ = stt_condition_example_simple_gt_true_condition();
	forced_assertion(condition_zero_ != NULL);

	condition_one_ = stt_condition_example_simple_gt_true_condition();
	forced_assertion(condition_one_ != NULL);

	result_ = stt_conditions_equality(condition_zero_, condition_one_);
	forced_assertion(result_ == AMARA_BOOLEAN_TRUE);

	stt_condition_destructor(condition_zero_);
	stt_condition_destructor(condition_one_);
}

void
stt_condition_equality_tests()
{
	stt_condition_equality_test_0();
}

void
stt_condition_tests()
{
	stt_condition_create_and_destroy_examples();
	stt_condition_equality_tests();
}

tests_simple_list *
register_stt_condition_tests(tests_simple_list * tests)
{
	tests_simple_list * returning_;

	returning_ = register_stt_condition_create_and_destroy_examples(tests);
	return returning_;
}
