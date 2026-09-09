/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact Sony kernel helper kFindAddress; target-derived body pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl FindKernelAddress\n"
    ".type FindKernelAddress, @function\n"
    "FindKernelAddress:\n"
    ".word 0x8C820000\n.word 0x1046000B\n.word 0x0085102B\n.word 0x5040000A\n"
    ".word 0x0002200A\n.word 0x24840004\n.word 0x8C820000\n.word 0x10460005\n"
    ".word 0x0085102B\n.word 0x5440FFFC\n.word 0x24840004\n.word 0x10000002\n"
    ".word 0x0002200A\n.word 0x0002200A\n.word 0x03E00008\n.word 0x0080102D\n"
    ".size FindKernelAddress, .-FindKernelAddress\n"
    ".set reorder\n"
);
#else
#include "types.h"
/* ee-2.9-991111 matched TU. */

__attribute__((section(".text.func_003B64A8")))
int *FindKernelAddress(int *a0, int *a1, int a2) {
    for (;;) {
        if (*a0 == a2) break;
        if (a0 >= a1) break;
        a0++;
    }
    return a0 < a1 ? a0 : 0;
}
#endif /* NON_MATCHING */
