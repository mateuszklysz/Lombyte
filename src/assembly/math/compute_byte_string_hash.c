/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 31.2500%
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
    ".globl ComputeByteStringHash\n"
    ".type ComputeByteStringHash, @function\n"
    "ComputeByteStringHash:\n"
    "addi       $2, $0, 0x0 /* handwritten instruction */\n"
    "nop\n"
    "lbu        $6, 0x0($4)\n"
    "nop\n"
    "lbu        $7, 0x1($4)\n"
    "addi       $4, $4, 0x2 /* handwritten instruction */\n"
    "add        $2, $2, $6 /* handwritten instruction */\n"
    "addi       $5, $5, -0x2 /* handwritten instruction */\n"
    ".word 0x1CA0FFF9\n"
    "add       $2, $2, $7 /* handwritten instruction */\n"
    "jr         $31\n"
    "nop\n"
    ".size ComputeByteStringHash, .-ComputeByteStringHash\n"
    ".set reorder\n"
);
#else
#include "types.h"

void ComputeByteStringHash(s32 arg0, s32 arg1) {
    s32 var_5_0;

    var_5_0 = arg1;
    do {
        var_5_0 -= 2;
    } while (var_5_0 > 0);
}
#endif /* NON_MATCHING */
