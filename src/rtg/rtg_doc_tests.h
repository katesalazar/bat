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
 * src/rtg/rtg_doc_tests.h: Test the Amara run time graph document.
 */

#ifndef __AMARA__RUN_TIME_GRAPH__DOC_TESTS__H__
#define __AMARA__RUN_TIME_GRAPH__DOC_TESTS__H__

void
rtg_doc_tests(void)
;

tests_simple_list *
register_rtg_doc_tests(tests_simple_list * tests)
__amara__warn_unused_result__
;

#endif
