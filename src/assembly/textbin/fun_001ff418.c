/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001ff418
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ff418/FUN_001ff418.s", FUN_001ff418);
#else
#include "types.h"
/* RE4 PS2 byte-identical (SLUS-21134 @ 0x002C9CC8). Copies fields a0->a1; tail
   stores zero at 0x1E then the sign-extended byte a0+0x54 at 0x1C. */
__attribute__((section(".text.func_00352DC0")))
void FUN_001ff418(int a0, int a1) {
    *(int *)(a1 + 0x0)  = *(int *)(a0 + 0x10);
    *(int *)(a1 + 0x4)  = *(int *)(a0 + 0x1C);
    *(int *)(a1 + 0x8)  = *(int *)(a0 + 0x20);
    *(int *)(a1 + 0xC)  = *(int *)(a0 + 0x24);
    *(int *)(a1 + 0x10) = *(int *)(a0 + 0x28);
    *(int *)(a1 + 0x14) = *(int *)(a0 + 0x2C);
    *(int *)(a1 + 0x18) = *(int *)(a0 + 0x14);
    *(short *)(a1 + 0x1C) = (signed char)*(unsigned char *)(a0 + 0x54);
    *(short *)(a1 + 0x1E) = 0;
}
#endif /* NON_MATCHING */
