/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: GsPutIMR
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel veneer: GsPutIMR. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/gs_put_imr/GsPutIMR.s", GsPutIMR);

