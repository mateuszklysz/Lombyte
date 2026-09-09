/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 45.3889%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _fpadd_parts; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _fpadd_parts\n"
    ".type _fpadd_parts, @function\n"
    "_fpadd_parts:\n"
    "daddu      $8, $4, $0\n"
    "lw         $4, 0x0($8)\n"
    "sltiu      $2, $4, 0x2\n"
    "beql       $2, $0, .L0011F924\n"
    "lw        $3, 0x0($5)\n"
    ".L0011F91C:\n"
    "jr         $31\n"
    "daddu     $2, $8, $0\n"
    ".L0011F924:\n"
    "sltiu      $2, $3, 0x2\n"
    "beqz       $2, .L0011F938\n"
    "xori      $2, $4, 0x4\n"
    ".L0011F930:\n"
    "jr         $31\n"
    "daddu     $2, $5, $0\n"
    ".L0011F938:\n"
    "bnez       $2, .L0011F960\n"
    "xori      $2, $3, 0x4\n"
    "bnez       $2, .L0011F91C\n"
    "nop\n"
    "lw         $3, 0x4($5)\n"
    "lw         $2, 0x4($8)\n"
    "beq        $2, $3, .L0011F91C\n"
    "lui       $2, %hi(D_001596F0)\n"
    "jr         $31\n"
    "addiu     $2, $2, %lo(D_001596F0)\n"
    ".L0011F960:\n"
    "beqz       $2, .L0011F930\n"
    "xori      $2, $3, 0x2\n"
    "bnez       $2, .L0011F9A4\n"
    "xori      $2, $4, 0x2\n"
    "bnez       $2, .L0011F91C\n"
    "daddu     $2, $6, $0\n"
    "ld         $4, 0x0($8)\n"
    "sd         $4, 0x0($6)\n"
    "ld         $3, 0x8($8)\n"
    "sd         $3, 0x8($6)\n"
    "ld         $4, 0x10($8)\n"
    "sd         $4, 0x10($6)\n"
    "lw         $3, 0x4($8)\n"
    "lw         $4, 0x4($5)\n"
    "and        $3, $3, $4\n"
    "jr         $31\n"
    "sw        $3, 0x4($6)\n"
    ".L0011F9A4:\n"
    "beqz       $2, .L0011F930\n"
    "addiu     $2, $0, -0x1\n"
    "lw         $7, 0x8($8)\n"
    "lw         $9, 0x8($5)\n"
    "ld         $11, 0x10($8)\n"
    "subu       $3, $7, $9\n"
    "slt        $2, $2, $3\n"
    "negu       $4, $3\n"
    "movz       $3, $4, $2\n"
    "slti       $3, $3, 0x40\n"
    "beqz       $3, .L0011FA44\n"
    "ld        $10, 0x10($5)\n"
    "slt        $2, $9, $7\n"
    "beqz       $2, .L0011FA0C\n"
    "lw        $8, 0x4($8)\n"
    "lw         $5, 0x4($5)\n"
    "nop\n"
    ".L0011F9E8:\n"
    "dsrl       $2, $10, 1\n"
    "addiu      $9, $9, 0x1\n"
    "andi       $3, $10, 0x1\n"
    "slt        $4, $9, $7\n"
    "or         $10, $3, $2\n"
    "bnez       $4, .L0011F9E8\n"
    "nop\n"
    "b          .L0011FA14\n"
    "slt       $2, $7, $9\n"
    ".L0011FA0C:\n"
    "lw         $5, 0x4($5)\n"
    "slt        $2, $7, $9\n"
    ".L0011FA14:\n"
    "beqz       $2, .L0011FA68\n"
    "nop\n"
    "subu       $7, $9, $7\n"
    ".L0011FA20:\n"
    "dsrl       $3, $11, 1\n"
    "andi       $2, $11, 0x1\n"
    "or         $11, $2, $3\n"
    "addiu      $7, $7, -0x1\n"
    "nop\n"
    "bnez       $7, .L0011FA20\n"
    "nop\n"
    "b          .L0011FA68\n"
    "daddu     $7, $9, $0\n"
    ".L0011FA44:\n"
    "slt        $2, $9, $7\n"
    "beqz       $2, .L0011FA5C\n"
    "lw        $8, 0x4($8)\n"
    "daddu      $10, $0, $0\n"
    "b          .L0011FA68\n"
    "lw        $5, 0x4($5)\n"
    ".L0011FA5C:\n"
    "daddu      $7, $9, $0\n"
    "lw         $5, 0x4($5)\n"
    "daddu      $11, $0, $0\n"
    ".L0011FA68:\n"
    "beq        $8, $5, .L0011FAFC\n"
    "daddu     $2, $11, $10\n"
    "bnez       $8, .L0011FA7C\n"
    "dsubu     $2, $10, $11\n"
    "dsubu      $2, $11, $10\n"
    ".L0011FA7C:\n"
    "bltz       $2, .L0011FA94\n"
    "dsubu     $3, $0, $2\n"
    "sw         $7, 0x8($6)\n"
    "sd         $2, 0x10($6)\n"
    "b          .L0011FAA4\n"
    "sw        $0, 0x4($6)\n"
    ".L0011FA94:\n"
    "sw         $7, 0x8($6)\n"
    "addiu      $2, $0, 0x1\n"
    "sd         $3, 0x10($6)\n"
    "sw         $2, 0x4($6)\n"
    ".L0011FAA4:\n"
    "ld         $5, 0x10($6)\n"
    "addiu      $2, $0, -0x1\n"
    "dsll       $2, $2, 5\n"
    "dsrl       $2, $2, 4\n"
    "daddiu     $3, $5, -0x1\n"
    "sltu       $2, $2, $3\n"
    "bnez       $2, .L0011FB0C\n"
    "daddu     $7, $5, $0\n"
    "addiu      $5, $0, -0x1\n"
    "dsll       $5, $5, 5\n"
    "dsrl       $5, $5, 4\n"
    ".L0011FAD0:\n"
    "lw         $2, 0x8($6)\n"
    "dsll       $4, $7, 1\n"
    "daddiu     $3, $4, -0x1\n"
    "sd         $4, 0x10($6)\n"
    "addiu      $2, $2, -0x1\n"
    "sltu       $3, $5, $3\n"
    "sw         $2, 0x8($6)\n"
    "beqz       $3, .L0011FAD0\n"
    "daddu     $7, $4, $0\n"
    "b          .L0011FB0C\n"
    "daddu     $5, $4, $0\n"
    ".L0011FAFC:\n"
    "sw         $8, 0x4($6)\n"
    "sw         $7, 0x8($6)\n"
    "daddu      $5, $2, $0\n"
    "sd         $2, 0x10($6)\n"
    ".L0011FB0C:\n"
    "addiu      $3, $0, 0x3\n"
    "addiu      $2, $0, -0x1\n"
    "dsrl       $2, $2, 3\n"
    "sltu       $2, $2, $5\n"
    "beqz       $2, .L0011FB40\n"
    "sw        $3, 0x0($6)\n"
    "lw         $2, 0x8($6)\n"
    "dsrl       $4, $5, 1\n"
    "andi       $3, $5, 0x1\n"
    "or         $3, $3, $4\n"
    "addiu      $2, $2, 0x1\n"
    "sd         $3, 0x10($6)\n"
    "sw         $2, 0x8($6)\n"
    ".L0011FB40:\n"
    "jr         $31\n"
    "daddu     $2, $6, $0\n"
    ".size _fpadd_parts, .-_fpadd_parts\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_fpadd_parts_types.h"
#include "types.h"






extern u8 D_001596F0[];
extern void arg1();
s32 *_fpadd_parts(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1, struct M2c_arg2 *arg2) {
    s32 temp_2_20;
    s32 temp_2_33;
    s32 temp_3_53;
    s32 var_2_107;
    s32 var_7_50;
    s32 var_7_81;
    s32 var_9_51;
    u32 temp_3_7;
    u32 temp_4_4;
    u64 temp_2_105;
    u64 temp_4_135;
    u64 var_10_59;
    u64 var_11_52;
    u64 var_5_122;
    u64 var_7_129;

    temp_4_4 = arg0->unk0;
    if (temp_4_4 >= 2U) {
        temp_3_7 = arg1->unk0;
        if (temp_3_7 < 2U) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return arg1;
        }
        temp_2_20 = temp_3_7 ^ 4;
        if ((temp_4_4 ^ 4) == 0) {
            if ((temp_2_20 == 0) && (arg0->unk4 != arg1->unk4)) {
                return D_001596F0;
            }
            /* Duplicate return node #3. Try simplifying control flow for better match */
            return arg0;
        }
        if (temp_2_20 != 0) {
            temp_2_33 = temp_4_4 ^ 2;
            if ((temp_3_7 ^ 2) == 0) {
                if (temp_2_33 == 0) {
                    arg2->unk0 = (s64) arg0->unk0;
                    arg2->unk8 = (s64) arg0->unk8;
                    arg2->unk10 = (u64) arg0->unk10;
                    arg2->unk4 = (s32) (arg0->unk4 & arg1->unk4);
                    return arg2;
                }
                /* Duplicate return node #3. Try simplifying control flow for better match */
                return arg0;
            }
            if (temp_2_33 != 0) {
                var_7_50 = (s32) arg0->unk8;
                var_9_51 = arg1->unk8;
                var_11_52 = arg0->unk10;
                temp_3_53 = var_7_50 - var_9_51;
                var_10_59 = arg1->unk10;
                if (((temp_3_53 <= -1) ? -temp_3_53 : temp_3_53) < 0x40) {
                    if (var_9_51 < var_7_50) {
                        do {
                            var_9_51 += 1;
                            var_10_59 = (var_10_59 & 1) | (var_10_59 >> 1);
                        } while (var_9_51 < var_7_50);
                    }
                    if (var_7_50 < var_9_51) {
                        var_7_81 = var_9_51 - var_7_50;
                        do {
                            var_11_52 = (var_11_52 & 1) | (var_11_52 >> 1);
                            var_7_81 -= 1;
                        } while (var_7_81 != 0);
                        var_7_50 = var_9_51;
                    }
                } else if (var_9_51 < var_7_50) {
                    var_10_59 = 0;
                } else {
                    var_7_50 = var_9_51;
                    var_11_52 = 0;
                }
                temp_2_105 = var_11_52 + var_10_59;
                if (arg0->unk4 != arg1->unk4) {
                    var_2_107 = var_10_59 - var_11_52;
                    if (arg0->unk4 == 0) {
                        var_2_107 = var_11_52 - var_10_59;
                    }
                    if (var_2_107 >= 0) {
                        arg2->unk8 = var_7_50;
                        arg2->unk10 = (u64) var_2_107;
                        arg2->unk4 = 0;
                    } else {
                        arg2->unk8 = var_7_50;
                        arg2->unk10 = (u64) (0 - var_2_107);
                        arg2->unk4 = 1;
                    }
                    var_5_122 = arg2->unk10;
                    var_7_129 = var_5_122;
                    if ((u64) ((u64) (-1 << 5) >> 4) >= (u32) (var_5_122 - 1)) {
                        do {
                            temp_4_135 = var_7_129 * 2;
                            arg2->unk10 = temp_4_135;
                            arg2->unk8 = (s32) ((s32) arg2->unk8 - 1);
                            var_7_129 = temp_4_135;
                        } while ((u64) ((u64) (-1 << 5) >> 4) >= (u32) (temp_4_135 - 1));
                        var_5_122 = temp_4_135;
                    }
                } else {
                    arg2->unk4 = arg0->unk4;
                    arg2->unk8 = var_7_50;
                    var_5_122 = temp_2_105;
                    arg2->unk10 = temp_2_105;
                }
                arg2->unk0 = 3;
                if ((u64) (-1U >> 3) < var_5_122) {
                    arg2->unk10 = (u64) ((var_5_122 & 1) | (var_5_122 >> 1));
                    arg2->unk8 = (s32) ((s32) arg2->unk8 + 1);
                }
                return arg2;
            }
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return arg1;
        }
        return arg1;
    }
    return arg0;
}
#endif /* NON_MATCHING */
