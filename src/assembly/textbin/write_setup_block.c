/*
STATE: C_NON_MATCHING
SYMBOL: writeSetupBlock
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `writeSetupBlock`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/write_setup_block/FUN_001f82e4.s", FUN_001f82e4);
#else
#include "types.h"
/* ee-2.9-991111 matched TU. */

/* clone */



__attribute__((section(".text.setD4_CHCR")))
void FUN_001f82e4(int a0) {
    volatile int r = func_003B63A0();
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 | 0x10000;
    *(volatile unsigned int *)0x1000B000 = a0;
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 & 0xFFFEFFFF;
    if (r != 0) {
        func_003B63F0();
    }
}
#endif /* NON_MATCHING */
