/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 47.2973%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit dptoli; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl dptoli\n"
    ".type dptoli, @function\n"
    "dptoli:\n"
    "addiu      $29, $29, -0x40\n"
    "sd         $4, 0x20($29)\n"
    "daddu      $5, $29, $0\n"
    "sd         $31, 0x30($29)\n"
    "jal        __unpack_d\n"
    "addiu     $4, $29, 0x20\n"
    "lw         $3, 0x0($29)\n"
    "xori       $2, $3, 0x2\n"
    "beqz       $2, .L00120268\n"
    "sltiu     $2, $3, 0x2\n"
    "beqz       $2, .L00120270\n"
    "xori      $2, $3, 0x4\n"
    ".L00120268:\n"
    "b          .L001202C0\n"
    "daddu     $2, $0, $0\n"
    ".L00120270:\n"
    "beqz       $2, .L00120288\n"
    "lw        $4, 0x8($29)\n"
    "bltz       $4, .L00120268\n"
    "slti      $2, $4, 0x1F\n"
    "bnez       $2, .L001202A0\n"
    "addiu     $3, $0, 0x3C\n"
    ".L00120288:\n"
    "lw         $3, 0x4($29)\n"
    "lui        $2, (0x7FFFFFFF >> 16)\n"
    "ori        $2, $2, (0x7FFFFFFF & 0xFFFF)\n"
    "lui        $4, (0x80000000 >> 16)\n"
    "b          .L001202C0\n"
    "movn      $2, $4, $3\n"
    ".L001202A0:\n"
    "ld         $2, 0x10($29)\n"
    "subu       $3, $3, $4\n"
    "dsrlv      $2, $2, $3\n"
    "lw         $4, 0x4($29)\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    "negu       $3, $2\n"
    "movn       $2, $3, $4\n"
    ".L001202C0:\n"
    "ld         $31, 0x30($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x40\n"
    ".size dptoli, .-dptoli\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 __unpack_d();
s64 dptoli(s64 arg0) {    s32 sp0;
u8 sp_slot[0x40];    u64 sp10;
    s32 sp4;
    s32 sp8;
    s64 sp20;
    s64 temp_2_38;

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
    if ((sp0 ^ 4) == 0) {
        goto block_6;
    }
    if (sp8 < 0) {
        goto block_2;
    }
    if (sp8 < 0x1F) {
        goto block_7;
    }
block_6:
    return (sp4 != 0) ? 0x80000000 : 0x7FFFFFFF;
block_7:
    temp_2_38 = (s64) ((sp10 >> (0x3C - sp8)) << 0x20) >> 0x20;
    return (sp4 != 0) ? -temp_2_38 : temp_2_38;
}
#endif /* NON_MATCHING */
