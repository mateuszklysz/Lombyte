/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: RemoveDmacHandler
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel veneer: RemoveDmacHandler. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/remove_dmac_handler/RemoveDmacHandler.s", RemoveDmacHandler);

