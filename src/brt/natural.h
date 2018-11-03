/*
 * Copyright 2018 Mercedes Catherine Salazar
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
 * src/brt/natural.h: Algebraic natural number class.
 */

#ifndef __AMARA__BASIC_ARITHMETIC__NATURAL__H__
#define __AMARA__BASIC_ARITHMETIC__NATURAL__H__

/*   For `typedef struct natural { ... } natural;`. */
#include "brt_forward_declarations.h"

/* For `typedef struct stt_node { ... } stt_node`. */
#include "../stt/stt_node.h"

natural *
natural_default_constructor(void)
__attribute__((warn_unused_result))
;

natural *
natural_exhaustive_constructor(const amara_string * raw)
__attribute__((warn_unused_result))
;

natural *
natural_copy_constructor(const natural * natural)
__attribute__((warn_unused_result))
;

void
natural_destructor(natural * natural)
;

void
natural_copy_unsigned_int_into_natural(
		natural * destination,
		const unsigned int source_unsigned_int)
;

void
natural_copy_from_unsigned_int(
		natural * destination,
		const unsigned int source_unsigned_int)
;

void
natural_assert_validity(const natural * natural)
;

/*   Asserts that the string represents a valid and canonical raw
 * natural.
 *   Valid: only digits.
 *   Canonical: not left padded by zeros. */
void
assert_valid_raw_natural(const amara_string * raw_natural)
;

#define FIT_RAW_NATURAL_IN_UNSIGNED_CHAR_RET_STATUS_INVALID          0x00
#define FIT_RAW_NATURAL_IN_UNSIGNED_CHAR_RET_STATUS_ERR_NOT_FITTING  0x01
#define FIT_RAW_NATURAL_IN_UNSIGNED_CHAR_RET_STATUS_OK               0xFF
#define FIT_RAW_NATURAL_IN_UNSIGNED_CHAR_RET_STATUS_ERR_DOES_NOT_FIT \
		FIT_RAW_NATURAL_IN_UNSIGNED_CHAR_RET_STATUS_ERR_NOT_FITTING

typedef struct fit_raw_natural_in_unsigned_char_ret {
	unsigned char status;
	unsigned char value;
} fit_raw_natural_in_unsigned_char_ret;

/*   Input `valid_raw_natural` is expected to be valid and canonical,
 * i.e. only digits and no unnecessary leading zeroes. */
fit_raw_natural_in_unsigned_char_ret *
fit_raw_natural_in_unsigned_char(const amara_string * valid_raw_natural)
__attribute__((warn_unused_result));

void
fit_raw_natural_in_unsigned_char_ret_destructor(
		fit_raw_natural_in_unsigned_char_ret * ret)
;

#define FIT_RAW_NATURAL_IN_UNSIGNED_SHORT_RET_STATUS_INVALID          0x00
#define FIT_RAW_NATURAL_IN_UNSIGNED_SHORT_RET_STATUS_ERR_NOT_FITTING  0x01
#define FIT_RAW_NATURAL_IN_UNSIGNED_SHORT_RET_STATUS_OK               0xFF
/* #define FIT_RAW_NATURAL_IN_UNSIGNED_SHORT_RET_STATUS_ERR_DOES_NOT_FIT \
		FIT_RAW_NATURAL_IN_UNSIGNED_SHORT_RET_STATUS_ERR_NOT_FITTING */

typedef struct fit_raw_natural_in_unsigned_short_ret {
	unsigned char status;
	unsigned short value;
} fit_raw_natural_in_unsigned_short_ret;

/*   Input `valid_raw_natural` is expected to be valid and canonical,
 * i.e. only digits and no unnecessary leading zeroes. */
fit_raw_natural_in_unsigned_short_ret *
fit_raw_natural_in_unsigned_short(const amara_string * valid_raw_natural)
__attribute__((warn_unused_result))
;

void
fit_raw_natural_in_unsigned_short_ret_destructor(
		fit_raw_natural_in_unsigned_short_ret * ret)
;

amara_string *
copy_unsigned_int_into_raw_natural(const unsigned int input)
__attribute__((warn_unused_result))
;

amara_string *
copy_pointer_to_unsigned_int_into_raw_natural(const unsigned int * input)
__attribute__((warn_unused_result))
;

amara_string *
copy_unsigned_char_into_raw_natural(unsigned char input)
__attribute__((warn_unused_result))
;

amara_string *
copy_unsigned_short_into_raw_natural(unsigned short input)
__attribute__((warn_unused_result))
;

/*   Shoud return negative integer, zero, or positive integer, as the
 * first argument is less than, equal, or greater than the second. Both
 * arguments are valid canonical raw natural numbers. */
signed char
safe_arguments_natural_raw_comparison(
		const amara_string * raw_natural_zero,
		const amara_string * raw_natural_one)
__attribute__((warn_unused_result))
;

/*   Non destructive in its arguments.
 *   `node_zero` minus `node_one`. */
struct stt_node *
simplify_natural_literal_nodes_substraction(
		const struct stt_node * node_zero,
		const struct stt_node * node_one)
__attribute__((warn_unused_result))
;

/*   Non destructive in its arguments.
 *   `raw_natural_zero` divided by `raw_natural_one`. */
amara_string *
raw_naturals_division_as_raw_natural(
		const amara_string * raw_natural_zero,
		const amara_string * raw_natural_one)
__attribute__((warn_unused_result));

/*   Non destructive in its arguments.
 *   `node_zero` divided by `node_one`. */
struct stt_node *
simplify_natural_literal_nodes_multiplication(
		const struct stt_node * node_zero,
		const struct stt_node * node_one)
__attribute__((warn_unused_result))
;

/*   Non destructive in its arguments.
 *   `node_zero` divided by `node_one`. */
struct stt_node *
simplify_natural_literal_nodes_division(
		const struct stt_node * node_zero,
		const struct stt_node * node_one)
__attribute__((warn_unused_result))
;

#endif
