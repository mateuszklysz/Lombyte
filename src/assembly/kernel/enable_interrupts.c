/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: EnableInterrupts
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* CP0 interrupt-state veneer; the exact body is supplied by the EE kernel. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/enable_interrupts/EnableInterrupts.s", EnableInterrupts);
