/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: _iWakeupThread
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel veneer: _iWakeupThread. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/i_wakeup_thread/_iWakeupThread.s", _iWakeupThread);

