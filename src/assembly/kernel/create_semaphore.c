/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: CreateSema
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel veneer: CreateSema. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/create_semaphore/CreateSema.s", CreateSema);

