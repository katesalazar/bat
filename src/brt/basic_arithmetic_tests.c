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
 * src/brt/basic_arithmetic_tests.c: Self explanatory...
 */

/*   For `int fprintf(FILE * stream, const char * format, ...)`. */
#include <stdio.h>

/*   For `NULL`. */
#include <stdlib.h>

/*   For `int strcmp(const char * s1, const char * s2)`. */
#include <string.h>

/*   For `void assertion_two(int expression, const char * message)`. */
#include "../asr/assertion.h"

#include "integer_tests.h"

/*   For `signed char safe_arguments_natural_raw_comparison(
 * const char * raw_natural_zero, const char * raw_natural_one)`, and
 * for `typedef struct fit_raw_natural_in_unsigned_char_ret { ... }
 * fit_raw_natural_in_unsigned_char_ret`, and for several others. */
#include "natural.h"

#include "natural_tests.h"

#include "rational_tests.h"

/*   For own definitions and definitions depended on by own prototypes. */
#include "basic_arithmetic_tests.h"

void
safe_arguments_natural_raw_comparison_test_0(void)
;

void
safe_arguments_natural_raw_comparison_test_1(void)
;

void
safe_arguments_natural_raw_comparison_test_2(void)
;

void
safe_arguments_natural_raw_comparison_test_3(void)
;

void
safe_arguments_natural_raw_comparison_test_4(void)
;

void
safe_arguments_natural_raw_comparison_tests(void)
;

void
fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_0(void)
;

void
fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_1(void)
;

void
fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_2(void)
;

void
fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_3(void)
;

void
fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_4(void)
;

void
fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_tests(void)
;

void
fit_raw_natural_in_unsigned_char_test_0(void)
;

void
fit_raw_natural_in_unsigned_char_tests(void)
;

void
raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one_test_0(void)
;

void
raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one_test_1(void)
;

void
raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one_tests(void)
;

void
raw_naturals_euclidean_quotient_as_raw_natural_test__0(void)
;

void
raw_naturals_euclidean_quotient_as_raw_natural_test__1(void)
;

void
raw_naturals_euclidean_quotient_as_raw_natural_tests_(void)
;

void
natural_tests_(void)
;

void
safe_arguments_natural_raw_comparison_test_0()
{
	const char * raw_natural_zero_chars_array_ = "0";
	const char * raw_natural_one_chars_array_ = "0";
	const amara_string * raw_natural_zero_;
	const amara_string * raw_natural_one_;
	signed char result_;

	fprintf(stderr,
	        "will run safe_arguments_natural_raw_comparison_test_0...");
	raw_natural_zero_ = amara_string_exhaustive_constructor(
			raw_natural_zero_chars_array_);
	raw_natural_one_ = amara_string_exhaustive_constructor(
			raw_natural_one_chars_array_);
	result_ = safe_arguments_natural_raw_comparison(
			raw_natural_zero_, raw_natural_one_);
	assertion_two(result_ == 0, "unexpected result");
	amara_string_destructor((amara_string *) raw_natural_zero_);
	amara_string_destructor((amara_string *) raw_natural_one_);
	/* FIXME attempt to free a non heap object */
	/*
	free((char *) raw_natural_zero_chars_array_);
	free((char *) raw_natural_one_chars_array_);
	*/
	fprintf(stderr, "done\n");
}

void
safe_arguments_natural_raw_comparison_test_1()
{
	const char * raw_natural_zero_chars_array_ = "0";
	const char * raw_natural_one_chars_array_ = "1";
	const amara_string * raw_natural_zero_;
	const amara_string * raw_natural_one_;
	signed char result_;

	fprintf(stderr,
	        "will run safe_arguments_natural_raw_comparison_test_1...");
	raw_natural_zero_ = amara_string_exhaustive_constructor(
			raw_natural_zero_chars_array_);
	raw_natural_one_ = amara_string_exhaustive_constructor(
			raw_natural_one_chars_array_);
	result_ = safe_arguments_natural_raw_comparison(
			raw_natural_zero_, raw_natural_one_);
	assertion_two(result_ < 0, "unexpected result");
	amara_string_destructor((amara_string *) raw_natural_zero_);
	amara_string_destructor((amara_string *) raw_natural_one_);
	/* FIXME attempt to free a non heap object */
	/*
	free((char *) raw_natural_zero_chars_array_);
	free((char *) raw_natural_one_chars_array_);
	*/
	fprintf(stderr, "done\n");
}

void
safe_arguments_natural_raw_comparison_test_2()
{
	const char * raw_natural_zero_chars_array_ = "0";
	const char * raw_natural_one_chars_array_ = "10";
	const amara_string * raw_natural_zero_;
	const amara_string * raw_natural_one_;
	signed char result_;

	fprintf(stderr,
	        "will run safe_arguments_natural_raw_comparison_test_2...");
	raw_natural_zero_ = amara_string_exhaustive_constructor(
			raw_natural_zero_chars_array_);
	raw_natural_one_ = amara_string_exhaustive_constructor(
			raw_natural_one_chars_array_);
	result_ = safe_arguments_natural_raw_comparison(
			raw_natural_zero_, raw_natural_one_);
	assertion_two(result_ < 0, "unexpected result");
	amara_string_destructor((amara_string *) raw_natural_zero_);
	amara_string_destructor((amara_string *) raw_natural_one_);
	/* FIXME attempt to free a non heap object */
	/*
	free((char *) raw_natural_zero_chars_array_);
	free((char *) raw_natural_one_chars_array_);
	*/
	fprintf(stderr, "done\n");
}

void
safe_arguments_natural_raw_comparison_test_3()
{
	const char * raw_natural_zero_chars_array_ = "1";
	const char * raw_natural_one_chars_array_ = "0";
	const amara_string * raw_natural_zero_;
	const amara_string * raw_natural_one_;
	signed char result_;

	fprintf(stderr,
	        "will run safe_arguments_natural_raw_comparison_test_3...");
	raw_natural_zero_ = amara_string_exhaustive_constructor(
			raw_natural_zero_chars_array_);
	raw_natural_one_ = amara_string_exhaustive_constructor(
			raw_natural_one_chars_array_);
	result_ = safe_arguments_natural_raw_comparison(
			raw_natural_zero_, raw_natural_one_);
	assertion_two(result_ > 0, "unexpected result");
	amara_string_destructor((amara_string *) raw_natural_zero_);
	amara_string_destructor((amara_string *) raw_natural_one_);
	/* FIXME attempt to free a non heap object */
	/*
	free((char *) raw_natural_zero_chars_array_);
	free((char *) raw_natural_one_chars_array_);
	*/
	fprintf(stderr, "done\n");
}

void
safe_arguments_natural_raw_comparison_test_4()
{
	const char * raw_natural_zero_chars_array_ = "10";
	const char * raw_natural_one_chars_array_ = "0";
	const amara_string * raw_natural_zero_;
	const amara_string * raw_natural_one_;
	signed char result_;

	fprintf(stderr,
	        "will run safe_arguments_natural_raw_comparison_test_4...");
	raw_natural_zero_ = amara_string_exhaustive_constructor(
			raw_natural_zero_chars_array_);
	raw_natural_one_ = amara_string_exhaustive_constructor(
			raw_natural_one_chars_array_);
	result_ = safe_arguments_natural_raw_comparison(
			raw_natural_zero_, raw_natural_one_);
	assertion_two(result_ > 0, "unexpected result");
	amara_string_destructor((amara_string *) raw_natural_zero_);
	amara_string_destructor((amara_string *) raw_natural_one_);
	/* FIXME attempt to free a non heap object */
	/*
	free((char *) raw_natural_zero_chars_array_);
	free((char *) raw_natural_one_chars_array_);
	*/
	fprintf(stderr, "done\n");
}

void
safe_arguments_natural_raw_comparison_tests()
{
	safe_arguments_natural_raw_comparison_test_0();
	safe_arguments_natural_raw_comparison_test_1();
	safe_arguments_natural_raw_comparison_test_2();
	safe_arguments_natural_raw_comparison_test_3();
	safe_arguments_natural_raw_comparison_test_4();
}

tests_simple_list *
register_safe_arguments_natural_raw_comparison_tests(
		tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_safe_arguments_natural_raw_comparison_tests(
		tests_simple_list * tests)
{
	tests_simple_list * returning_;

	returning_ =
			/*
			tests_simple_list_copy_constructor(tests);
			*/
			tests;
	/*
	forced_assertion(returning_ != NULL);
	*/

	tests_simple_list_push_back(
			returning_,
			& safe_arguments_natural_raw_comparison_test_0);

	tests_simple_list_push_back(
			returning_,
			& safe_arguments_natural_raw_comparison_test_1);

	tests_simple_list_push_back(
			returning_,
			& safe_arguments_natural_raw_comparison_test_2);

	tests_simple_list_push_back(
			returning_,
			& safe_arguments_natural_raw_comparison_test_3);

	tests_simple_list_push_back(
			returning_,
			& safe_arguments_natural_raw_comparison_test_4);

	return returning_;
}

fit_raw_natural_in_unsigned_char_ret *
fit_raw_natural_in_unsigned_char_inner_might_fit_or_not(
		const amara_string * valid_raw_natural)
__attribute__((warn_unused_result))
;

void
fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_0()
{
	const char * raw_natural_chars_array_ = "123";
	const amara_string * raw_natural_;
	const fit_raw_natural_in_unsigned_char_ret * ret_;

	fprintf(stderr,
	        "will run fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_0...");
	raw_natural_ = 	amara_string_exhaustive_constructor(
			raw_natural_chars_array_);
	ret_ = fit_raw_natural_in_unsigned_char_inner_might_fit_or_not(
			raw_natural_);
	assertion(ret_->status ==
			FIT_RAW_NATURAL_IN_UNSIGNED_CHAR_RET_STATUS_OK);
	amara_string_destructor((amara_string *) raw_natural_);
	fit_raw_natural_in_unsigned_char_ret_destructor(
			(fit_raw_natural_in_unsigned_char_ret *) ret_);
	fprintf(stderr, "done\n");
}

void
fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_1()
{
	const char * raw_natural_chars_array_ = "234";
	const amara_string * raw_natural_;
	const fit_raw_natural_in_unsigned_char_ret * ret_;

	fprintf(stderr,
	        "will run fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_1...");
	raw_natural_ = amara_string_exhaustive_constructor(
			raw_natural_chars_array_);
	ret_ = fit_raw_natural_in_unsigned_char_inner_might_fit_or_not(
			raw_natural_);
	assertion(ret_->status ==
			FIT_RAW_NATURAL_IN_UNSIGNED_CHAR_RET_STATUS_OK);
	amara_string_destructor((amara_string *) raw_natural_);
	fit_raw_natural_in_unsigned_char_ret_destructor(
			(fit_raw_natural_in_unsigned_char_ret *) ret_);
	fprintf(stderr, "done\n");
}

void
fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_2()
{
	const char * raw_natural_chars_array_ = "255";
	const amara_string * raw_natural_;
	const fit_raw_natural_in_unsigned_char_ret * ret_;

	fprintf(stderr,
	        "will run fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_2...");
	raw_natural_ = amara_string_exhaustive_constructor(
			raw_natural_chars_array_);
	ret_ = fit_raw_natural_in_unsigned_char_inner_might_fit_or_not(
			raw_natural_);
	assertion(ret_->status ==
			FIT_RAW_NATURAL_IN_UNSIGNED_CHAR_RET_STATUS_OK);
	amara_string_destructor((amara_string *) raw_natural_);
	fit_raw_natural_in_unsigned_char_ret_destructor(
			(fit_raw_natural_in_unsigned_char_ret *) ret_);
	fprintf(stderr, "done\n");
}

void
fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_3()
{
	const char * raw_natural_chars_array_ = "260";
	const amara_string * raw_natural_;
	const fit_raw_natural_in_unsigned_char_ret * ret_;

	fprintf(stderr,
	        "will run fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_3...");
	raw_natural_ = amara_string_exhaustive_constructor(
			raw_natural_chars_array_);
	ret_ = fit_raw_natural_in_unsigned_char_inner_might_fit_or_not(
			raw_natural_);
	assertion(ret_->status ==
			FIT_RAW_NATURAL_IN_UNSIGNED_CHAR_RET_STATUS_ERR_DOES_NOT_FIT);
	amara_string_destructor((amara_string *) raw_natural_);
	fit_raw_natural_in_unsigned_char_ret_destructor(
			(fit_raw_natural_in_unsigned_char_ret *) ret_);
	fprintf(stderr, "done\n");
}

void
fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_4()
{
	const char * raw_natural_chars_array_ = "300";
	const amara_string * raw_natural_;
	const fit_raw_natural_in_unsigned_char_ret * ret_;

	fprintf(stderr,
	        "will run fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_4...");
	raw_natural_ = amara_string_exhaustive_constructor(
			raw_natural_chars_array_);
	ret_ = fit_raw_natural_in_unsigned_char_inner_might_fit_or_not(
			raw_natural_);
	assertion(ret_->status ==
			FIT_RAW_NATURAL_IN_UNSIGNED_CHAR_RET_STATUS_ERR_DOES_NOT_FIT);
	amara_string_destructor((amara_string *) raw_natural_);
	fit_raw_natural_in_unsigned_char_ret_destructor(
			(fit_raw_natural_in_unsigned_char_ret *) ret_);
	fprintf(stderr, "done\n");
}

void
fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_tests()
{
	fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_0();
	fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_1();
	fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_2();
	fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_3();
	fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_4();
}

tests_simple_list *
register_fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_tests(
		tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_tests(
		tests_simple_list * tests)
{
	tests_simple_list * returning_;

	returning_ =
			/*
			tests_simple_list_copy_constructor(tests);
			*/
			tests;
	/*
	forced_assertion(returning_ != NULL);
	*/

	tests_simple_list_push_back(
			returning_,
			& fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_0);
	tests_simple_list_push_back(
			returning_,
			& fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_1);
	tests_simple_list_push_back(
			returning_,
			& fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_2);
	tests_simple_list_push_back(
			returning_,
			& fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_3);
	tests_simple_list_push_back(
			returning_,
			& fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_test_4);

	return returning_;
}

void
fit_raw_natural_in_unsigned_char_test_0()
{
	const char * raw_natural_chars_array_ = "32993";
	const amara_string * raw_natural_ =
			amara_string_exhaustive_constructor(
					raw_natural_chars_array_);
	const fit_raw_natural_in_unsigned_char_ret * ret_ =
			fit_raw_natural_in_unsigned_char(raw_natural_);
	assertion(ret_->status ==
			FIT_RAW_NATURAL_IN_UNSIGNED_CHAR_RET_STATUS_ERR_NOT_FITTING);
	fit_raw_natural_in_unsigned_char_ret_destructor(
			(fit_raw_natural_in_unsigned_char_ret *) ret_);
	amara_string_destructor((amara_string *) raw_natural_);
	/* FIXME attempt to free a non heap object */
	/*
	free((char *) raw_natural_chars_array_);
	*/
}

void
fit_raw_natural_in_unsigned_char_tests()
{
	fit_raw_natural_in_unsigned_char_test_0();
}

tests_simple_list *
register_fit_raw_natural_in_unsigned_char_tests(tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_fit_raw_natural_in_unsigned_char_tests(tests_simple_list * tests)
{
	tests_simple_list * returning_;

	returning_ = tests;
	tests_simple_list_push_back(returning_,
	                            & fit_raw_natural_in_unsigned_char_test_0);
	return returning_;
}

/*   This is a _friend_ declaration of a function otherwise private to
 * `natural.c`. */
amara_string *
raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one(
		const amara_string * raw_natural_zero,
		const amara_string * raw_natural_one)
__attribute__((warn_unused_result))
;

const char * MACHINE_NUMERIC_OVERFLOW = "MACHINE_NUMERIC_OVERFLOW";

void
raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one_test_0()
{
	const char * raw_natural_zero_chars_array_ = "256";
	const char * raw_natural_one_chars_array_ = "0";
	const amara_string * raw_natural_zero_ =
			amara_string_exhaustive_constructor(
					raw_natural_zero_chars_array_);
	const amara_string * raw_natural_one_ =
			amara_string_exhaustive_constructor(
					raw_natural_one_chars_array_);
	const amara_string * actual_ret_ =
			raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one(
					raw_natural_zero_, raw_natural_one_);
	const char * expected_ret_chars_array_ =
#ifdef AMARA_USE_STD_CXX98
			(char *)
#endif
			malloc(strlen(MACHINE_NUMERIC_OVERFLOW) + 1);
	const amara_string * expected_ret_;
	amara_boolean expectation_matches_;

	forced_assertion_two(expected_ret_chars_array_ != NULL,
			"malloc failed, basic_arithmetic_tests.c: 400\n");

	strcpy((char *) expected_ret_chars_array_, MACHINE_NUMERIC_OVERFLOW);
	expected_ret_ = amara_string_exhaustive_constructor(
			expected_ret_chars_array_);
	expectation_matches_ =
			amara_string_equality(expected_ret_, actual_ret_);
	/* fprintf(stderr, "%s:%u - %d\n", __FILE__, __LINE__, strcmp_ret_); */
	assertion(expectation_matches_);
	amara_string_destructor((amara_string *) expected_ret_);
	free((char *) expected_ret_chars_array_);
	amara_string_destructor((amara_string *) actual_ret_);
	amara_string_destructor((amara_string *) raw_natural_one_);
	amara_string_destructor((amara_string *) raw_natural_zero_);
	/* FIXME attempt to free a non heap object */
	/*
	free((char *) raw_natural_one_chars_array_);
	free((char *) raw_natural_zero_chars_array_);
	*/
}

void
raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one_test_1()
{
	const char * raw_natural_zero_chars_array_ = "0";
	const char * raw_natural_one_chars_array_ = "256";
	const amara_string * raw_natural_zero_ =
			amara_string_exhaustive_constructor(
					raw_natural_zero_chars_array_);
	const amara_string * raw_natural_one_ =
			amara_string_exhaustive_constructor(
					raw_natural_one_chars_array_);
	const amara_string * actual_ret_ =
			raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one(
					raw_natural_zero_, raw_natural_one_);
	const char * expected_ret_chars_array_ =
#ifdef AMARA_USE_STD_CXX98
			(char *)
#endif
			malloc(strlen(MACHINE_NUMERIC_OVERFLOW) + 1);
	const amara_string * expected_ret_;
	amara_boolean expectation_matches_;

	forced_assertion_two(expected_ret_chars_array_ != NULL,
			"malloc failed, basic_arithmetic_tests.c: 447\n");

	strcpy((char *) expected_ret_chars_array_, MACHINE_NUMERIC_OVERFLOW);
	expected_ret_ = amara_string_exhaustive_constructor(
			expected_ret_chars_array_);
	expectation_matches_ =
			amara_string_equality(expected_ret_, actual_ret_);
	assertion(expectation_matches_);
	amara_string_destructor((amara_string *) expected_ret_);
	free((char *) expected_ret_chars_array_);
	amara_string_destructor((amara_string *) actual_ret_);
	amara_string_destructor((amara_string *) raw_natural_one_);
	amara_string_destructor((amara_string *) raw_natural_zero_);
	/* FIXME attempt to free a non heap object */
	/*
	free((char *) raw_natural_one_chars_array_);
	free((char *) raw_natural_zero_chars_array_);
	*/
}

void
raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one_tests()
{
	raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one_test_0();
	raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one_test_1();
}

tests_simple_list *
register_raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one_tests(
		tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one_tests(
		tests_simple_list * tests)
{
	tests_simple_list * returning_;

	returning_ = tests;
	tests_simple_list_push_back(
			returning_,
			& raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one_test_0);
	tests_simple_list_push_back(
			returning_,
			& raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one_test_1);
	return returning_;
}

void
raw_naturals_euclidean_quotient_as_raw_natural_test__0()
{
	const char * raw_natural_zero_chars_array_ = "256";
	const char * raw_natural_one_chars_array_ = "1";
	const amara_string * raw_natural_zero_ =
			amara_string_exhaustive_constructor(
					raw_natural_zero_chars_array_);
	const amara_string * raw_natural_one_ =
			amara_string_exhaustive_constructor(
					raw_natural_one_chars_array_);
	const amara_string * ret_ = raw_naturals_euclidean_quotient_as_raw_natural(
			raw_natural_zero_, raw_natural_one_);
	const char * expected_raw_natural_chars_array_ = "256";
	const amara_string * expected_raw_natural_ =
			amara_string_exhaustive_constructor(
					expected_raw_natural_chars_array_);
	assertion(amara_string_equality(ret_, expected_raw_natural_));
	amara_string_destructor((amara_string *) raw_natural_zero_);
	amara_string_destructor((amara_string *) raw_natural_one_);
	amara_string_destructor((amara_string *) ret_);
	amara_string_destructor((amara_string *) expected_raw_natural_);
	/* FIXME attempt to free a non heap object */
	/*
	free((char *) raw_natural_one_chars_array_);
	free((char *) raw_natural_zero_chars_array_);
	*/
}

/*
void
raw_naturals_euclidean_quotient_as_raw_natural_test_1_()
{
	const char * raw_natural_zero_chars_array_ = "1";
	const char * raw_natural_one_chars_array_ = "256";
	const amara_string * raw_natural_zero_ =
			amara_string_exhaustive_constructor(
					raw_natural_zero_chars_array_);
	const amara_string * raw_natural_one_ =
			amara_string_exhaustive_constructor(
					raw_natural_one_chars_array_);
	const amara_string * ret_ = raw_naturals_euclidean_quotient_as_raw_natural(
			raw_natural_zero_, raw_natural_one_);
	const char * expected_raw_natural_chars_array_ =
			"MACHINE_NUMERIC_OVERFLOW";
	const amara_string * expected_raw_natural_ =
			amara_string_exhaustive_constructor(
					expected_raw_natural_chars_array_);
	assertion(amara_string_equality(ret_, expected_raw_natural_));
	amara_string_destructor((amara_string *) ret_);
	amara_string_destructor((amara_string *) raw_natural_one_);
	amara_string_destructor((amara_string *) raw_natural_zero_);
*/
	/* FIXME attempt to free a non heap object */
	/*
	free((char *) raw_natural_one_chars_array_);
	free((char *) raw_natural_zero_chars_array_);
	*/
/*
}
*/

void
raw_naturals_euclidean_quotient_as_raw_natural_tests_()
{
	raw_naturals_euclidean_quotient_as_raw_natural_test__0();
	/*
	raw_naturals_euclidean_quotient_as_raw_natural_test__1();
	*/
}

tests_simple_list *
register_raw_naturals_euclidean_quotient_as_raw_natural_tests_(
		tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_raw_naturals_euclidean_quotient_as_raw_natural_tests_(
		tests_simple_list * tests)
{
	tests_simple_list * returning_;

	returning_ = tests;
	tests_simple_list_push_back(
			returning_,
			& raw_naturals_euclidean_quotient_as_raw_natural_test__0);
	/*
	tests_simple_list_push_back(
			returning_,
			& raw_naturals_euclidean_quotient_as_raw_natural_test__1);
	*/
	return returning_;
}

void
natural_tests_()
{
	safe_arguments_natural_raw_comparison_tests();
	fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_tests();
	fit_raw_natural_in_unsigned_char_tests();
	raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one_tests();
	raw_naturals_euclidean_quotient_as_raw_natural_tests_();
}

tests_simple_list *
register_natural_tests_(tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_natural_tests_(tests_simple_list * tests)
{
	tests_simple_list * returning_;

	returning_ = register_safe_arguments_natural_raw_comparison_tests(
			tests);
	forced_assertion(returning_ != NULL);

	returning_ = register_fit_raw_natural_in_unsigned_char_inner_might_fit_or_not_tests(
			returning_);
	forced_assertion(returning_ != NULL);

	returning_ = register_fit_raw_natural_in_unsigned_char_tests(
			returning_);
	returning_ = register_raw_naturals_substraction_as_raw_natural_zero_is_larger_than_one_tests(
			returning_);
	returning_ = register_raw_naturals_euclidean_quotient_as_raw_natural_tests_(
			returning_);

	return returning_;
}

void
basic_arithmetic_tests()
{
#ifdef TRACE_STEPS_IN
	fprintf(stderr,
	        "----> %s:%u: void basic_arithmetic_tests()\n", __FILE__,
	        __LINE__);
#endif
	natural_tests_();
	natural_tests();
	integer_tests();
	rational_tests();
}

tests_simple_list *
register_basic_arithmetic_tests(tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_basic_arithmetic_tests(tests_simple_list * tests)
{
	tests_simple_list * returning_;

	returning_ = register_natural_tests_(tests);
	returning_ = register_natural_tests(returning_);
	returning_ = register_integer_tests(returning_);
	returning_ = register_rational_tests(returning_);
	return returning_;
}
