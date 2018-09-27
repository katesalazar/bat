/*   For `void assertion(int expression)`. */
#include "../asr/assertion.h"

/*   For `stt_application`. */
#include "stt_application.h"

void
stt_application_construct_and_destruct_test_0()
{
	stt_application * stt_application_;
	stt_application_ = stt_application_default_constructor();
	assertion(stt_application_ != NULL);
	assertion(stt_application_->type_ == STT_APPLICATION_TYPE_INVALID);
	assertion(stt_application_->name_ == NULL);
	assertion(stt_application_->entry_point_function_name_ == NULL);
	stt_application_destructor(stt_application_);
}

void
stt_application_construct_and_destruct_test_1()
{
	stt_application * application_zero_;
	stt_application * application_one_;
	amara_string * application_zero_name_;
	amara_string * application_zero_entry_point_function_name_;
	application_zero_name_ = amara_string_exhaustive_constructor(
			"foo");
	application_zero_entry_point_function_name_ =
			amara_string_exhaustive_constructor("bar");
	application_zero_ = stt_application_exhaustive_constructor(
			application_zero_name_,
			application_zero_entry_point_function_name_,
			STT_APPLICATION_EXHAUSTIVE_CONSTRUCTOR_FLAG_CLI_APPLICATION);
	assertion(application_zero_ != NULL);
	assertion(application_zero_->type_ ==
			STT_APPLICATION_TYPE_CLI_APPLICATION);
	assertion(amara_string_equality(
			application_zero_->name_, application_zero_name_));
	assertion(amara_string_equality(
			application_zero_->entry_point_function_name_,
			application_zero_entry_point_function_name_));
	application_one_ = stt_application_copy_constructor(application_zero_);
	assertion(application_one_ != NULL);
	assertion(application_one_->type_ ==
			STT_APPLICATION_TYPE_CLI_APPLICATION);
	assertion(amara_string_equality(
			application_one_->name_, application_zero_name_));
	assertion(amara_string_equality(
			application_one_->entry_point_function_name_,
			application_zero_entry_point_function_name_));
	amara_string_destructor(application_zero_entry_point_function_name_);
	amara_string_destructor(application_zero_name_);
	stt_application_destructor(application_one_);
	stt_application_destructor(application_zero_);
}

void
stt_application_construct_and_destruct_tests()
{
	stt_application_construct_and_destruct_test_0();
	stt_application_construct_and_destruct_test_1();
}

void
stt_application_tests()
{
	stt_application_construct_and_destruct_tests();
}