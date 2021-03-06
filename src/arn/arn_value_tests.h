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
 * src/arn/arn_value_tests.h: Test the Amara application run time value.
 * A value is basically a constant.
 */

#ifndef __AMARA__APPLICATIONS_RUNNER__VALUE_TESTS__H__
#define __AMARA__APPLICATIONS_RUNNER__VALUE_TESTS__H__

#include "../tst/tests_simple_list.h"

#include "arn_value.h"

arn_value *
arn_value_example_named_natural_zero(void)
__attribute__((warn_unused_result))
;

#ifndef NDEBUG

void
assert_expectations_on_arn_value_example_named_natural_zero(
		const arn_value * value)
;

#endif

arn_value *
arn_value_example_named_natural_one(void)
__attribute__((warn_unused_result))
;

#ifndef NDEBUG

void
assert_expectations_on_arn_value_example_named_natural_one(
		const arn_value * value)
;

#endif

void
arn_value_tests(void)
;

tests_simple_list *
register_arn_value_tests(tests_simple_list * tests)
__amara__warn_unused_result__
;

#endif
