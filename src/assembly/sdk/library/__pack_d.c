/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 54.7067%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit __pack_d; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl __pack_d\n"
    ".type __pack_d, @function\n"
    "__pack_d:\n"
    "lw         $3, 0x0($4)\n"
    "daddu      $7, $0, $0\n"
    "lw         $8, 0x4($4)\n"
    "sltiu      $2, $3, 0x2\n"
    "beqz       $2, .L0011F764\n"
    "ld        $5, 0x10($4)\n"
    "ori        $2, $0, 0x8000\n"
    "dsll32     $2, $2, 4\n"
    "addiu      $7, $0, 0x7FF\n"
    "b          .L0011F808\n"
    "or        $5, $5, $2\n"
    ".L0011F764:\n"
    "xori       $2, $3, 0x4\n"
    "beql       $2, $0, .L0011F7C4\n"
    "addiu     $7, $0, 0x7FF\n"
    "xori       $2, $3, 0x2\n"
    "bnez       $2, .L0011F784\n"
    "nop\n"
    "b          .L0011F808\n"
    "daddu     $5, $0, $0\n"
    ".L0011F784:\n"
    "beqz       $5, .L0011F808\n"
    "nop\n"
    "lw         $3, 0x8($4)\n"
    "slti       $2, $3, -0x3FE\n"
    "beqz       $2, .L0011F7B4\n"
    "addiu     $2, $0, -0x3FE\n"
    "subu       $2, $2, $3\n"
    "slti       $3, $2, 0x39\n"
    "bnez       $3, .L0011F804\n"
    "dsrlv     $5, $5, $2\n"
    "b          .L0011F804\n"
    "daddu     $5, $0, $0\n"
    ".L0011F7B4:\n"
    "slti       $2, $3, 0x400\n"
    "bnez       $2, .L0011F7CC\n"
    "addiu     $7, $3, 0x3FF\n"
    "addiu      $7, $0, 0x7FF\n"
    ".L0011F7C4:\n"
    "b          .L0011F808\n"
    "daddu     $5, $0, $0\n"
    ".L0011F7CC:\n"
    "addiu      $2, $0, 0x80\n"
    "andi       $3, $5, 0xFF\n"
    "bnel       $3, $2, .L0011F7E8\n"
    "daddiu    $5, $5, 0x7F\n"
    "andi       $3, $5, 0x100\n"
    "daddiu     $2, $5, 0x80\n"
    "movn       $5, $2, $3\n"
    ".L0011F7E8:\n"
    "addiu      $2, $0, -0x1\n"
    "dsrl       $2, $2, 3\n"
    "sltu       $2, $2, $5\n"
    "beql       $2, $0, .L0011F808\n"
    "dsrl      $5, $5, 8\n"
    "dsrl       $5, $5, 1\n"
    "addiu      $7, $7, 0x1\n"
    ".L0011F804:\n"
    "dsrl       $5, $5, 8\n"
    ".L0011F808:\n"
    "ori        $3, $0, 0xFFF0\n"
    "dsll32     $3, $3, 16\n"
    "addiu      $2, $0, -0x1\n"
    "dsrl       $2, $2, 12\n"
    "and        $2, $5, $2\n"
    "and        $6, $6, $3\n"
    "or         $6, $6, $2\n"
    "andi       $3, $7, 0x7FF\n"
    "lui        $2, (0x800FFFFF >> 16)\n"
    "ori        $2, $2, (0x800FFFFF & 0xFFFF)\n"
    "dsll       $2, $2, 16\n"
    "ori        $2, $2, 0xFFFF\n"
    "dsll       $2, $2, 16\n"
    "ori        $2, $2, 0xFFFF\n"
    "dsll32     $3, $3, 20\n"
    "and        $6, $6, $2\n"
    "addiu      $4, $0, -0x1\n"
    "dsrl       $4, $4, 1\n"
    "or         $6, $6, $3\n"
    "dsll32     $2, $8, 31\n"
    "and        $6, $6, $4\n"
    "jr         $31\n"
    "or        $2, $6, $2\n"
    ".size __pack_d, .-__pack_d\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library___pack_d_types.h"
#include "types.h"


s32 __pack_d(s32 arg1, struct M2c_arg0 *arg0, s32 arg2) {
    s32 temp_2_30;
    s32 temp_3_26;
    s32 var_7_4;
    u32 temp_3_3;
    u64 var_5_33;
    u64 var_5_8;

    temp_3_3 = arg0->unk0;
    var_7_4 = 0;
    var_5_8 = arg0->unk10;
    if (temp_3_3 >= 2U) {
        goto block_2;
    }
    var_7_4 = 0x7FF;
    var_5_8 |= 0x8000 << 0x24;
    goto block_18;
block_2:
    if ((temp_3_3 ^ 4) == 0) {
        goto block_10;
    }
    if ((temp_3_3 ^ 2) != 0) {
        goto block_5;
    }
    var_5_8 = 0;
    goto block_18;
block_5:
    if (var_5_8 == 0) {
        goto block_18;
    }
    temp_3_26 = arg0->unk8;
    if (temp_3_26 >= -0x3FE) {
        goto block_9;
    }
    temp_2_30 = -0x3FE - temp_3_26;
    var_5_33 = var_5_8 >> temp_2_30;
    if (temp_2_30 < 0x39) {
        goto block_17;
    }
    var_5_33 = 0;
    goto block_17;
block_9:
    var_7_4 = temp_3_26 + 0x3FF;
    if (temp_3_26 < 0x400) {
        goto block_11;
    }
block_10:
    var_7_4 = 0x7FF;
    var_5_8 = 0;
    goto block_18;
block_11:
    if ((var_5_8 & 0xFF) == 0x80) {
        goto block_13;
    }
    var_5_33 = var_5_8 + 0x7F;
    goto block_15;
block_13:
    var_5_33 = (var_5_8 & 0x100) ? (var_5_8 + 0x80) : var_5_8;
block_15:
    if ((u64) (-1U >> 3) >= var_5_33) {
        goto block_17;
    }
    var_5_33 = var_5_33 >> 1;
    var_7_4 += 1;
block_17:
    var_5_8 = var_5_33 >> 8;
block_18:
    return (((((arg2 & (0xFFF0 << 0x30)) | (var_5_8 & (-1U >> 0xC))) & ((((0x800FFFFF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((var_7_4 & 0x7FF) << 0x34)) & (-1U >> 1)) | ((s64) arg0->unk4 << 0x3F);
}
#endif /* NON_MATCHING */
