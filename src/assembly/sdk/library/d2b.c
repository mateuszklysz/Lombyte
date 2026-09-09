/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _d2b; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _d2b\n"
    ".type _d2b, @function\n"
    "_d2b:\n"
    "addiu      $29, $29, -0x80\n"
    "sd         $16, 0x10($29)\n"
    "daddu      $16, $5, $0\n"
    "sd         $21, 0x60($29)\n"
    "sd         $20, 0x50($29)\n"
    "daddu      $21, $7, $0\n"
    "sd         $19, 0x40($29)\n"
    "daddu      $20, $6, $0\n"
    "sd         $18, 0x30($29)\n"
    "sd         $17, 0x20($29)\n"
    "sd         $31, 0x70($29)\n"
    "jal        _Balloc\n"
    "addiu     $5, $0, 0x1\n"
    "daddu      $17, $2, $0\n"
    "dsra32     $5, $16, 0\n"
    "lui        $2, (0x7FFFFFFF >> 16)\n"
    "lui        $3, (0xFFFFF >> 16)\n"
    "ori        $2, $2, (0x7FFFFFFF & 0xFFFF)\n"
    "lui        $4, (0xFFFF0000 >> 16)\n"
    "dsrl32     $4, $4, 0\n"
    "and        $2, $5, $2\n"
    "and        $16, $16, $4\n"
    "dsll32     $2, $2, 0\n"
    "ori        $3, $3, (0xFFFFF & 0xFFFF)\n"
    "or         $16, $16, $2\n"
    "and        $5, $5, $3\n"
    "addiu      $19, $17, 0x14\n"
    "dsrl32     $18, $16, 20\n"
    "beqz       $18, .L00115F6C\n"
    "sw        $5, 0x4($29)\n"
    "lui        $2, (0x100000 >> 16)\n"
    "or         $2, $5, $2\n"
    "sw         $2, 0x4($29)\n"
    ".L00115F6C:\n"
    "dsll32     $2, $16, 0\n"
    "dsra32     $2, $2, 0\n"
    "beqz       $2, .L00115FDC\n"
    "sw        $2, 0x0($29)\n"
    "jal        _lo0bits\n"
    "daddu     $4, $29, $0\n"
    "daddu      $5, $2, $0\n"
    "beqz       $5, .L00115FB4\n"
    "lw        $2, 0x4($29)\n"
    "negu       $4, $5\n"
    "lw         $3, 0x0($29)\n"
    "sllv       $2, $2, $4\n"
    "or         $3, $3, $2\n"
    "sw         $3, 0x14($17)\n"
    "lw         $2, 0x4($29)\n"
    "srlv       $2, $2, $5\n"
    "b          .L00115FBC\n"
    "sw        $2, 0x4($29)\n"
    ".L00115FB4:\n"
    "lw         $2, 0x0($29)\n"
    "sw         $2, 0x14($17)\n"
    ".L00115FBC:\n"
    "lw         $2, 0x4($29)\n"
    "addiu      $3, $0, 0x1\n"
    "addiu      $4, $0, 0x2\n"
    "movn       $3, $4, $2\n"
    "sw         $2, 0x4($19)\n"
    "daddu      $16, $3, $0\n"
    "b          .L00115FFC\n"
    "sw        $3, 0x10($17)\n"
    ".L00115FDC:\n"
    "ori        $4, $29, 0x4\n"
    "jal        _lo0bits\n"
    "addiu     $16, $0, 0x1\n"
    "lw         $4, 0x4($29)\n"
    "addiu      $3, $0, 0x1\n"
    "sw         $3, 0x10($17)\n"
    "addiu      $5, $2, 0x20\n"
    "sw         $4, 0x14($17)\n"
    ".L00115FFC:\n"
    "beqz       $18, .L00116018\n"
    "addiu     $2, $5, -0x433\n"
    "addiu      $3, $0, 0x35\n"
    "addu       $2, $18, $2\n"
    "subu       $3, $3, $5\n"
    "b          .L00116038\n"
    "sw        $2, 0x0($20)\n"
    ".L00116018:\n"
    "addiu      $3, $5, -0x432\n"
    "sll        $2, $16, 2\n"
    "sw         $3, 0x0($20)\n"
    "addu       $2, $2, $19\n"
    "jal        _hi0bits\n"
    "lw        $4, -0x4($2)\n"
    "sll        $3, $16, 5\n"
    "subu       $3, $3, $2\n"
    ".L00116038:\n"
    "sw         $3, 0x0($21)\n"
    "daddu      $2, $17, $0\n"
    "ld         $31, 0x70($29)\n"
    "ld         $21, 0x60($29)\n"
    "ld         $20, 0x50($29)\n"
    "ld         $19, 0x40($29)\n"
    "ld         $18, 0x30($29)\n"
    "ld         $17, 0x20($29)\n"
    "ld         $16, 0x10($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x80\n"
    ".size _d2b, .-_d2b\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_d2b_types.h"
#include "types.h"
/* sn-2.95.3-136 matched TU. */

/* newlib mprec __d2b (0x003AF570).  Double -> bignum. */


typedef union { double d; unsigned int i[2]; } U;

extern _Bigint *func_003AE818(void *ptr, int k);  /* _Balloc   */
extern int func_003AEBC0(unsigned int *y);        /* __lo0bits */
extern int func_003AEB38(unsigned int x);         /* __hi0bits */

#define Frac_mask 0xfffff
#define Exp_msk1  0x100000
#define Exp_shift 20
#define Bias      0x3ff
#define P         53

__attribute__((section(".text.func_003AF570")))
_Bigint *func_003AF570(void *ptr, double _d, int *e, int *bits)
{
    _Bigint *b;
    int de, k, i;
    unsigned int *x, y, z;
    U d;

    d.d = _d;
    b = func_003AE818(ptr, 1);
    x = b->_x;
    z = d.i[1] & Frac_mask;
    d.i[1] &= 0x7fffffff;
    if ((de = (int)(d.i[1] >> Exp_shift)) != 0) {
        z |= Exp_msk1;
    }
    if ((y = d.i[0]) != 0) {
        if ((k = func_003AEBC0(&y)) != 0) {
            x[0] = y | (z << (32 - k));
            z >>= k;
        } else {
            x[0] = y;
        }
        i = b->_wds = (x[1] = z) ? 2 : 1;
    } else {
        k = func_003AEBC0(&z);
        x[0] = z;
        i = b->_wds = 1;
        k += 32;
    }
    if (de) {
        *e = de - Bias - (P - 1) + k;
        *bits = P - k;
    } else {
        *e = de - Bias - (P - 1) + 1 + k;
        *bits = 32 * i - func_003AEB38(x[i - 1]);
    }
    return b;
}
#endif /* NON_MATCHING */
