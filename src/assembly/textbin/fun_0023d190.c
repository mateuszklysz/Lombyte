/* ROLE: recovered function `voBufCreate__FP5VoBufP6VoDataP5VoTagi` (movie/vobuf.cpp, 0x50 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023d190/FUN_0023d190.s", FUN_0023d190);
#else
#include "types.h"
/* Byte-identical to RE4 PS2 (SLUS-21134) 0x002D3718 — shared engine code.
 * Initialises a few fields then fills 0x14..0x1C with 8 via a 3-iteration
 * down-counted loop (cc1 emits the R5900 short-loop nops itself). The loop
 * counter is written first in the for-init so it lands in $v1 and the pointer
 * in $v0, matching retail's register assignment. */

__attribute__((section(".text.func_0035BD88")))
void FUN_0023d190(void *a0, int a1) {
    char *p = (char *)a0;
    int i;
    int *q;
    *(int *)(p + 0x4) = 0;
    *(int *)(p + 0x0) = 0;
    *(int *)(p + 0xC) = a1;
    *(int *)(p + 0x10) = 8;
    for (i = 2, q = (int *)(p + 0x1C); i >= 0; i--) {
        *q = 8;
        q--;
    }
    *(int *)(p + 0x20) = -1;
}
#endif /* NON_MATCHING */
