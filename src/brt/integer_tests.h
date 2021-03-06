/*
 * Copyright 2018, 2020 Mercedes Catherine Salazar
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
 * src/brt/integer_tests.h: Test the Algebraic integer number class.
 */

#ifndef __AMARA__BASIC_ARITHMETIC__INTEGER_TESTS__H__
#define __AMARA__BASIC_ARITHMETIC__INTEGER_TESTS__H__

#include "../tst/tests_simple_list.h"

void
integer_tests(void)
;

tests_simple_list *
register_integer_tests(tests_simple_list * tests)
__amara__warn_unused_result__
;

#endif
