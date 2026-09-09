/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 67.8571%
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
    ".extern D_0015F5B0, 4\n"
    ".align 3\n"
    ".globl InitializeGlobalStateEntry\n"
    ".type InitializeGlobalStateEntry, @function\n"
    "InitializeGlobalStateEntry:\n"
    "addiu      $2, $0, 0x1\n"
    "lui        $1, %hi(D_0015F600)\n"
    "sw         $4, %lo(D_0015F600)($1)\n"
    "lui        $1, %hi(D_0015F618)\n"
    "sw         $2, %lo(D_0015F618)($1)\n"
    "jr         $31\n"
    "sw        $2, D_0015F5B0\n"
    ".size InitializeGlobalStateEntry, .-InitializeGlobalStateEntry\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 D_0015F5B0;
extern s32 D_0015F600;
extern s32 D_0015F618;
void InitializeGlobalStateEntry(s32 arg0) {
    D_0015F600 = arg0;
    D_0015F618 = 1;
    D_0015F5B0 = 1;
}
#endif /* NON_MATCHING */
