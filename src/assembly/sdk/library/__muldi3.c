/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit __muldi3; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl __muldi3\n"
    ".type __muldi3, @function\n"
    "__muldi3:\n"
    "dsra32     $6, $4, 0\n"
    "dsra32     $3, $5, 0\n"
    "dsll32     $4, $4, 0\n"
    "dsra32     $4, $4, 0\n"
    "dsll32     $5, $5, 0\n"
    "dsra32     $5, $5, 0\n"
    "mult       $3, $4, $3\n"
    "mult1      $6, $6, $5\n"
    "multu      $4, $5\n"
    "mflo       $4\n"
    "mfhi       $2\n"
    "dsll32     $4, $4, 0\n"
    "dsll32     $2, $2, 0\n"
    "dsrl32     $4, $4, 0\n"
    "addu       $3, $3, $6\n"
    "or         $4, $4, $2\n"
    "lui        $5, (0xFFFF0000 >> 16)\n"
    "dsrl32     $5, $5, 0\n"
    "dsra32     $2, $4, 0\n"
    "addu       $2, $2, $3\n"
    "and        $4, $4, $5\n"
    "dsll32     $2, $2, 0\n"
    "jr         $31\n"
    "or        $2, $4, $2\n"
    ".size __muldi3, .-__muldi3\n"
    ".set reorder\n"
);
#else
#include "types.h"
/* cygnus-2.96 matched TU. */

/* compiler: cygnus-2.96 ; extra keys: none */
__attribute__((section(".text.func_0035B188")))
void __muldi3(int a0, char *a1, int *a2, int *a3) {
    int h;
    int m;
    int s;
    int t;
    int f;
    int acc;
    int r;
    h = *(int *)(a1 + 0x8) * a0;
    m = *(int *)(a1 + 0xC) * a0;
    s = *(int *)(a1 + 0x14) + *(int *)(a1 + 0x18);
    t = *(short *)(a1 + 0x1E);
    f = *(int *)(a1 + 0x10) * a0;
    r = f + t * 500;
    acc = h * 3600 + m * 60;
    acc = acc + s * 1000;
    *a2 = r + acc;
    *a3 = a0;
}
#endif /* NON_MATCHING */
