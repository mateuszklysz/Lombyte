/* ROLE: recovered function `endDisplay__Fv` (movie/disp.cpp) starts here; recovered extent unknown. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 58.7500%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Clear the stage-state flag consumed by the menu transition path. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl ClearStageStateFlag\n"
    ".type ClearStageStateFlag, @function\n"
    "ClearStageStateFlag:\n"
    "lui $1, %hi(D_001611E0)\n"
    "sw $0, %lo(D_001611E0)($1)\n"
    "jr $31\n"
    "nop\n"
    ".size ClearStageStateFlag, .-ClearStageStateFlag\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern u32 D_001611E0[];
void ClearStageStateFlag(void) {
    D_001611E0[0] = 0;
}
#endif /* NON_MATCHING */
