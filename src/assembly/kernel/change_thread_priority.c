/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: ChangeThreadPriority
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel veneer: ChangeThreadPriority. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/change_thread_priority/ChangeThreadPriority.s", ChangeThreadPriority);

