/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: _InitTLB
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel veneer: _InitTLB. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/init_tlb/_InitTLB.s", _InitTLB);

