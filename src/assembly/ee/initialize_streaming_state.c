/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 77.5000%
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
    ".extern D_0015EE74, 4\n"
    ".align 3\n"
    ".globl InitializeStreamingState\n"
    ".type InitializeStreamingState, @function\n"
    "InitializeStreamingState:\n"
    "lui        $2, %hi(D_0015EE8C)\n"
    "lw         $2, %lo(D_0015EE8C)($2)\n"
    "lui        $1, %hi(D_0015EF20)\n"
    "sw         $0, %lo(D_0015EF20)($1)\n"
    "jr         $31\n"
    "sw        $2, D_0015EE74\n"
    ".size InitializeStreamingState, .-InitializeStreamingState\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern u32 D_0015EE74[];
extern u32 D_0015EE8C[];
extern u32 D_0015EF20[];
void InitializeStreamingState(void) {
    D_0015EF20[0] = 0;
    D_0015EE74[0] = D_0015EE8C[0];
}
#endif /* NON_MATCHING */
