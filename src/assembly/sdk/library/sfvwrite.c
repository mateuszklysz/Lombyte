/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 82.9837%
 * blocker: logic, control flow, and field layout are correct above 80%; remaining differences are EE register/save allocation and constant scheduling
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit __sfvwrite; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl __sfvwrite\n"
    ".type __sfvwrite, @function\n"
    "__sfvwrite:\n"
    "addiu      $29, $29, -0x90\n"
    "sd         $22, 0x60($29)\n"
    "sd         $17, 0x10($29)\n"
    "daddu      $22, $5, $0\n"
    "sd         $31, 0x80($29)\n"
    "sd         $23, 0x70($29)\n"
    "sd         $21, 0x50($29)\n"
    "sd         $20, 0x40($29)\n"
    "sd         $19, 0x30($29)\n"
    "sd         $16, 0x0($29)\n"
    "sd         $18, 0x20($29)\n"
    "lw         $18, 0x8($22)\n"
    "beqz       $18, .L001143F4\n"
    "daddu     $17, $4, $0\n"
    "lhu        $3, 0xC($17)\n"
    "andi       $2, $3, 0x8\n"
    "beqz       $2, .L001140B4\n"
    "nop\n"
    "lw         $2, 0x10($17)\n"
    "bnel       $2, $0, .L001140CC\n"
    "lw        $20, 0x0($22)\n"
    ".L001140B4:\n"
    "jal        __swsetup\n"
    "daddu     $4, $17, $0\n"
    "bnez       $2, .L0011440C\n"
    "addiu     $2, $0, -0x1\n"
    "lhu        $3, 0xC($17)\n"
    "lw         $20, 0x0($22)\n"
    ".L001140CC:\n"
    "andi       $2, $3, 0x2\n"
    "beqz       $2, .L0011414C\n"
    "daddu     $18, $0, $0\n"
    "addiu      $21, $0, 0x400\n"
    "nop\n"
    ".L001140E0:\n"
    "bnez       $18, .L0011410C\n"
    "lw        $3, 0x24($17)\n"
    ".L001140E8:\n"
    "lw         $19, 0x0($20)\n"
    "lw         $18, 0x4($20)\n"
    "addiu      $20, $20, 0x8\n"
    "nop\n"
    "nop\n"
    "beqz       $18, .L001140E8\n"
    "nop\n"
    "b          .L00114110\n"
    "sltiu     $2, $18, 0x401\n"
    ".L0011410C:\n"
    "sltiu      $2, $18, 0x401\n"
    ".L00114110:\n"
    "lw         $4, 0x1C($17)\n"
    "daddu      $6, $21, $0\n"
    "daddu      $5, $19, $0\n"
    "jalr       $3\n"
    "movn      $6, $18, $2\n"
    "daddu      $16, $2, $0\n"
    "blez       $16, .L001143FC\n"
    "addu      $19, $19, $16\n"
    "lw         $2, 0x8($22)\n"
    "subu       $18, $18, $16\n"
    "subu       $2, $2, $16\n"
    "bnez       $2, .L001140E0\n"
    "sw        $2, 0x8($22)\n"
    "b          .L0011440C\n"
    "daddu     $2, $0, $0\n"
    ".L0011414C:\n"
    "andi       $2, $3, 0x1\n"
    "bnez       $2, .L001142A0\n"
    "daddu     $23, $0, $0\n"
    "b          .L00114164\n"
    "nop\n"
    ".L00114160:\n"
    "lhu        $3, 0xC($17)\n"
    ".L00114164:\n"
    "bnez       $18, .L00114194\n"
    "lw        $2, 0x8($17)\n"
    "nop\n"
    ".L00114170:\n"
    "lw         $19, 0x0($20)\n"
    "lw         $18, 0x4($20)\n"
    "addiu      $20, $20, 0x8\n"
    "nop\n"
    "nop\n"
    "beqz       $18, .L00114170\n"
    "nop\n"
    "b          .L00114198\n"
    "daddu     $16, $2, $0\n"
    ".L00114194:\n"
    "daddu      $16, $2, $0\n"
    ".L00114198:\n"
    "andi       $2, $3, 0x200\n"
    "beqz       $2, .L001141D8\n"
    "sltu      $2, $18, $16\n"
    "lw         $4, 0x0($17)\n"
    "movn       $16, $18, $2\n"
    "daddu      $5, $19, $0\n"
    "jal        memmove\n"
    "daddu     $6, $16, $0\n"
    "lw         $3, 0x8($17)\n"
    "lw         $2, 0x0($17)\n"
    "subu       $3, $3, $16\n"
    "addu       $2, $2, $16\n"
    "sw         $3, 0x8($17)\n"
    "sw         $2, 0x0($17)\n"
    "b          .L00114280\n"
    "daddu     $16, $18, $0\n"
    ".L001141D8:\n"
    "lw         $4, 0x0($17)\n"
    "lw         $2, 0x10($17)\n"
    "sltu       $2, $2, $4\n"
    "beqz       $2, .L00114220\n"
    "sltu      $2, $16, $18\n"
    "beqz       $2, .L00114220\n"
    "daddu     $5, $19, $0\n"
    "jal        memmove\n"
    "daddu     $6, $16, $0\n"
    "lw         $3, 0x0($17)\n"
    "daddu      $4, $17, $0\n"
    "addu       $3, $3, $16\n"
    "jal        fflush\n"
    "sw        $3, 0x0($17)\n"
    "bnel       $2, $0, .L00114400\n"
    "lhu       $3, 0xC($17)\n"
    "b          .L00114284\n"
    "lw        $2, 0x8($22)\n"
    ".L00114220:\n"
    "lw         $16, 0x14($17)\n"
    "sltu       $2, $18, $16\n"
    "bnel       $2, $0, .L00114258\n"
    "daddu     $16, $18, $0\n"
    "lw         $2, 0x24($17)\n"
    "daddu      $6, $16, $0\n"
    "lw         $4, 0x1C($17)\n"
    "jalr       $2\n"
    "daddu     $5, $19, $0\n"
    "daddu      $16, $2, $0\n"
    "blezl      $16, .L00114400\n"
    "lhu       $3, 0xC($17)\n"
    "b          .L00114284\n"
    "lw        $2, 0x8($22)\n"
    ".L00114258:\n"
    "lw         $4, 0x0($17)\n"
    "daddu      $5, $19, $0\n"
    "jal        memmove\n"
    "daddu     $6, $16, $0\n"
    "lw         $3, 0x8($17)\n"
    "lw         $2, 0x0($17)\n"
    "subu       $3, $3, $16\n"
    "addu       $2, $2, $16\n"
    "sw         $3, 0x8($17)\n"
    "sw         $2, 0x0($17)\n"
    ".L00114280:\n"
    "lw         $2, 0x8($22)\n"
    ".L00114284:\n"
    "addu       $19, $19, $16\n"
    "subu       $18, $18, $16\n"
    "subu       $2, $2, $16\n"
    "bnez       $2, .L00114160\n"
    "sw        $2, 0x8($22)\n"
    "b          .L0011440C\n"
    "daddu     $2, $0, $0\n"
    ".L001142A0:\n"
    "bnez       $18, .L001142CC\n"
    "nop\n"
    "daddu      $23, $0, $0\n"
    "nop\n"
    ".L001142B0:\n"
    "lw         $19, 0x0($20)\n"
    "lw         $18, 0x4($20)\n"
    "addiu      $20, $20, 0x8\n"
    "nop\n"
    "nop\n"
    "beqz       $18, .L001142B0\n"
    "nop\n"
    ".L001142CC:\n"
    "bnel       $23, $0, .L00114304\n"
    "lw        $6, 0x14($17)\n"
    "daddu      $4, $19, $0\n"
    "addiu      $5, $0, 0xA\n"
    "jal        memchr\n"
    "daddu     $6, $18, $0\n"
    "daddu      $3, $2, $0\n"
    "beqz       $3, .L001142F8\n"
    "addiu     $2, $19, -0x1\n"
    "b          .L001142FC\n"
    "subu      $21, $3, $2\n"
    ".L001142F8:\n"
    "addiu      $21, $18, 0x1\n"
    ".L001142FC:\n"
    "addiu      $23, $0, 0x1\n"
    "lw         $6, 0x14($17)\n"
    ".L00114304:\n"
    "sltu       $2, $18, $21\n"
    "lw         $4, 0x8($17)\n"
    "daddu      $5, $18, $0\n"
    "lw         $7, 0x0($17)\n"
    "daddu      $8, $6, $0\n"
    "lw         $3, 0x10($17)\n"
    "movz       $5, $21, $2\n"
    "sltu       $3, $3, $7\n"
    "beqz       $3, .L00114368\n"
    "addu      $16, $4, $6\n"
    "slt        $2, $16, $5\n"
    "beqz       $2, .L00114368\n"
    "daddu     $4, $7, $0\n"
    "daddu      $5, $19, $0\n"
    "jal        memmove\n"
    "daddu     $6, $16, $0\n"
    "lw         $3, 0x0($17)\n"
    "daddu      $4, $17, $0\n"
    "addu       $3, $3, $16\n"
    "jal        fflush\n"
    "sw        $3, 0x0($17)\n"
    "bnez       $2, .L001143FC\n"
    "subu      $21, $21, $16\n"
    "b          .L001143C4\n"
    "nop\n"
    ".L00114368:\n"
    "slt        $2, $5, $8\n"
    "bnez       $2, .L00114398\n"
    "daddu     $16, $5, $0\n"
    "lw         $2, 0x24($17)\n"
    "daddu      $5, $19, $0\n"
    "jalr       $2\n"
    "lw        $4, 0x1C($17)\n"
    "daddu      $16, $2, $0\n"
    "blez       $16, .L001143FC\n"
    "subu      $21, $21, $16\n"
    "b          .L001143C4\n"
    "nop\n"
    ".L00114398:\n"
    "lw         $4, 0x0($17)\n"
    "daddu      $5, $19, $0\n"
    "jal        memmove\n"
    "daddu     $6, $16, $0\n"
    "lw         $3, 0x8($17)\n"
    "lw         $2, 0x0($17)\n"
    "subu       $3, $3, $16\n"
    "addu       $2, $2, $16\n"
    "sw         $3, 0x8($17)\n"
    "sw         $2, 0x0($17)\n"
    "subu       $21, $21, $16\n"
    ".L001143C4:\n"
    "bnel       $21, $0, .L001143E0\n"
    "lw        $2, 0x8($22)\n"
    "jal        fflush\n"
    "daddu     $4, $17, $0\n"
    "bnez       $2, .L001143FC\n"
    "daddu     $23, $0, $0\n"
    "lw         $2, 0x8($22)\n"
    ".L001143E0:\n"
    "addu       $19, $19, $16\n"
    "subu       $18, $18, $16\n"
    "subu       $2, $2, $16\n"
    "bnez       $2, .L001142A0\n"
    "sw        $2, 0x8($22)\n"
    ".L001143F4:\n"
    "b          .L0011440C\n"
    "daddu     $2, $0, $0\n"
    ".L001143FC:\n"
    "lhu        $3, 0xC($17)\n"
    ".L00114400:\n"
    "addiu      $2, $0, -0x1\n"
    "ori        $3, $3, 0x40\n"
    "sh         $3, 0xC($17)\n"
    ".L0011440C:\n"
    "ld         $31, 0x80($29)\n"
    "ld         $23, 0x70($29)\n"
    "ld         $22, 0x60($29)\n"
    "ld         $21, 0x50($29)\n"
    "ld         $20, 0x40($29)\n"
    "ld         $19, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x90\n"
    ".size __sfvwrite, .-__sfvwrite\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_sfvwrite_types.h"
#include "types.h"






extern s32 __swsetup();
extern s32 fflush();
extern s32 memchr();
extern s32 memmove();
s32 __sfvwrite(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1) {    s32 saved_reg_s3;
    s32 saved_reg_s5;
    s32 temp_16_58;
    s32 temp_2_159;
    s32 temp_2_182;
    s32 temp_2_256;
    s32 temp_2_56;
    s32 temp_2_63;
    s32 var_16_204;
    s32 var_19_0;
    s32 var_23_71;
    u32 temp_16_129;
    u32 temp_16_97;
    u32 temp_4_110;
    u32 temp_5_201;
    u32 temp_6_193;
    u32 temp_7_198;
    u32 var_16_91;
    u32 var_18_34;
    u32 var_21_0;
    struct M2c_var_20_30 *var_20_30;

    var_19_0 = saved_reg_s3;
    var_21_0 = saved_reg_s5;
    if (arg1->unk8 == 0) {
        goto block_53;
    }
    if (!(arg0->unkC & 8)) {
        goto block_3;
    }
    if (arg0->unk10 != 0) {
        goto block_5;
    }
block_3:
    if (__swsetup(arg0) != 0) {
        goto block_55;
    }
block_5:
    var_20_30 = arg1->unk0;
    var_18_34 = 0;
    if (!(arg0->unkC & 2)) {
        goto block_13;
    }
loop_7:
    if (var_18_34 != 0) {
        goto block_10;
    }
loop_8:
    var_19_0 = var_20_30->unk0;
    var_18_34 = var_20_30->unk4;
    var_20_30 += 8;
    if (var_18_34 == 0) {
        goto loop_8;
    }
block_10:
    temp_2_56 = ((s32 (*)())(arg0->unk24))(arg0->unk1C, var_19_0, (var_18_34 < 0x401U) ? var_18_34 : 0x400U);
    temp_16_58 = temp_2_56;
    var_19_0 += temp_16_58;
    if (temp_16_58 <= 0) {
        goto block_54;
    }
    var_18_34 -= temp_16_58;
    temp_2_63 = arg1->unk8 - temp_16_58;
    arg1->unk8 = temp_2_63;
    if (temp_2_63 != 0) {
        goto loop_7;
    }
    return 0;
block_13:
    var_23_71 = 0;
    if (arg0->unkC & 1) {
        goto loop_34;
    }
    goto loop_16;
block_15:
loop_16:
    if (var_18_34 != 0) {
        goto block_20;
    }
loop_18:
    var_19_0 = var_20_30->unk0;
    var_18_34 = var_20_30->unk4;
    var_20_30 += 8;
    if (var_18_34 == 0) {
        goto loop_18;
    }
block_20:
    var_16_91 = arg0->unk8;
    if (!(arg0->unkC & 0x200)) {
        goto block_22;
    }
    temp_16_97 = (var_18_34 < var_16_91) ? var_18_34 : var_16_91;
    memmove(arg0->unk0, var_19_0, temp_16_97);
    arg0->unk8 = (u32) (arg0->unk8 - temp_16_97);
    arg0->unk0 = (u32) (arg0->unk0 + temp_16_97);
    var_16_91 = var_18_34;
    goto block_32;
block_22:
    temp_4_110 = arg0->unk0;
    if ((u32) arg0->unk10 >= temp_4_110) {
        goto block_26;
    }
    if (var_16_91 >= var_18_34) {
        goto block_26;
    }
    memmove(temp_4_110, var_19_0, var_16_91);
    arg0->unk0 = (u32) (arg0->unk0 + var_16_91);
    if (fflush(arg0) != 0) {
        goto block_54;
    }
    goto block_32;
block_26:
    temp_16_129 = arg0->unk14;
    if (var_18_34 >= temp_16_129) {
        goto block_28;
    }
    var_16_91 = var_18_34;
    goto block_31;
block_28:
    var_16_91 = ((s32 (*)())(arg0->unk24))(arg0->unk1C, var_19_0, temp_16_129);
    if ((s32) var_16_91 <= 0) {
        goto block_54;
    }
    goto block_32;
block_31:
    memmove(arg0->unk0, var_19_0, var_16_91);
    arg0->unk8 = (u32) (arg0->unk8 - var_16_91);
    arg0->unk0 = (u32) (arg0->unk0 + var_16_91);
block_32:
    var_19_0 += var_16_91;
    var_18_34 -= var_16_91;
    temp_2_159 = arg1->unk8 - var_16_91;
    arg1->unk8 = temp_2_159;
    if (temp_2_159 != 0) {
        goto block_15;
    }
    return 0;
loop_34:
    if (var_18_34 != 0) {
        goto block_37;
    }
    var_23_71 = 0;
loop_36:
    var_19_0 = var_20_30->unk0;
    var_18_34 = var_20_30->unk4;
    var_20_30 += 8;
    if (var_18_34 == 0) {
        goto loop_36;
    }
block_37:
    if (var_23_71 != 0) {
        goto block_42;
    }
    temp_2_182 = memchr(var_19_0, 0xA, var_18_34);
    if (temp_2_182 == 0) {
        goto block_40;
    }
    var_21_0 = temp_2_182 - (var_19_0 - 1);
    goto block_41;
block_40:
    var_21_0 = var_18_34 + 1;
block_41:
    var_23_71 = 1;
block_42:
    temp_6_193 = arg0->unk14;
    temp_7_198 = arg0->unk0;
    temp_5_201 = (var_18_34 >= var_21_0) ? var_21_0 : var_18_34;
    var_16_204 = arg0->unk8 + temp_6_193;
    if ((u32) arg0->unk10 >= temp_7_198) {
        goto block_46;
    }
    if (var_16_204 >= (s32) temp_5_201) {
        goto block_46;
    }
    memmove(temp_7_198, var_19_0, (u32) var_16_204, temp_7_198, temp_6_193);
    arg0->unk0 = (u32) (arg0->unk0 + var_16_204);
    var_21_0 -= var_16_204;
    if (fflush(arg0) != 0) {
        goto block_54;
    }
    goto block_50;
block_46:
    var_16_204 = (s32) temp_5_201;
    if ((s32) temp_5_201 < (s32) temp_6_193) {
        goto block_49;
    }
    var_16_204 = ((s32 (*)())(arg0->unk24))(arg0->unk1C, var_19_0, temp_6_193, temp_7_198, temp_6_193);
    var_21_0 -= var_16_204;
    if (var_16_204 <= 0) {
        goto block_54;
    }
    goto block_50;
block_49:
    memmove(arg0->unk0, var_19_0, (u32) var_16_204, temp_7_198, temp_6_193);
    arg0->unk8 = (u32) (arg0->unk8 - var_16_204);
    arg0->unk0 = (u32) (arg0->unk0 + var_16_204);
block_50:
    if (var_21_0 != 0) {
        goto block_52;
    }
    var_23_71 = 0;
    if (fflush(arg0) != 0) {
        goto block_54;
    }
block_52:
    var_19_0 += var_16_204;
    var_18_34 -= var_16_204;
    temp_2_256 = arg1->unk8 - var_16_204;
    arg1->unk8 = temp_2_256;
    if (temp_2_256 != 0) {
        goto loop_34;
    }
block_53:
    return 0;
block_54:
    arg0->unkC = (u16) (arg0->unkC | 0x40);
block_55:
    return -1;
}
#endif /* NON_MATCHING */
