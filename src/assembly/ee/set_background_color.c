/* ROLE: recovered whole function `SetBackgroundColor__Fiii` (game/framebuf.cpp). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 46.5000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl PackDmaTag\n"
    ".type PackDmaTag, @function\n"
    "PackDmaTag:\n"
    "dsll       $5, $5, 8\n"
    "dsll       $6, $6, 16\n"
    "or         $5, $4, $5\n"
    "ori        $3, $0, 0x8000\n"
    "dsll       $3, $3, 16\n"
    "or         $5, $5, $6\n"
    "lui        $2, %hi(D_00152078)\n"
    "or         $5, $5, $3\n"
    "jr         $31\n"
    "sd        $5, %lo(D_00152078)($2)\n"
    ".size PackDmaTag, .-PackDmaTag\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern u8 D_00152078[];
void PackDmaTag(s32 arg0, s64 arg1, s64 arg2) {
    D_00152078[0] = arg0 | (arg1 << 8) | (arg2 << 0x10) | (0x8000 << 0x10);
}
#endif /* NON_MATCHING */

