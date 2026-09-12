/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: DeleteSema
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "asm.h"

/* Exact Sony EE kernel veneer: DeleteSema. */

INCLUDE_ASM("config/us/expected/asm/assembly/kernel/delete_semaphore/DeleteSema.s", DeleteSema);

