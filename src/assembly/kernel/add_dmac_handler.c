/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: AddDmacHandler
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel veneer: AddDmacHandler. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/add_dmac_handler/AddDmacHandler.s", AddDmacHandler);

