/*
 * Copyright 2019 Mercedes Catherine Salazar
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
 * src/bsn/bison_tests.c: Test the Amara docs Bison parser.
 */

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#include "../arn/app_runner.h"

#include "../asr/assertion.h"

void
bison_test_0()
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

	ret_ = run_app("./res/tst/ignored_chars/");

	if (1) { assertion_two(ret_ == 0, "bison_tests.c: 53"); } /* XXX disarm 'set but not used' */

	/* XXX
	forced_assertion(ret_ == 0);
	*/
#ifdef DUMP_FLOW_TO_STDERR
	fprintf(stderr, "<---- bison_tests...");
#endif
}

void
bison_test_1()
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

	ret_ = run_app("./res/tst/single_where_clause/");

	if (1) { assertion(ret_ == 0); } /* XXX disarm 'set but not used' */

	/* XXX
	forced_assertion(ret_ == 0);
	*/
#ifdef DUMP_FLOW_TO_STDERR
	fprintf(stderr, "<---- bison_tests...");
#endif
}

void
bison_test_3()
{
	char ret_;

	ret_ = run_app("./res/tst/dice/");

	if (1) { assertion(ret_ == 0); } /* XXX disarm 'set but not used' */
}

void
bison_test_4()
{
	char ret_;

	ret_ = run_app("./res/tst/conditional_expression/");

	if (1) { assertion(ret_ == 0); } /* XXX disarm 'set but not used' */
}

void
bison_test_5()
{
	char ret_;

	ret_ = run_app("./res/tst/double_where_clause/");

	if (1) { assertion(ret_ == 0); } /* XXX disarm 'set but not used' */
}

/*
void
bison_test_6()
{
	char ret_;

	ret_ = run_app("./res/tst/missing_where_clause/");
*/

	/* XXX disarm 'set but not used' */
/*
	if (1) {

		forced_assertion_two(ret_ != 0,
				"assertion failed at bison_tests.c: 137");
	}
}
*/

void
bison_tests(void)
{
	/* FIXME This test should not be executed under Xcode. */
	char * getcwd_return;
	char * getcwd_buffer;
	char * strstr_return;
	char * needle = "/Library/Developer/Xcode/DerivedData/";

	getcwd_buffer = malloc(4096);
	forced_assertion(getcwd_buffer != NULL);
	getcwd_return = getcwd(getcwd_buffer, 4096);
	forced_assertion_two(getcwd_return != NULL, "`getcwd` returned NULL");
	forced_assertion_two(getcwd_return == getcwd_buffer,
			"bison_tests.c: 159\n");

	fprintf(stderr, "%s\n", getcwd_buffer);

	strstr_return = strstr(getcwd_buffer, needle);

	if (strstr_return == NULL) {

		/* No occurrence, no Xcode, can run the tests like this */

	bison_test_0();

	bison_test_1();

	bison_test_3();

	bison_test_4();

	bison_test_5();

	/* FIXME   Reenabling this test requires a feature branch of its own.
	 *       rtg_named_function transformation out of stt_named_function
	 *       must be prevented (must return an error) if the function
	 *       depends on a value (an stt_value? an rtg_value?) unable to be
	 *       resolved.
	 *         Is it an stt_value? is it an rtg_value? In this example,
	 *       `print whatever` is requested. So `whatever` has to be
	 *       _printable_ (`string or boolean or natural or integer or
	 *       rational`? No, `string` as per arranged with Mia). But it is missing, so you can not
	 *       guarantee that the type is going not to be `nothing` (or
	 *       _undefined_).
	bison_test_6();
	*/

	} else {

		/* needle occured, can not run tests just like that, because cwd is not where the code expects it to be... */
	}
}
