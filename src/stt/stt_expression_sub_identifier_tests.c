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
 * src/stt/stt_expression_sub_identifier_tests.c: Test the Amara syntax
 * tree identifier type of expression.
 */

/*   For `void assertion(int expression)`. */
#include "../asr/assertion.h"

/*   For `typedef struct stt_expression_sub_identifier { ... }
 * stt_expression_sub_identifier`. */
#include "stt_expression_sub_identifier.h"

#include "stt_expression_sub_identifier_tests.h"

stt_expression_sub_identifier *
stt_expression_sub_identifier_example_foo()
{
	amara_string * identifier_;
	stt_expression_sub_identifier * expression_sub_;

	identifier_ = amara_string_exhaustive_constructor("foo");
	forced_assertion(identifier_ != NULL);
#ifndef NDEBUG
	assertion(identifier_->value_ != NULL);
	assertion(identifier_->value_[0] == 0x66);  /* 102: 'f'. */
	assertion(identifier_->value_[1] == 0x6F);  /* 111: 'o'. */
	assertion(identifier_->value_[2] == 0x6F);  /* 111: 'o'. */
	assertion(identifier_->value_[3] == 0x00);  /* 0: '\0'. */
#endif

	expression_sub_ = stt_expression_sub_identifier_exhaustive_constructor(
			identifier_);
	forced_assertion(expression_sub_ != NULL);
#ifndef NDEBUG
	assertion(expression_sub_->identifier_ != NULL);
	assertion(expression_sub_->identifier_->value_ != NULL);
	assertion(expression_sub_->identifier_->value_[0] == 0x66);  /* 102: 'f'. */
	assertion(expression_sub_->identifier_->value_[1] == 0x6F);  /* 111: 'o'. */
	assertion(expression_sub_->identifier_->value_[2] == 0x6F);  /* 111: 'o'. */
	assertion(expression_sub_->identifier_->value_[3] == 0x00);  /* 0: '\0'. */
#endif

	amara_string_destructor(identifier_);

	return expression_sub_;
}

#ifndef NDEBUG

void
assert_expectations_on_stt_expression_sub_identifier_example_foo(
		const stt_expression_sub_identifier * expression_sub)
{
	assertion(expression_sub != NULL);
	assertion(expression_sub->identifier_ != NULL);
	assertion(expression_sub->identifier_->value_ != NULL);
	assertion(expression_sub->identifier_->value_[0] == 0x66);  /* 102: 'f'. */
	assertion(expression_sub->identifier_->value_[1] == 0x6F);  /* 111: 'o'. */
	assertion(expression_sub->identifier_->value_[2] == 0x6F);  /* 111: 'o'. */
	assertion(expression_sub->identifier_->value_[3] == 0x00);  /* 0: '\0'. */
}

#endif

void
stt_expression_sub_identifier_exhaustive_constructor_test_0()
{
	amara_string * identifier_;
	stt_expression_sub_identifier * expression_sub_;

	identifier_ = amara_string_exhaustive_constructor("foo");
	forced_assertion(identifier_ != NULL);
#ifndef NDEBUG
	assertion(identifier_->value_ != NULL);
	assertion(identifier_->value_[0] == 0x66);  /* 102: 'f'. */
	assertion(identifier_->value_[1] == 0x6F);  /* 111: 'o'. */
	assertion(identifier_->value_[2] == 0x6F);  /* 111: 'o'. */
	assertion(identifier_->value_[3] == 0x00);  /* 0: '\0'. */
#endif

	expression_sub_ = stt_expression_sub_identifier_exhaustive_constructor(
			identifier_);
	forced_assertion(expression_sub_ != NULL);
#ifndef NDEBUG
	assertion(expression_sub_->identifier_ != NULL);
	assertion(expression_sub_->identifier_->value_ != NULL);
	assertion(expression_sub_->identifier_->value_[0] == 0x66);  /* 102: 'f'. */
	assertion(expression_sub_->identifier_->value_[1] == 0x6F);  /* 111: 'o'. */
	assertion(expression_sub_->identifier_->value_[2] == 0x6F);  /* 111: 'o'. */
	assertion(expression_sub_->identifier_->value_[3] == 0x00);  /* 0: '\0'. */
#endif

	stt_expression_sub_identifier_destructor(expression_sub_);
	amara_string_destructor(identifier_);
}

void
stt_expression_sub_identifier_exhaustive_constructor_test_1()
{
	stt_expression_sub_identifier * expression_sub_;

	expression_sub_ = stt_expression_sub_identifier_example_foo();
	forced_assertion(expression_sub_ != NULL);
#ifndef NDEBUG
	assert_expectations_on_stt_expression_sub_identifier_example_foo(
			expression_sub_);
#endif

	stt_expression_sub_identifier_destructor(expression_sub_);
}

void
stt_expression_sub_identifier_exhaustive_constructor_tests()
{
	stt_expression_sub_identifier_exhaustive_constructor_test_0();
	stt_expression_sub_identifier_exhaustive_constructor_test_1();
}

tests_simple_list *
register_stt_expression_sub_identifier_exhaustive_constructor_tests(
		tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_stt_expression_sub_identifier_exhaustive_constructor_tests(
		tests_simple_list * tests)
{
	tests_simple_list * returning_;

	returning_ = tests;
	tests_simple_list_push_back(
			returning_,
			& stt_expression_sub_identifier_exhaustive_constructor_test_0);
	tests_simple_list_push_back(
			returning_,
			& stt_expression_sub_identifier_exhaustive_constructor_test_1);
	return returning_;
}

void
stt_expression_sub_identifier_constructors_tests()
{
	stt_expression_sub_identifier_exhaustive_constructor_tests();
}

tests_simple_list *
register_stt_expression_sub_identifier_constructors_tests(
		tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_stt_expression_sub_identifier_constructors_tests(
		tests_simple_list * tests)
{
	tests_simple_list * returning_;

	returning_ = register_stt_expression_sub_identifier_exhaustive_constructor_tests(
			tests);
	return returning_;
}

void
stt_expression_sub_identifier_tests()
{
	stt_expression_sub_identifier_constructors_tests();
}

tests_simple_list *
register_stt_expression_sub_identifier_tests(tests_simple_list * tests)
{
	tests_simple_list * returning_;

	returning_ = register_stt_expression_sub_identifier_constructors_tests(
			tests);
	return returning_;
}
