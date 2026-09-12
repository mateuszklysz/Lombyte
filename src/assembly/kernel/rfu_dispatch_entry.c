/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: RfuDispatchEntry
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact low-cost entry recovered with target symbolic relocations. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/rfu_dispatch_entry/RfuDispatchEntry.s", RfuDispatchEntry);
