/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 62.4975%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.; shared struct extraction rejected after compile failure
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _free_r; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _free_r\n"
    ".type _free_r, @function\n"
    "_free_r:\n"
    "addiu      $29, $29, -0x30\n"
    "sd         $17, 0x10($29)\n"
    "sd         $16, 0x0($29)\n"
    "daddu      $17, $4, $0\n"
    "daddu      $16, $5, $0\n"
    "beqz       $16, .L00113E78\n"
    "sd        $31, 0x20($29)\n"
    "jal        func_001154C0\n"
    "nop\n"
    "addiu      $10, $16, -0x8\n"
    "lui        $2, (0xFFFFFFFE >> 16)\n"
    "lw         $7, 0x4($10)\n"
    "ori        $2, $2, (0xFFFFFFFE & 0xFFFF)\n"
    "lui        $13, %hi(D_0012F788)\n"
    "lui        $3, (0xFFFFFFFC >> 16)\n"
    "and        $9, $7, $2\n"
    "addiu      $12, $13, %lo(D_0012F788)\n"
    "addu       $6, $10, $9\n"
    "ori        $3, $3, (0xFFFFFFFC & 0xFFFF)\n"
    "lw         $2, 0x4($6)\n"
    "lw         $4, 0x8($12)\n"
    "bne        $6, $4, .L00113C40\n"
    "and       $11, $2, $3\n"
    "andi       $2, $7, 0x1\n"
    "bnez       $2, .L00113BF4\n"
    "addu      $9, $9, $11\n"
    "lw         $5, -0x8($16)\n"
    "subu       $10, $10, $5\n"
    "addu       $9, $9, $5\n"
    "lw         $8, 0xC($10)\n"
    "lw         $7, 0x8($10)\n"
    "sw         $8, 0xC($7)\n"
    "sw         $7, 0x8($8)\n"
    ".L00113BF4:\n"
    "lui        $3, %hi(D_0012FB90)\n"
    "dsll32     $2, $9, 0\n"
    "ld         $4, %lo(D_0012FB90)($3)\n"
    "dsrl32     $2, $2, 0\n"
    "ori        $3, $9, 0x1\n"
    "sw         $10, 0x8($12)\n"
    "sltu       $2, $2, $4\n"
    "bnez       $2, .L00113C28\n"
    "sw        $3, 0x4($10)\n"
    "lui        $2, %hi(D_0012FB98)\n"
    "daddu      $4, $17, $0\n"
    "jal        _malloc_trim_r\n"
    "lw        $5, %lo(D_0012FB98)($2)\n"
    ".L00113C28:\n"
    "daddu      $4, $17, $0\n"
    "ld         $31, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "j          func_001154C8\n"
    "addiu     $29, $29, 0x30\n"
    ".L00113C40:\n"
    "andi       $2, $7, 0x1\n"
    "sw         $11, 0x4($6)\n"
    "bnez       $2, .L00113C80\n"
    "daddu     $4, $0, $0\n"
    "lw         $5, -0x8($16)\n"
    "addiu      $2, $12, 0x8\n"
    "subu       $10, $10, $5\n"
    "lw         $3, 0x8($10)\n"
    "bne        $3, $2, .L00113C70\n"
    "addu      $9, $9, $5\n"
    "b          .L00113C80\n"
    "addiu     $4, $0, 0x1\n"
    ".L00113C70:\n"
    "lw         $8, 0xC($10)\n"
    "daddu      $7, $3, $0\n"
    "sw         $8, 0xC($7)\n"
    "sw         $7, 0x8($8)\n"
    ".L00113C80:\n"
    "addu       $3, $6, $11\n"
    "lw         $2, 0x4($3)\n"
    "andi       $2, $2, 0x1\n"
    "bnez       $2, .L00113CE0\n"
    "ori       $2, $9, 0x1\n"
    "bnez       $4, .L00113CC8\n"
    "addu      $9, $9, $11\n"
    "lui        $2, %hi(D_0012F790)\n"
    "lw         $3, 0x8($6)\n"
    "addiu      $2, $2, %lo(D_0012F790)\n"
    "bnel       $3, $2, .L00113CD0\n"
    "lw        $8, 0xC($6)\n"
    "sw         $10, 0xC($3)\n"
    "addiu      $4, $0, 0x1\n"
    "sw         $10, 0x8($3)\n"
    "sw         $3, 0x8($10)\n"
    "b          .L00113CDC\n"
    "sw        $3, 0xC($10)\n"
    ".L00113CC8:\n"
    "lw         $3, 0x8($6)\n"
    "lw         $8, 0xC($6)\n"
    ".L00113CD0:\n"
    "daddu      $7, $3, $0\n"
    "sw         $8, 0xC($7)\n"
    "sw         $7, 0x8($8)\n"
    ".L00113CDC:\n"
    "ori        $2, $9, 0x1\n"
    ".L00113CE0:\n"
    "addu       $3, $10, $9\n"
    "sw         $2, 0x4($10)\n"
    "bnez       $4, .L00113E60\n"
    "sw        $9, 0x0($3)\n"
    "sltiu      $2, $9, 0x200\n"
    "beqz       $2, .L00113D50\n"
    "srl       $6, $9, 3\n"
    "addiu      $2, $0, -0x1\n"
    "addiu      $5, $13, %lo(D_0012F788)\n"
    "slt        $2, $2, $6\n"
    "sll        $4, $6, 3\n"
    "addiu      $3, $6, 0x3\n"
    "addu       $8, $4, $5\n"
    "movn       $3, $6, $2\n"
    "lw         $7, 0x8($8)\n"
    "sra        $3, $3, 2\n"
    "addiu      $2, $0, 0x1\n"
    "lw         $4, 0x4($5)\n"
    "dsllv      $2, $2, $3\n"
    "sw         $8, 0xC($10)\n"
    "sw         $7, 0x8($10)\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    "or         $4, $4, $2\n"
    "sw         $10, 0x8($8)\n"
    "sw         $10, 0xC($7)\n"
    "b          .L00113E60\n"
    "sw        $4, 0x4($5)\n"
    ".L00113D50:\n"
    "srl        $3, $9, 9\n"
    "bnez       $3, .L00113D64\n"
    "sltiu     $2, $3, 0x5\n"
    "b          .L00113DC0\n"
    "srl       $6, $9, 3\n"
    ".L00113D64:\n"
    "beqz       $2, .L00113D74\n"
    "srl       $2, $9, 6\n"
    "b          .L00113DC0\n"
    "addiu     $6, $2, 0x38\n"
    ".L00113D74:\n"
    "sltiu      $2, $3, 0x15\n"
    "bnez       $2, .L00113DC0\n"
    "addiu     $6, $3, 0x5B\n"
    "sltiu      $2, $3, 0x55\n"
    "beqz       $2, .L00113D94\n"
    "srl       $2, $9, 12\n"
    "b          .L00113DC0\n"
    "addiu     $6, $2, 0x6E\n"
    ".L00113D94:\n"
    "sltiu      $2, $3, 0x155\n"
    "beqz       $2, .L00113DA8\n"
    "srl       $2, $9, 15\n"
    "b          .L00113DC0\n"
    "addiu     $6, $2, 0x77\n"
    ".L00113DA8:\n"
    "sltiu      $2, $3, 0x555\n"
    "beqz       $2, .L00113DBC\n"
    "srl       $2, $9, 18\n"
    "b          .L00113DC0\n"
    "addiu     $6, $2, 0x7C\n"
    ".L00113DBC:\n"
    "addiu      $6, $0, 0x7E\n"
    ".L00113DC0:\n"
    "addiu      $11, $13, %lo(D_0012F788)\n"
    "sll        $2, $6, 3\n"
    "addu       $8, $2, $11\n"
    "lw         $7, 0x8($8)\n"
    "bnel       $7, $8, .L00113E0C\n"
    "lw        $3, 0x4($7)\n"
    "addiu      $2, $0, -0x1\n"
    "addiu      $3, $6, 0x3\n"
    "slt        $2, $2, $6\n"
    "addiu      $4, $0, 0x1\n"
    "movn       $3, $6, $2\n"
    "lw         $5, 0x4($11)\n"
    "sra        $3, $3, 2\n"
    "dsllv      $4, $4, $3\n"
    "dsll32     $4, $4, 0\n"
    "dsra32     $4, $4, 0\n"
    "or         $5, $5, $4\n"
    "b          .L00113E50\n"
    "sw        $5, 0x4($11)\n"
    ".L00113E0C:\n"
    "lui        $2, (0xFFFFFFFC >> 16)\n"
    "ori        $2, $2, (0xFFFFFFFC & 0xFFFF)\n"
    "and        $3, $3, $2\n"
    "sltu       $3, $9, $3\n"
    "beql       $3, $0, .L00113E50\n"
    "lw        $8, 0xC($7)\n"
    "lui        $3, (0xFFFFFFFC >> 16)\n"
    "ori        $3, $3, (0xFFFFFFFC & 0xFFFF)\n"
    "lw         $7, 0x8($7)\n"
    ".L00113E30:\n"
    "beql       $7, $8, .L00113E50\n"
    "lw        $8, 0xC($7)\n"
    "lw         $2, 0x4($7)\n"
    "and        $2, $2, $3\n"
    "sltu       $2, $9, $2\n"
    "bnel       $2, $0, .L00113E30\n"
    "lw        $7, 0x8($7)\n"
    "lw         $8, 0xC($7)\n"
    ".L00113E50:\n"
    "sw         $8, 0xC($10)\n"
    "sw         $7, 0x8($10)\n"
    "sw         $10, 0x8($8)\n"
    "sw         $10, 0xC($7)\n"
    ".L00113E60:\n"
    "daddu      $4, $17, $0\n"
    "ld         $31, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "j          func_001154C8\n"
    "addiu     $29, $29, 0x30\n"
    ".L00113E78:\n"
    "ld         $31, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x30\n"
    ".size _free_r, .-_free_r\n"
    ".set reorder\n"
);
#else
#include "types.h"
struct M2c_D_0012F788 {
    u8 pad_0[0x4];
    s32 unk4;
    s32 unk8;
};

struct M2c_temp_3_65 {
    u8 pad_0[0xC];
    s32 unkC;
};

struct M2c_temp_3_84 {
    u8 pad_0[0x8];
    s32 unk8;
    s32 unkC;
};

struct M2c_temp_6_20 {
    u8 pad_0[0x4];
    s32 unk4;
    struct M2c_temp_6_20_unk8 * unk8;
    struct M2c_temp_8_96 * unkC;
};

struct M2c_temp_6_20_unk8 {
    u8 pad_0[0xC];
    s32 unkC;
};

struct M2c_temp_7_118 {
    u8 pad_0[0xC];
    s32 unkC;
};

struct M2c_temp_8_116 {
    u8 pad_0[0x8];
    struct M2c_temp_7_118 * unk8;
};

struct M2c_temp_8_32 {
    u8 pad_0[0x8];
    s32 unk8;
};

struct M2c_temp_8_71 {
    u8 pad_0[0x8];
    s32 unk8;
};

struct M2c_temp_8_96 {
    u8 pad_0[0x8];
    s32 unk8;
};

struct M2c_var_10_12 {
    u8 pad_0[0x4];
    s32 unk4;
    struct M2c_temp_3_65 * unk8;
    struct M2c_temp_8_71 * unkC;
};

struct M2c_var_7_170 {
    u8 pad_0[0x4];
    s32 unk4;
    struct M2c_var_7_170 * unk8;
    struct M2c_var_8_169 * unkC;
};

struct M2c_var_8_169 {
    u8 pad_0[0x8];
    struct M2c_var_7_170 * unk8;
};

extern struct M2c_D_0012F788 D_0012F788;
extern u8 D_0012F790[];
extern u8 D_0012FB90[];
extern u8 D_0012FB98[];
extern s32 _malloc_trim_r();
extern s32 func_001154C0();
void _free_r(s32 arg0, s32 *arg1) {
    s32 temp_11_25;
    s32 temp_5_29;
    s32 temp_5_62;
    s32 var_2_80;
    s32 var_4_61;
    s32 var_7_14;
    s64 var_9_28;
    u32 temp_3_133;
    u32 temp_6_110;
    u32 var_6_137;
    u32 var_9_18;
    struct M2c_temp_3_65 *temp_3_65;
    struct M2c_temp_3_84 *temp_3_84;
    struct M2c_temp_6_20 *temp_6_20;
    struct M2c_temp_7_118 *temp_7_118;
    struct M2c_temp_8_116 *temp_8_116;
    struct M2c_temp_8_32 *temp_8_32;
    struct M2c_temp_8_71 *temp_8_71;
    struct M2c_temp_8_96 *temp_8_96;
    struct M2c_var_10_12 *var_10_12;
    struct M2c_var_7_170 *var_7_170;
    struct M2c_var_8_169 *var_8_169;

    if (arg1 == NULL) {
        goto block_46;
    }
    func_001154C0();
    var_10_12 = arg1 - 8;
    var_7_14 = var_10_12->unk4;
    var_9_18 = var_7_14 & 0xFFFFFFFE;
    temp_6_20 = ((u8 *)var_10_12 + (var_9_18));
    temp_11_25 = temp_6_20->unk4 & 0xFFFFFFFC;
    if (temp_6_20 != D_0012F788.unk8) {
        goto block_8;
    }
    var_9_28 = var_9_18 + temp_11_25;
    if (var_7_14 & 1) {
        goto block_4;
    }
    temp_5_29 = *(s32 *)((u8 *)arg1 - 0x8);
    var_10_12 -= temp_5_29;
    var_9_28 += temp_5_29;
    temp_8_32 = var_10_12->unkC;
    var_7_14 = var_10_12->unk8;
    *(s32 *)((u8 *)var_7_14 + 0xC) = temp_8_32;
    temp_8_32->unk8 = var_7_14;
block_4:
    D_0012F788.unk8 = var_10_12;
    var_10_12->unk4 = (s32) (var_9_28 | 1);
    if ((u64) ((u64) (var_9_28 << 0x20) >> 0x20) < (u64) D_0012FB90[0]) {
        goto block_6;
    }
    _malloc_trim_r(arg0, D_0012FB98[0], temp_6_20, (void *) var_7_14);
block_6:
    func_001154C8(arg0);
    return;
block_8:
    temp_6_20->unk4 = temp_11_25;
    var_4_61 = 0;
    if (var_7_14 & 1) {
        goto block_12;
    }
    temp_5_62 = *(s32 *)((u8 *)arg1 - 0x8);
    var_10_12 -= temp_5_62;
    temp_3_65 = var_10_12->unk8;
    var_9_18 += temp_5_62;
    if (temp_3_65 != (((u8 *)&D_0012F788 + 8))) {
        goto block_11;
    }
    var_4_61 = 1;
    goto block_12;
block_11:
    temp_8_71 = var_10_12->unkC;
    temp_3_65->unkC = temp_8_71;
    temp_8_71->unk8 = temp_3_65;
block_12:
    var_2_80 = var_9_18 | 1;
    if (*(s32 *)((u8 *)(((u8 *)temp_6_20 + (temp_11_25))) + 0x4) & 1) {
        goto block_19;
    }
    var_9_18 += temp_11_25;
    if (var_4_61 != 0) {
        goto block_16;
    }
    temp_3_84 = temp_6_20->unk8;
    if (temp_3_84 != D_0012F790) {
        goto block_17;
    }
    temp_3_84->unkC = var_10_12;
    var_4_61 = 1;
    temp_3_84->unk8 = var_10_12;
    var_10_12->unk8 = temp_3_84;
    var_10_12->unkC = temp_3_84;
    goto block_18;
block_16:
block_17:
    temp_8_96 = temp_6_20->unkC;
    temp_6_20->unk8->unkC = temp_8_96;
    temp_8_96->unk8 = temp_6_20->unk8;
block_18:
    var_2_80 = var_9_18 | 1;
block_19:
    var_10_12->unk4 = var_2_80;
    *(s32 *)((u8 *)var_10_12 + var_9_18) = var_9_18;
    if (var_4_61 != 0) {
        goto block_44;
    }
    temp_6_110 = var_9_18 >> 3;
    if (var_9_18 >= 0x200U) {
        goto block_22;
    }
    temp_8_116 = (temp_6_110 * 8) + &D_0012F788;
    temp_7_118 = temp_8_116->unk8;
    var_10_12->unkC = temp_8_116;
    var_10_12->unk8 = temp_7_118;
    temp_8_116->unk8 = var_10_12;
    temp_7_118->unkC = var_10_12;
    D_0012F788.unk4 = (s32) (D_0012F788.unk4 | ((s64) ((1 << (s64) ((s32) (((s32) temp_6_110 > -1) ? temp_6_110 : (temp_6_110 + 3)) >> 2)) << 0x20) >> 0x20));
    goto block_44;
block_22:
    temp_3_133 = var_9_18 >> 9;
    if (temp_3_133 != 0) {
        goto block_24;
    }
    var_6_137 = var_9_18 >> 3;
    goto block_34;
block_24:
    if (temp_3_133 >= 5U) {
        goto block_26;
    }
    var_6_137 = (var_9_18 >> 6) + 0x38;
    goto block_34;
block_26:
    var_6_137 = temp_3_133 + 0x5B;
    if (temp_3_133 < 0x15U) {
        goto block_34;
    }
    if (temp_3_133 >= 0x55U) {
        goto block_29;
    }
    var_6_137 = (var_9_18 >> 0xC) + 0x6E;
    goto block_34;
block_29:
    if (temp_3_133 >= 0x155U) {
        goto block_31;
    }
    var_6_137 = (var_9_18 >> 0xF) + 0x77;
    goto block_34;
block_31:
    if (temp_3_133 >= 0x555U) {
        goto block_33;
    }
    var_6_137 = (var_9_18 >> 0x12) + 0x7C;
    goto block_34;
block_33:
    var_6_137 = 0x7E;
block_34:
    var_8_169 = (var_6_137 * 8) + &D_0012F788;
    var_7_170 = var_8_169->unk8;
    if (var_7_170 == var_8_169) {
        goto block_36;
    }
    goto block_38;
block_36:
    D_0012F788.unk4 = (s32) (D_0012F788.unk4 | ((s64) ((1 << (s64) ((s32) (((s32) var_6_137 > -1) ? var_6_137 : (var_6_137 + 3)) >> 2)) << 0x20) >> 0x20));
    goto block_43;
block_38:
    if (var_9_18 >= (u32) (var_7_170->unk4 & 0xFFFFFFFC)) {
        goto block_42;
    }
loop_40:
    var_7_170 = var_7_170->unk8;
    if (var_7_170 == var_8_169) {
        goto block_42;
    }
    if (var_9_18 < (u32) (var_7_170->unk4 & 0xFFFFFFFC)) {
        goto loop_40;
    }
block_42:
    var_8_169 = var_7_170->unkC;
block_43:
    var_10_12->unkC = var_8_169;
    var_10_12->unk8 = var_7_170;
    var_8_169->unk8 = var_10_12;
    var_7_170->unkC = var_10_12;
block_44:
    func_001154C8(arg0);
    return;
block_46:
    return;
}
#endif /* NON_MATCHING */
