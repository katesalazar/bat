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
 * src/stt/stt_condition_subnode.h: Amara syntax tree condition subnode.
 */

/*   For `void assertion(int expression)`. */
#include "../asr/assertion.h"

/*   For own definitions. */
#include "stt_condition_subnode.h"

stt_condition_subnode *
stt_condition_subnode_copy_constructor(const stt_condition_subnode * subnode)
{
	stt_condition_subnode * returning_;

	assertion(subnode != NULL);
	assertion(subnode->condition_ != NULL);
	/* TODO missing assertions. */

	returning_ = malloc(sizeof(stt_condition_subnode));

	returning_->condition_ =
			stt_condition_copy_constructor(subnode->condition_);

	return returning_;
}

void
stt_condition_subnode_destructor(stt_condition_subnode * subnode)
{
	assertion(subnode != NULL);
	assertion(subnode->condition_ != NULL);
	/* TODO missing assertions. */
	stt_condition_destructor(subnode->condition_);
	free(subnode);
}
