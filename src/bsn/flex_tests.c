/*
 * Copyright 2019, 2020 Mercedes Catherine Salazar
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
 * src/bsn/flex_tests.c: Test the Amara docs Flex scanner.
 */

#include "../arn/app_runner.h"

#include "../asr/assertion.h"

#include "flex_tests.h"

void
flex_ignored_chars_test_0()
{
	/*
	char * path_to_main_;
	const FILE * main_doc_descriptor_;
	*/
	char ret_;

	/*
	path_to_main_ = malloc(strlen("res/tst/ignored_chars/main.minia") + 1);
	strcpy(path_to_main_, "res/tst/ignored_chars/main.minia");

	main_doc_descriptor_ = fopen(path_to_main_, "r");

	forced_assertion(main_doc_descriptor_ != NULL);

	ret_ = run_app_main_doc_exists("ignored_chars", main_doc_descriptor_);

	forced_assertion(ret_ == 0);
	*/

	ret_ = run_app("./res/tst/ignore_char_excl_mark/");

	if (1) { assertion_two(ret_ == 0 /* XXX */, "bison_tests.c: 53"); } /* XXX disarm 'set but not used' */

	/* XXX
	forced_assertion(ret_ == 0);
	*/
#ifdef DUMP_FLOW_TO_STDERR
	fprintf(stderr, "<---- flex_tests...");
#endif
}

void
flex_ignored_chars_test_1()
{
	char ret_ = run_app("./res/tst/ignore_char_dubquote/");
	forced_assertion(ret_ == 0);
}

void
flex_ignored_chars_tests()
{
	flex_ignored_chars_test_0();
	flex_ignored_chars_test_1();
}

tests_simple_list *
register_flex_ignored_chars_tests(tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_flex_ignored_chars_tests(tests_simple_list * tests)
{
	tests_simple_list_push_back(tests, & flex_ignored_chars_test_0);
	tests_simple_list_push_back(tests, & flex_ignored_chars_test_1);
	return tests;
}

void
flex_four_sided_dice_test_0()
;

void
flex_four_sided_dice_test_0()
{
	char ret_;

	ret_ = run_app("./res/tst/four_sided_dice/");
	forced_assertion(ret_ == 0);
}

void
flex_four_sided_dice_tests()
;

void
flex_four_sided_dice_tests()
{
	flex_four_sided_dice_test_0();
}

tests_simple_list *
register_flex_four_sided_dice_tests(tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_flex_four_sided_dice_tests(tests_simple_list * tests)
{
	tests_simple_list_push_back(tests, & flex_four_sided_dice_test_0);
	return tests;
}

void
flex_eight_sided_dice_test_0()
;

void
flex_eight_sided_dice_test_0()
{
	char ret_;

	ret_ = run_app("./res/tst/eight_sided_dice/");
	forced_assertion(ret_ == 0);
}

void
flex_eight_sided_dice_tests()
;

void
flex_eight_sided_dice_tests()
{
	flex_eight_sided_dice_test_0();
}

tests_simple_list *
register_flex_eight_sided_dice_tests(tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_flex_eight_sided_dice_tests(tests_simple_list * tests)
{
	tests_simple_list_push_back(tests, & flex_eight_sided_dice_test_0);
	return tests;
}

void
flex_twelve_sided_dice_test_0()
;

void
flex_twelve_sided_dice_test_0()
{
	char ret_;

	ret_ = run_app("./res/tst/twelve_sided_dice/");
	forced_assertion(ret_ == 0);
}

void
flex_twelve_sided_dice_tests()
;

void
flex_twelve_sided_dice_tests()
{
	flex_twelve_sided_dice_test_0();
}

tests_simple_list *
register_flex_twelve_sided_dice_tests(tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_flex_twelve_sided_dice_tests(tests_simple_list * tests)
{
	tests_simple_list_push_back(tests, & flex_twelve_sided_dice_test_0);
	return tests;
}

void
flex_twenty_sided_dice_test_0()
;

void
flex_twenty_sided_dice_test_0()
{
	char ret_;

	ret_ = run_app("./res/tst/twenty_sided_dice/");
	forced_assertion(ret_ == 0);
}

void
flex_twenty_sided_dice_tests()
;

void
flex_twenty_sided_dice_tests()
{
	flex_twenty_sided_dice_test_0();
}

tests_simple_list *
register_flex_twenty_sided_dice_tests(tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_flex_twenty_sided_dice_tests(tests_simple_list * tests)
{
	tests_simple_list_push_back(tests, & flex_twenty_sided_dice_test_0);
	return tests;
}

void
flex_dice_tests()
;

void
flex_dice_tests()
{
	flex_four_sided_dice_tests();
	flex_eight_sided_dice_tests();
	flex_twelve_sided_dice_tests();
	flex_twenty_sided_dice_tests();
}

tests_simple_list *
register_flex_dice_tests(tests_simple_list * tests)
__amara__warn_unused_result__
;

tests_simple_list *
register_flex_dice_tests(tests_simple_list * tests)
{
	return
			register_flex_twenty_sided_dice_tests(
			register_flex_twelve_sided_dice_tests(
			register_flex_eight_sided_dice_tests(
			register_flex_four_sided_dice_tests(
					tests))));
}

void
flex_tests(void)
{
	flex_ignored_chars_tests();
	flex_dice_tests();
}

tests_simple_list *
register_flex_tests(tests_simple_list * tests)
{
	return register_flex_dice_tests(
			register_flex_ignored_chars_tests(
					tests));
}
