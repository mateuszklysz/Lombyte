/* ROLE: recovered whole function `readBufBeginGet__FP7ReadBufPPUc` (movie/readbuf.cpp). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/read_buf_begin_get/FUN_0023b9d8.s", FUN_0023b9d8);
#else
#include "types.h"
/* Byte-identical to RE4 PS2 (SLUS-21134) 0x0029EEF0 — shared engine code.
 * mod = a0->0x24 % a0->0x18; stores mod+1 back to 0x24; returns
 * a0->0x14 + (mod << 6). The return value is computed before the store-back so
 * the shift is emitted before the increment, matching retail's scheduling. */

__attribute__((section(".text.func_003B2B90")))
int FUN_0023b9d8(void *a0) {
    int *p = (int *)a0;
    int mod = p[9] % p[6];
    int r = p[5] + (mod << 6);
    p[9] = mod + 1;
    return r;
}
#endif /* NON_MATCHING */
