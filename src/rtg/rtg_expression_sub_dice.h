/*
 * Copyright 2018-2019 Mercedes Catherine Salazar
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
 * src/rtg/rtg_expression_sub_dice.h: Amara run time graph dice type of
 * expression.
 */

#ifndef __AMARA__RUN_TIME_GRAPH__EXPRESSION_SUB_DICE__H__
#define __AMARA__RUN_TIME_GRAPH__EXPRESSION_SUB_DICE__H__

/*   For `typedef struct natural { ... } natural`. */
#include "../brt/brt_forward_declarations.h"

/*   For `stt_expression_sub_dice`. */
#include "../stt/stt_expression_sub_dice.h"

typedef struct rtg_expression_sub_dice {

	natural * left_hand_side_natural_;

	natural * right_hand_side_natural_;
} rtg_expression_sub_dice
;

rtg_expression_sub_dice *
rtg_expression_sub_dice_copy_constructor(
		const rtg_expression_sub_dice * expression_sub_dice)
__attribute__((warn_unused_result))
;

/**  Transformation constructor. */
rtg_expression_sub_dice *
rtg_expression_sub_dice_out_of_stt_expression_sub_dice(
		const stt_expression_sub_dice * expression_sub_dice)
__attribute__((warn_unused_result))
;

void
rtg_expression_sub_dice_destructor(
		rtg_expression_sub_dice * expression_sub_dice)
;

#ifndef NDEBUG

void
rtg_expression_sub_dice_assert_validity(
		const rtg_expression_sub_dice * expression_sub_dice)
;

#endif

#endif
