/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: JumpToRfuStatus
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* ROLE: recovered function `_exit` starts here; this unit covers only its beginning. */

/* Exact low-cost entry recovered with target symbolic relocations. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/jump_to_rfu_status/JumpToRfuStatus.s", JumpToRfuStatus);
