/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: RotateThreadReadyQueue
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel veneer: RotateThreadReadyQueue. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/rotate_thread_ready_queue/RotateThreadReadyQueue.s", RotateThreadReadyQueue);

