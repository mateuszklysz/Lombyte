/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: JumpToRfuDispatch
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact 8-byte veneer into the shared RFU dispatch body. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/jump_to_rfu_dispatch/JumpToRfuDispatch.s", JumpToRfuDispatch);
