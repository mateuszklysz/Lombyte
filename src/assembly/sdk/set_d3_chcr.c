/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 9.5600%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact Sony DMAC helper setD3_CHCR; target-derived body pending SDK source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl SetD3Chcr\n"
    ".type SetD3Chcr, @function\n"
    "SetD3Chcr:\n"
    ".word 0x27BDFFE0\n"
    ".word 0xFFB00000\n"
    ".word 0xFFBF0010\n"
    "jal DIntr\n"
    ".word 0x0080802D\n"
    ".word 0x3C051000\n"
    ".word 0x3C070001\n"
    ".word 0x34A5F520\n"
    ".word 0x3C061000\n"
    ".word 0x8CA20000\n"
    ".word 0x34C6F590\n"
    ".word 0x3C031000\n"
    ".word 0x3C04FFFE\n"
    ".word 0x00471025\n"
    ".word 0x3463B000\n"
    ".word 0xACC20000\n"
    ".word 0x3484FFFF\n"
    ".word 0xAC700000\n"
    ".word 0xDFBF0010\n"
    ".word 0x8CA20000\n"
    ".word 0xDFB00000\n"
    ".word 0x00441024\n"
    ".word 0xACC20000\n"
    "j EnableInterrupts\n"
    ".word 0x27BD0020\n"
    ".size SetD3Chcr, .-SetD3Chcr\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 DIntr();
void SetD3Chcr(s32 arg0) {
    DIntr();
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 | 0x10000;
    *(s32 *)0x1000B000 = arg0;
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 & 0xFFFEFFFF;
    EnableInterrupts(0xFFFEFFFF, 0x1000F520, 0x1000F590, 0x10000);
}
#endif /* NON_MATCHING */
