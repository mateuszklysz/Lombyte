/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f97a0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f97a0/FUN_001f97a0.s", FUN_001f97a0);
#else
#include "types.h"
/* SN ProDG ee-gcc 2.95.3 matched TU. */

__attribute__((section(".text.ClearField90_13E400")))
void FUN_001f97a0(void *a0) {
    if (*(int*)((char*)a0+0x90) != 0) {
        *(int*)((char*)a0+0x90) = 0;
    }
}
#endif /* NON_MATCHING */
