/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 63.3200%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit __mdiff; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl __mdiff\n"
    ".type __mdiff, @function\n"
    "__mdiff:\n"
    "addiu      $29, $29, -0x50\n"
    "sd         $19, 0x30($29)\n"
    "sd         $18, 0x20($29)\n"
    "daddu      $19, $4, $0\n"
    "sd         $17, 0x10($29)\n"
    "daddu      $18, $6, $0\n"
    "daddu      $17, $5, $0\n"
    "sd         $16, 0x0($29)\n"
    "sd         $31, 0x40($29)\n"
    "daddu      $5, $18, $0\n"
    "jal        Dcmp\n"
    "daddu     $4, $17, $0\n"
    "daddu      $16, $2, $0\n"
    "bnez       $16, .L00115DA8\n"
    "daddu     $4, $19, $0\n"
    "jal        _Balloc\n"
    "daddu     $5, $0, $0\n"
    "daddu      $11, $2, $0\n"
    "addiu      $2, $0, 0x1\n"
    "sw         $0, 0x14($11)\n"
    "b          .L00115EC0\n"
    "sw        $2, 0x10($11)\n"
    ".L00115DA8:\n"
    "bgez       $16, .L00115DC0\n"
    "daddu     $16, $0, $0\n"
    "daddu      $11, $17, $0\n"
    "addiu      $16, $0, 0x1\n"
    "daddu      $17, $18, $0\n"
    "daddu      $18, $11, $0\n"
    ".L00115DC0:\n"
    "lw         $5, 0x4($17)\n"
    "jal        _Balloc\n"
    "daddu     $4, $19, $0\n"
    "daddu      $11, $2, $0\n"
    "addiu      $8, $17, 0x14\n"
    "sw         $16, 0xC($11)\n"
    "addiu      $9, $18, 0x14\n"
    "addiu      $7, $11, 0x14\n"
    "daddu      $10, $0, $0\n"
    "lw         $12, 0x10($17)\n"
    "lw         $2, 0x10($18)\n"
    "sll        $3, $12, 2\n"
    "sll        $2, $2, 2\n"
    "addu       $13, $8, $3\n"
    "addu       $6, $9, $2\n"
    "nop\n"
    ".L00115E00:\n"
    "lw         $5, 0x0($8)\n"
    "lw         $2, 0x0($9)\n"
    "addiu      $8, $8, 0x4\n"
    "andi       $3, $5, 0xFFFF\n"
    "addiu      $9, $9, 0x4\n"
    "andi       $4, $2, 0xFFFF\n"
    "srl        $5, $5, 16\n"
    "subu       $3, $3, $4\n"
    "srl        $2, $2, 16\n"
    "addu       $3, $3, $10\n"
    "subu       $5, $5, $2\n"
    "sra        $10, $3, 16\n"
    "sh         $3, 0x0($7)\n"
    "addu       $5, $5, $10\n"
    "sltu       $2, $9, $6\n"
    "sh         $5, 0x2($7)\n"
    "sra        $10, $5, 16\n"
    "bnez       $2, .L00115E00\n"
    "addiu     $7, $7, 0x4\n"
    "sltu       $2, $8, $13\n"
    "beql       $2, $0, .L00115E90\n"
    "addiu     $7, $7, -0x4\n"
    ".L00115E58:\n"
    "lw         $2, 0x0($8)\n"
    "addiu      $8, $8, 0x4\n"
    "andi       $3, $2, 0xFFFF\n"
    "sltu       $4, $8, $13\n"
    "addu       $3, $3, $10\n"
    "srl        $2, $2, 16\n"
    "sra        $10, $3, 16\n"
    "sh         $3, 0x0($7)\n"
    "addu       $5, $2, $10\n"
    "sh         $5, 0x2($7)\n"
    "sra        $10, $5, 16\n"
    "bnez       $4, .L00115E58\n"
    "addiu     $7, $7, 0x4\n"
    "addiu      $7, $7, -0x4\n"
    ".L00115E90:\n"
    "lw         $2, 0x0($7)\n"
    "bnel       $2, $0, .L00115EC0\n"
    "sw        $12, 0x10($11)\n"
    "nop\n"
    ".L00115EA0:\n"
    "addiu      $7, $7, -0x4\n"
    "addiu      $12, $12, -0x1\n"
    "lw         $2, 0x0($7)\n"
    "nop\n"
    "nop\n"
    "beqz       $2, .L00115EA0\n"
    "nop\n"
    "sw         $12, 0x10($11)\n"
    ".L00115EC0:\n"
    "daddu      $2, $11, $0\n"
    "ld         $31, 0x40($29)\n"
    "ld         $19, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x50\n"
    ".size __mdiff, .-__mdiff\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_mdiff_types.h"
#include "types.h"








extern s32 Dcmp();
extern s32 _Balloc();
s32 *__mdiff(s32 arg0, s32 *arg1, s32 *arg2) {
    s16 temp_3_59;
    s16 temp_3_77;
    s16 temp_5_63;
    s16 temp_5_81;
    s32 *var_7_86;
    s32 temp_2_13;
    s32 var_10_41;
    s32 var_12_42;
    s32 var_16_27;
    u32 *var_8_37;
    u32 *var_9_39;
    u32 temp_2_51;
    u32 temp_2_73;
    u32 temp_5_50;
    s32 *temp_11_28;
    s32 *temp_13_46;
    s32 *temp_6_47;
    struct M2c_var_11_20 *var_11_20;
    struct M2c_var_17_9 *var_17_9;
    struct M2c_var_18_8 *var_18_8;
    struct M2c_var_7_40 *var_7_40;

    var_18_8 = arg2;
    var_17_9 = arg1;
    temp_2_13 = Dcmp(var_17_9, var_18_8);
    if (temp_2_13 == 0) {
        var_11_20 = _Balloc(arg0, 0);
        var_11_20->unk14 = 0;
        var_11_20->unk10 = 1;
    } else {
        var_16_27 = 0;
        if (temp_2_13 < 0) {
            temp_11_28 = var_17_9;
            var_16_27 = 1;
            var_17_9 = var_18_8;
            var_18_8 = temp_11_28;
        }
        var_11_20 = _Balloc(arg0, var_17_9->unk4);
        var_8_37 = ((u8 *)var_17_9 + (0x14));
        var_11_20->unkC = var_16_27;
        var_9_39 = ((u8 *)var_18_8 + (0x14));
        var_7_40 = ((u8 *)var_11_20 + (0x14));
        var_10_41 = 0;
        var_12_42 = var_17_9->unk10;
        temp_13_46 = var_8_37 + (var_12_42 * 4);
        temp_6_47 = var_9_39 + (var_18_8->unk10 * 4);
        do {
            temp_5_50 = *var_8_37;
            temp_2_51 = *var_9_39;
            var_8_37 += 4;
            var_9_39 += 4;
            temp_3_59 = ((temp_5_50 & 0xFFFF) - (temp_2_51 & 0xFFFF)) + var_10_41;
            var_7_40->unk0 = temp_3_59;
            temp_5_63 = ((temp_5_50 >> 0x10) - (temp_2_51 >> 0x10)) + (temp_3_59 >> 0x10);
            var_7_40->unk2 = temp_5_63;
            var_10_41 = temp_5_63 >> 0x10;
            var_7_40 += 4;
        } while ((u32) var_9_39 < (u32) temp_6_47);
        if ((u32) var_8_37 < (u32) temp_13_46) {
            do {
                temp_2_73 = *var_8_37;
                var_8_37 += 4;
                temp_3_77 = (temp_2_73 & 0xFFFF) + var_10_41;
                var_7_40->unk0 = temp_3_77;
                temp_5_81 = (temp_2_73 >> 0x10) + (temp_3_77 >> 0x10);
                var_7_40->unk2 = temp_5_81;
                var_10_41 = temp_5_81 >> 0x10;
                var_7_40 += 4;
            } while ((u32) var_8_37 < (u32) temp_13_46);
        }
        var_7_86 = ((u8 *)var_7_40 - (4));
        if (*var_7_86 == 0) {
            do {
                var_7_86 -= 4;
                var_12_42 -= 1;
            } while (*var_7_86 == 0);
        }
        var_11_20->unk10 = var_12_42;
    }
    return var_11_20;
}
#endif /* NON_MATCHING */
