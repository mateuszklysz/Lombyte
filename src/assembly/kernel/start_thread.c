/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: _StartThread
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel veneer: _StartThread. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/start_thread/_StartThread.s", _StartThread);

