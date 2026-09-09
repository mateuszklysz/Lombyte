/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 53.2500%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit dptoul; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl dptoul\n"
    ".type dptoul, @function\n"
    "dptoul:\n"
    "addiu      $29, $29, -0x40\n"
    "sd         $4, 0x20($29)\n"
    "daddu      $5, $29, $0\n"
    "sd         $31, 0x30($29)\n"
    "jal        __unpack_d\n"
    "addiu     $4, $29, 0x20\n"
    "lw         $3, 0x0($29)\n"
    "xori       $2, $3, 0x2\n"
    "beqz       $2, .L00120300\n"
    "sltiu     $2, $3, 0x2\n"
    "beqz       $2, .L00120308\n"
    "lw        $2, 0x4($29)\n"
    ".L00120300:\n"
    "b          .L00120364\n"
    "daddu     $2, $0, $0\n"
    ".L00120308:\n"
    "bnez       $2, .L00120364\n"
    "daddu     $2, $0, $0\n"
    "xori       $2, $3, 0x4\n"
    "beqz       $2, .L0012032C\n"
    "lw        $4, 0x8($29)\n"
    "bltz       $4, .L00120300\n"
    "slti      $2, $4, 0x20\n"
    "bnel       $2, $0, .L00120338\n"
    "slti      $2, $4, 0x3D\n"
    ".L0012032C:\n"
    "lui        $2, (0xFFFFFFFF >> 16)\n"
    "b          .L00120364\n"
    "ori       $2, $2, (0xFFFFFFFF & 0xFFFF)\n"
    ".L00120338:\n"
    "bnez       $2, .L00120350\n"
    "addiu     $3, $0, 0x3C\n"
    "ld         $2, 0x10($29)\n"
    "addiu      $3, $4, -0x3C\n"
    "b          .L0012035C\n"
    "dsllv     $2, $2, $3\n"
    ".L00120350:\n"
    "ld         $2, 0x10($29)\n"
    "subu       $3, $3, $4\n"
    "dsrlv      $2, $2, $3\n"
    ".L0012035C:\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    ".L00120364:\n"
    "ld         $31, 0x30($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x40\n"
    ".size dptoul, .-dptoul\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 __unpack_d();
s64 dptoul(s64 arg0) {    s32 sp0;
u8 sp_slot[0x40];    u64 sp10;
    s32 sp4;
    s32 sp8;
    s64 sp20;
    s64 var_2_20;
    u64 var_2_38;

    sp20 = arg0;
    __unpack_d(&sp20, sp_slot);
    if ((sp0 ^ 2) == 0) {
        goto block_2;
    }
    if (sp0 >= 2U) {
        goto block_3;
    }
block_2:
    return 0;
block_3:
    var_2_20 = 0;
    if (sp4 != 0) {
        goto block_14;
    }
    if ((sp0 ^ 4) == 0) {
        goto block_9;
    }
    if (sp8 < 0) {
        goto block_2;
    }
    if (sp8 >= 0x20) {
        goto block_8;
    }
    goto block_10;
block_8:
block_9:
    return 0xFFFFFFFF;
block_10:
    if (sp8 < 0x3D) {
        goto block_12;
    }
    var_2_38 = sp10 << (sp8 - 0x3C);
    goto block_13;
block_12:
    var_2_38 = sp10 >> (0x3C - sp8);
block_13:
    var_2_20 = (s64) (var_2_38 << 0x20) >> 0x20;
block_14:
    return var_2_20;
}
#endif /* NON_MATCHING */
