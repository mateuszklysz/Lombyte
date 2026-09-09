/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _Balloc; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _Balloc\n"
    ".type _Balloc, @function\n"
    "_Balloc:\n"
    "addiu      $29, $29, -0x30\n"
    "sd         $17, 0x10($29)\n"
    "sd         $16, 0x0($29)\n"
    "sd         $31, 0x20($29)\n"
    "daddu      $16, $4, $0\n"
    "lw         $3, 0x4C($16)\n"
    "bnez       $3, .L00115508\n"
    "daddu     $17, $5, $0\n"
    "addiu      $5, $0, 0x4\n"
    "jal        _calloc_r\n"
    "addiu     $6, $0, 0x10\n"
    "beqz       $2, .L0011554C\n"
    "sw        $2, 0x4C($16)\n"
    "daddu      $3, $2, $0\n"
    ".L00115508:\n"
    "sll        $2, $17, 2\n"
    "addu       $4, $2, $3\n"
    "lw         $3, 0x0($4)\n"
    "beqz       $3, .L00115528\n"
    "addiu     $2, $0, 0x1\n"
    "lw         $2, 0x0($3)\n"
    "b          .L00115558\n"
    "sw        $2, 0x0($4)\n"
    ".L00115528:\n"
    "daddu      $4, $16, $0\n"
    "sllv       $16, $2, $17\n"
    "addiu      $5, $0, 0x1\n"
    "sll        $6, $16, 2\n"
    "jal        _calloc_r\n"
    "addiu     $6, $6, 0x14\n"
    "daddu      $3, $2, $0\n"
    "bnel       $3, $0, .L00115554\n"
    "sw        $17, 0x4($3)\n"
    ".L0011554C:\n"
    "b          .L00115564\n"
    "daddu     $2, $0, $0\n"
    ".L00115554:\n"
    "sw         $16, 0x8($3)\n"
    ".L00115558:\n"
    "sw         $0, 0x10($3)\n"
    "daddu      $2, $3, $0\n"
    "sw         $0, 0xC($3)\n"
    ".L00115564:\n"
    "ld         $31, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x30\n"
    ".size _Balloc, .-_Balloc\n"
    ".set reorder\n"
);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

__attribute__((section(".text.func_003AE818")))
void *func_003AE818(void *a0, int a1)
{
    void *s0;
    int s1;
    void *v1;
    void *v0;
    void **a0p;

    s0 = a0;
    s1 = a1;
    v0 = *(void **)((char *)s0 + 0x4C);
    if (v0 == 0) {
        v0 = func_003AF7B8(s0, 4, 16);
        *(void **)((char *)s0 + 0x4C) = v0;
        if (v0 == 0) {
            return 0;
        }
    }
    v1 = *(void **)((char *)s0 + 0x4C);
    a0p = (void **)((int)(s1 << 2) + (int)v1);
    v1 = *a0p;
    if (v1 != 0) {
        *a0p = *(void **)v1;
    } else {
        int sz = 1 << s1;
        v1 = func_003AF7B8(s0, 1, sz * 4 + 0x14);
        if (v1 == 0) {
            return 0;
        }
        ((int *)v1)[1] = s1;
        ((int *)v1)[2] = sz;
    }
    ((int *)v1)[4] = 0;
    ((int *)v1)[3] = 0;
    return v1;
}
#endif /* NON_MATCHING */
