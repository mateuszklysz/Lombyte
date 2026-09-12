/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: _EnableIntc
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel veneer: _EnableIntc. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/enable_intc/_EnableIntc.s", _EnableIntc);

