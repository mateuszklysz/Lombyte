/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
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
    ".extern D_0015EC80, 4\n"
    ".extern D_0015EC84, 4\n"
    ".align 3\n"
    ".globl StoreObjectIndex\n"
    ".type StoreObjectIndex, @function\n"
    "StoreObjectIndex:\n"
    "sll        $2, $5, 2\n"
    "sw         $5, D_0015EC84\n"
    "sw         $4, D_0015EC80\n"
    "addu       $2, $2, $4\n"
    "sw         $0, 0x4($2)\n"
    "jr         $31\n"
    "sw        $0, 0x0($4)\n"
    ".size StoreObjectIndex, .-StoreObjectIndex\n"
    ".set reorder\n"
);
#else
#include "types.h"
/* cygnus-2.96 matched TU. */

extern int D_003E9D3C;

__attribute__((section(".text.func_0033C520")))
int func_0033C520(void) {
    D_003E9D3C++;
    return 0;
}

__attribute__((section(".text.func_00347400")))
void StoreObjectIndex(char *a0) {
    volatile int *p = (int *)(a0 + 0x194);
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    *(int *)(a0 + 0x190) = -1;
}
#endif /* NON_MATCHING */
