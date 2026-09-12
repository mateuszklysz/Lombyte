/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: SleepThread
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel veneer: SleepThread. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/sleep_thread/SleepThread.s", SleepThread);

