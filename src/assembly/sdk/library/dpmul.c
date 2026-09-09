/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 39.1353%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit dpmul; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl dpmul\n"
    ".type dpmul, @function\n"
    "dpmul:\n"
    "addiu      $29, $29, -0x100\n"
    "sd         $4, 0x60($29)\n"
    "sd         $5, 0x68($29)\n"
    "addiu      $4, $29, 0x60\n"
    "sd         $23, 0xE0($29)\n"
    "daddu      $5, $29, $0\n"
    "sd         $16, 0x70($29)\n"
    "sd         $31, 0xF0($29)\n"
    "sd         $22, 0xD0($29)\n"
    "sd         $21, 0xC0($29)\n"
    "sd         $20, 0xB0($29)\n"
    "sd         $19, 0xA0($29)\n"
    "sd         $18, 0x90($29)\n"
    "jal        __unpack_d\n"
    "sd        $17, 0x80($29)\n"
    "addiu      $16, $29, 0x20\n"
    "addiu      $4, $29, 0x68\n"
    "jal        __unpack_d\n"
    "daddu     $5, $16, $0\n"
    "lw         $4, 0x0($29)\n"
    "sltiu      $2, $4, 0x2\n"
    "bnez       $2, .L0011FCB8\n"
    "addiu     $23, $29, 0x40\n"
    "lw         $3, 0x20($29)\n"
    "sltiu      $2, $3, 0x2\n"
    "bnel       $2, $0, .L0011FCE0\n"
    "lw        $3, 0x24($29)\n"
    "xori       $2, $4, 0x4\n"
    "bnez       $2, .L0011FC94\n"
    "xori      $2, $3, 0x4\n"
    "xori       $2, $3, 0x2\n"
    "beqz       $2, .L0011FCA4\n"
    "lw        $2, 0x4($29)\n"
    "b          .L0011FCC0\n"
    "daddu     $4, $29, $0\n"
    ".L0011FC94:\n"
    "bnez       $2, .L0011FCB0\n"
    "xori      $2, $4, 0x2\n"
    "bnez       $2, .L0011FCE0\n"
    "lw        $3, 0x24($29)\n"
    ".L0011FCA4:\n"
    "lui        $2, %hi(D_001596F0)\n"
    "b          .L0011FE7C\n"
    "addiu     $4, $2, %lo(D_001596F0)\n"
    ".L0011FCB0:\n"
    "bnez       $2, .L0011FCD4\n"
    "xori      $2, $3, 0x2\n"
    ".L0011FCB8:\n"
    "lw         $2, 0x4($29)\n"
    "daddu      $4, $29, $0\n"
    ".L0011FCC0:\n"
    "lw         $3, 0x24($29)\n"
    "xor        $2, $2, $3\n"
    "sltu       $2, $0, $2\n"
    "b          .L0011FE7C\n"
    "sw        $2, 0x4($29)\n"
    ".L0011FCD4:\n"
    "bnez       $2, .L0011FCF8\n"
    "ld        $19, 0x10($29)\n"
    "lw         $3, 0x24($29)\n"
    ".L0011FCE0:\n"
    "daddu      $4, $16, $0\n"
    "lw         $2, 0x4($29)\n"
    "xor        $2, $2, $3\n"
    "sltu       $2, $0, $2\n"
    "b          .L0011FE7C\n"
    "sw        $2, 0x24($29)\n"
    ".L0011FCF8:\n"
    "lui        $22, (0xFFFF0000 >> 16)\n"
    "dsrl32     $22, $22, 0\n"
    "ld         $18, 0x30($29)\n"
    "and        $16, $19, $22\n"
    "and        $21, $18, $22\n"
    "dsrl32     $19, $19, 0\n"
    "dsrl32     $18, $18, 0\n"
    "daddu      $5, $16, $0\n"
    "jal        __muldi3\n"
    "daddu     $4, $21, $0\n"
    "daddu      $20, $2, $0\n"
    "daddu      $5, $16, $0\n"
    "jal        __muldi3\n"
    "daddu     $4, $18, $0\n"
    "daddu      $17, $2, $0\n"
    "daddu      $4, $21, $0\n"
    "jal        __muldi3\n"
    "daddu     $5, $19, $0\n"
    "daddu      $16, $2, $0\n"
    "daddu      $4, $18, $0\n"
    "jal        __muldi3\n"
    "daddu     $5, $19, $0\n"
    "daddu      $16, $17, $16\n"
    "lw         $5, 0x8($29)\n"
    "dsll32     $4, $16, 0\n"
    "sltu       $17, $16, $17\n"
    "daddu      $4, $20, $4\n"
    "dsrl32     $16, $16, 0\n"
    "lw         $7, 0x28($29)\n"
    "and        $16, $16, $22\n"
    "lw         $3, 0x4($29)\n"
    "dsll32     $17, $17, 0\n"
    "lw         $6, 0x24($29)\n"
    "sltu       $20, $4, $20\n"
    "daddu      $16, $16, $2\n"
    "addu       $5, $5, $7\n"
    "xor        $3, $3, $6\n"
    "or         $17, $17, $20\n"
    "addiu      $5, $5, 0x4\n"
    "daddu      $17, $17, $16\n"
    "sltu       $3, $0, $3\n"
    "addiu      $2, $0, -0x1\n"
    "dsrl       $2, $2, 3\n"
    "sw         $3, 0x44($29)\n"
    "sltu       $2, $2, $17\n"
    "beqz       $2, .L0011FDF4\n"
    "sw        $5, 0x48($29)\n"
    "ori        $6, $0, 0x8000\n"
    "dsll32     $6, $6, 16\n"
    "addiu      $3, $0, -0x1\n"
    "dsrl       $3, $3, 3\n"
    "andi       $2, $17, 0x1\n"
    ".L0011FDC8:\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    "beqz       $2, .L0011FDE0\n"
    "addiu     $5, $5, 0x1\n"
    "dsrl       $4, $4, 1\n"
    "or         $4, $4, $6\n"
    ".L0011FDE0:\n"
    "dsrl       $17, $17, 1\n"
    "sltu       $2, $3, $17\n"
    "bnez       $2, .L0011FDC8\n"
    "andi      $2, $17, 0x1\n"
    "sw         $5, 0x48($29)\n"
    ".L0011FDF4:\n"
    "addiu      $2, $0, -0x1\n"
    "dsrl       $2, $2, 4\n"
    "sltu       $2, $2, $17\n"
    "bnez       $2, .L0011FE48\n"
    "andi      $3, $17, 0xFF\n"
    "lw         $5, 0x48($29)\n"
    "ori        $8, $0, 0x8000\n"
    "dsll32     $8, $8, 16\n"
    "addiu      $7, $0, 0x1\n"
    "addiu      $6, $0, -0x1\n"
    "dsrl       $6, $6, 4\n"
    ".L0011FE20:\n"
    "dsll       $17, $17, 1\n"
    "and        $3, $4, $8\n"
    "or         $2, $17, $7\n"
    "addiu      $5, $5, -0x1\n"
    "movn       $17, $2, $3\n"
    "sltu       $2, $6, $17\n"
    "beqz       $2, .L0011FE20\n"
    "dsll      $4, $4, 1\n"
    "sw         $5, 0x48($29)\n"
    "andi       $3, $17, 0xFF\n"
    ".L0011FE48:\n"
    "addiu      $2, $0, 0x80\n"
    "bnel       $3, $2, .L0011FE70\n"
    "sd        $17, 0x50($29)\n"
    "andi       $2, $17, 0x100\n"
    "beqz       $2, .L0011FE68\n"
    "daddiu    $2, $17, 0x80\n"
    "b          .L0011FE6C\n"
    "daddiu    $17, $17, 0x80\n"
    ".L0011FE68:\n"
    "movn       $17, $2, $4\n"
    ".L0011FE6C:\n"
    "sd         $17, 0x50($29)\n"
    ".L0011FE70:\n"
    "addiu      $2, $0, 0x3\n"
    "sw         $2, 0x0($23)\n"
    "daddu      $4, $23, $0\n"
    ".L0011FE7C:\n"
    "jal        __pack_d\n"
    "nop\n"
    "ld         $31, 0xF0($29)\n"
    "ld         $23, 0xE0($29)\n"
    "ld         $22, 0xD0($29)\n"
    "ld         $21, 0xC0($29)\n"
    "ld         $20, 0xB0($29)\n"
    "ld         $19, 0xA0($29)\n"
    "ld         $18, 0x90($29)\n"
    "ld         $17, 0x80($29)\n"
    "ld         $16, 0x70($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x100\n"
    ".size dpmul, .-dpmul\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern u8 D_001596F0[];
extern s32 __muldi3();
extern s32 __pack_d();
extern s32 __unpack_d();
void dpmul(s64 arg0, s64 arg1) {    s32 sp0;
u8 sp_slot[0x100];    u64 sp10;
    s32 sp28;
    u64 sp30;
    s32 sp8;
    s32 sp4;
    u32 sp20;
    s32 sp24;
    u32 sp40;
    s32 sp44;
    s32 sp48;
    u64 sp50;
    s64 sp60;
    s64 sp68;
    s32 temp_2_40;
    s32 var_3_141;
    s32 var_5_109;
    s32 var_5_142;
    s64 var_2_122;
    u32 *var_4_46;
    u32 temp_16_89;
    u32 temp_17_85;
    u32 temp_20_81;
    u64 temp_16_74;
    u64 temp_16_93;
    u64 temp_17_149;
    u64 temp_18_77;
    u64 temp_19_76;
    u64 temp_21_75;
    u64 temp_22_72;
    u64 var_17_110;
    u64 var_4_97;

    sp60 = arg0;
    sp68 = arg1;
    __unpack_d(&sp60, sp_slot);
    __unpack_d(&sp68, &sp20);
    if (sp0 < 2U) {
        goto block_9;
    }
    if (sp20 < 2U) {
        goto block_12;
    }
    if ((sp0 ^ 4) != 0) {
        goto block_5;
    }
    if ((sp20 ^ 2) == 0) {
        goto block_7;
    }
    goto block_10;
block_5:
    temp_2_40 = sp0 ^ 2;
    if ((sp20 ^ 4) != 0) {
        goto block_8;
    }
    if (temp_2_40 != 0) {
        goto block_13;
    }
block_7:
    var_4_46 = D_001596F0;
    goto block_29;
block_8:
    if (temp_2_40 != 0) {
        goto block_11;
    }
block_9:
block_10:
    var_4_46 = sp_slot;
    sp4 = sp4 != sp24;
    goto block_29;
block_11:
    if ((sp20 ^ 2) != 0) {
        goto block_14;
    }
block_12:
block_13:
    var_4_46 = &sp20;
    sp24 = sp4 != sp24;
    goto block_29;
block_14:
    temp_22_72 = 0xFFFF0000U >> 0x20;
    temp_16_74 = sp10 & temp_22_72;
    temp_21_75 = sp30 & temp_22_72;
    temp_19_76 = sp10 >> 0x20;
    temp_18_77 = sp30 >> 0x20;
    temp_20_81 = __muldi3(temp_21_75, temp_16_74);
    temp_17_85 = __muldi3(temp_18_77, temp_16_74);
    temp_16_89 = __muldi3(temp_21_75, temp_19_76);
    temp_16_93 = temp_17_85 + temp_16_89;
    var_4_97 = temp_20_81 + (temp_16_93 << 0x20);
    var_5_109 = sp8 + sp28 + 4;
    var_17_110 = (((temp_16_93 < temp_17_85) << 0x20) | (var_4_97 < temp_20_81)) + (((temp_16_93 >> 0x20) & temp_22_72) + __muldi3(temp_18_77, temp_19_76));
    sp44 = sp4 != sp24;
    sp48 = var_5_109;
    if ((u64) (-1U >> 3) >= var_17_110) {
        goto block_20;
    }
    var_2_122 = var_17_110 & 1;
loop_16:
    var_5_109 += 1;
    if (((s64) (var_2_122 << 0x20) >> 0x20) == 0) {
        goto block_18;
    }
    var_4_97 = (var_4_97 >> 1) | (0x8000 << 0x30);
block_18:
    var_17_110 = var_17_110 >> 1;
    var_2_122 = var_17_110 & 1;
    if ((u64) (-1U >> 3) < var_17_110) {
        goto loop_16;
    }
    sp48 = var_5_109;
block_20:
    var_3_141 = var_17_110 & 0xFF;
    if ((u64) (-1U >> 4) < var_17_110) {
        goto block_24;
    }
    var_5_142 = sp48;
loop_22:
    temp_17_149 = var_17_110 * 2;
    var_5_142 -= 1;
    var_17_110 = (var_4_97 & (0x8000 << 0x30)) ? (temp_17_149 | 1) : temp_17_149;
    var_4_97 *= 2;
    if ((u64) (-1U >> 4) >= var_17_110) {
        goto loop_22;
    }
    sp48 = var_5_142;
    var_3_141 = var_17_110 & 0xFF;
block_24:
    if (var_3_141 != 0x80) {
        goto block_28;
    }
    if (!(var_17_110 & 0x100)) {
        goto block_27;
    }
    var_17_110 += 0x80;
    goto block_28;
block_27:
    var_17_110 = (var_4_97 != 0) ? (var_17_110 + 0x80) : var_17_110;
block_28:
    sp50 = var_17_110;
    sp40 = 3;
    var_4_46 = &sp40;
block_29:
    __pack_d(var_4_46);
    return;
}
#endif /* NON_MATCHING */
