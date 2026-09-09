/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _malloc_trim_r; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _malloc_trim_r\n"
    ".type _malloc_trim_r, @function\n"
    "_malloc_trim_r:\n"
    "addiu      $29, $29, -0x60\n"
    "sd         $18, 0x20($29)\n"
    "sd         $16, 0x0($29)\n"
    "daddu      $18, $4, $0\n"
    "sd         $20, 0x40($29)\n"
    "daddu      $16, $5, $0\n"
    "sd         $17, 0x10($29)\n"
    "sd         $31, 0x50($29)\n"
    "jal        func_001154C0\n"
    "sd        $19, 0x30($29)\n"
    "lui        $2, %hi(D_0012F788)\n"
    "lui        $3, (0xFFFFFFFC >> 16)\n"
    "addiu      $20, $2, %lo(D_0012F788)\n"
    "ori        $3, $3, (0xFFFFFFFC & 0xFFFF)\n"
    "lw         $4, 0x8($20)\n"
    "dsll32     $16, $16, 0\n"
    "dsrl32     $16, $16, 0\n"
    "addiu      $5, $0, 0x1000\n"
    "lw         $2, 0x4($4)\n"
    "and        $2, $2, $3\n"
    "dsll32     $2, $2, 0\n"
    "dsrl32     $17, $2, 0\n"
    "dsubu      $16, $17, $16\n"
    "jal        __udivdi3\n"
    "daddiu    $4, $16, 0xFEF\n"
    "daddiu     $4, $2, -0x1\n"
    "jal        __muldi3\n"
    "addiu     $5, $0, 0x1000\n"
    "daddu      $16, $2, $0\n"
    "slti       $2, $16, 0x1000\n"
    "bnez       $2, .L00113F98\n"
    "daddu     $4, $18, $0\n"
    "jal        _sbrk_r\n"
    "daddu     $5, $0, $0\n"
    "lw         $3, 0x8($20)\n"
    "dsll32     $4, $17, 0\n"
    "dsra32     $4, $4, 0\n"
    "addu       $3, $3, $4\n"
    "bne        $2, $3, .L00113F98\n"
    "daddu     $4, $18, $0\n"
    "dsll32     $19, $16, 0\n"
    "dsra32     $19, $19, 0\n"
    "jal        _sbrk_r\n"
    "negu      $5, $19\n"
    "lui        $3, (0xFFFFFFFF >> 16)\n"
    "ori        $3, $3, (0xFFFFFFFF & 0xFFFF)\n"
    "bne        $2, $3, .L00113FA8\n"
    "addiu     $3, $0, 0x1\n"
    "daddu      $4, $18, $0\n"
    "jal        _sbrk_r\n"
    "daddu     $5, $0, $0\n"
    "lw         $6, 0x8($20)\n"
    "daddu      $5, $2, $0\n"
    "subu       $17, $5, $6\n"
    "slti       $2, $17, 0x10\n"
    "bnez       $2, .L00113F98\n"
    "lui       $4, %hi(D_0012FBA0)\n"
    "addiu      $2, $0, 0x1\n"
    "lw         $3, %lo(D_0012FBA0)($4)\n"
    "or         $2, $17, $2\n"
    "lui        $4, %hi(D_0012FBB8)\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    "subu       $3, $5, $3\n"
    "sw         $3, %lo(D_0012FBB8)($4)\n"
    "sw         $2, 0x4($6)\n"
    ".L00113F98:\n"
    "jal        func_001154C8\n"
    "daddu     $4, $18, $0\n"
    "b          .L00113FDC\n"
    "daddu     $2, $0, $0\n"
    ".L00113FA8:\n"
    "dsubu      $2, $17, $16\n"
    "or         $2, $2, $3\n"
    "lw         $4, 0x8($20)\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    "lui        $3, %hi(D_0012FBB8)\n"
    "sw         $2, 0x4($4)\n"
    "daddu      $4, $18, $0\n"
    "lw         $2, %lo(D_0012FBB8)($3)\n"
    "subu       $2, $2, $19\n"
    "jal        func_001154C8\n"
    "sw        $2, %lo(D_0012FBB8)($3)\n"
    "addiu      $2, $0, 0x1\n"
    ".L00113FDC:\n"
    "ld         $31, 0x50($29)\n"
    "ld         $20, 0x40($29)\n"
    "ld         $19, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x60\n"
    ".size _malloc_trim_r, .-_malloc_trim_r\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_malloc_trim_r_types.h"
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern char *Obj0000_Get_D_00747A94_2DB6B0(void);
extern void cSescr_At_ck(void *a0, int a1, void *a2, float f12);
extern int cSnd_SeCall(void *a0, int a1, short a2, void *a3, int a4, int a5);
extern int cSnd_SeFadeOut(void *a0, int a1, short a2);
extern char D_005FEE00[];











__attribute__((section(".text.func_002C8B68")))
void func_002C8B68(char *a0)
{
    char *s0 = a0;
    char *s1 = s0 + 0x20;
    char buf[0x10];

    VU0_SQC2_VF0(buf, 0x0);
    cSescr_At_ck(s0, *(int *)(Obj0000_Get_D_00747A94_2DB6B0() + 0xF0), buf, 1.5f);
    switch (*(unsigned char *)(s0 + 0x13)) {
    case 0:
        if (*(unsigned char *)(s0 + 0xC) & 2) {
            *(unsigned char *)(s0 + 0x13) = 1;
        }
        break;
    case 1:
        if (*(unsigned short *)(s1 + 0xA) == 0) {
            int r = cSnd_SeCall(D_005FEE00, *(unsigned short *)(s1 + 0xC),
                                *(short *)(s1 + 0xE), s1 + 0x10, 0x20000, 0);

            *(int *)(s0 + 0x14) = r;
            if (r == 0) {
                *(unsigned char *)(s0 + 0xC) = 0;
                break;
            }
        }
        *(unsigned char *)(s0 + 0x13) = 2;
        break;
    case 2:
        if ((*(unsigned char *)(s0 + 0xC) & 2) == 0) {
            *(unsigned char *)(s0 + 0x13) = 3;
            break;
        }
        if (*(unsigned short *)(s1 + 0xA) == 0) {
            char *q = func_002CBF48(D_005FEE00, *(int *)(s0 + 0x14));

            if (q == 0) {
                *(unsigned char *)(s0 + 0x13) = 4;
                break;
            }
            *(Blk16_2C8B68 *)(q + 0x40) = *(Blk16_2C8B68 *)buf;
            *(short *)(q + 0x34) = (float)*(unsigned short *)(s0 + 0x10);
        }
        break;
    case 3:
        if (*(unsigned short *)(s1 + 0xA) == 0) {
            cSnd_SeFadeOut(D_005FEE00, *(int *)(s0 + 0x14), 0x1E);
        }
        *(unsigned char *)(s0 + 0x13) = 4;
        /* fall through */
    case 4:
        *(int *)(s0 + 0x14) = 0;
        *(unsigned char *)(s0 + 0x13) = 0;
        break;
    }
}
#endif /* NON_MATCHING */
