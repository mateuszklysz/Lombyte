/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 53.0333%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.; shared struct extraction rejected after compile failure
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit dpdiv; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl dpdiv\n"
    ".type dpdiv, @function\n"
    "dpdiv:\n"
    "addiu      $29, $29, -0x70\n"
    "sd         $4, 0x40($29)\n"
    "sd         $5, 0x48($29)\n"
    "addiu      $4, $29, 0x40\n"
    "sd         $16, 0x50($29)\n"
    "sd         $31, 0x60($29)\n"
    "jal        __unpack_d\n"
    "daddu     $5, $29, $0\n"
    "addiu      $16, $29, 0x20\n"
    "addiu      $4, $29, 0x48\n"
    "jal        __unpack_d\n"
    "daddu     $5, $16, $0\n"
    "lw         $7, 0x0($29)\n"
    "sltiu      $2, $7, 0x2\n"
    "beqz       $2, .L0011FEF8\n"
    "daddu     $5, $29, $0\n"
    "b          .L00120000\n"
    "daddu     $4, $29, $0\n"
    ".L0011FEF8:\n"
    "lw         $6, 0x20($29)\n"
    "sltiu      $2, $6, 0x2\n"
    "bnez       $2, .L00120000\n"
    "daddu     $4, $16, $0\n"
    "lw         $2, 0x4($29)\n"
    "xori       $4, $7, 0x4\n"
    "lw         $3, 0x24($29)\n"
    "xor        $2, $2, $3\n"
    "beqz       $4, .L0011FF2C\n"
    "sw        $2, 0x4($29)\n"
    "xori       $2, $7, 0x2\n"
    "bnez       $2, .L0011FF40\n"
    "xori      $2, $6, 0x4\n"
    ".L0011FF2C:\n"
    "bne        $7, $6, .L00120000\n"
    "daddu     $4, $29, $0\n"
    "lui        $2, %hi(D_001596F0)\n"
    "b          .L00120000\n"
    "addiu     $4, $2, %lo(D_001596F0)\n"
    ".L0011FF40:\n"
    "bnez       $2, .L0011FF58\n"
    "xori      $2, $6, 0x2\n"
    "sd         $0, 0x10($29)\n"
    "daddu      $4, $29, $0\n"
    "b          .L00120000\n"
    "sw        $0, 0x8($29)\n"
    ".L0011FF58:\n"
    "bnez       $2, .L0011FF70\n"
    "lw        $3, 0x8($29)\n"
    "addiu      $2, $0, 0x4\n"
    "daddu      $4, $29, $0\n"
    "b          .L00120000\n"
    "sw        $2, 0x0($29)\n"
    ".L0011FF70:\n"
    "lw         $2, 0x28($29)\n"
    "ld         $4, 0x10($29)\n"
    "ld         $8, 0x30($29)\n"
    "subu       $2, $3, $2\n"
    "sltu       $6, $4, $8\n"
    "beqz       $6, .L0011FF9C\n"
    "sw        $2, 0x8($29)\n"
    "addiu      $2, $2, -0x1\n"
    "dsll       $4, $4, 1\n"
    "sw         $2, 0x8($29)\n"
    "sltu       $6, $4, $8\n"
    ".L0011FF9C:\n"
    "ori        $2, $0, 0x8000\n"
    "dsll32     $2, $2, 13\n"
    "b          .L0011FFB4\n"
    "daddu     $7, $0, $0\n"
    "nop\n"
    ".L0011FFB0:\n"
    "sltu       $6, $4, $8\n"
    ".L0011FFB4:\n"
    "bnel       $6, $0, .L0011FFC8\n"
    "dsrl      $2, $2, 1\n"
    "or         $7, $7, $2\n"
    "dsubu      $4, $4, $8\n"
    "dsrl       $2, $2, 1\n"
    ".L0011FFC8:\n"
    "bnez       $2, .L0011FFB0\n"
    "dsll      $4, $4, 1\n"
    "andi       $3, $7, 0xFF\n"
    "addiu      $2, $0, 0x80\n"
    "bnel       $3, $2, .L0011FFFC\n"
    "sd        $7, 0x10($5)\n"
    "andi       $2, $7, 0x100\n"
    "beqz       $2, .L0011FFF4\n"
    "daddiu    $2, $7, 0x80\n"
    "b          .L0011FFF8\n"
    "daddiu    $7, $7, 0x80\n"
    ".L0011FFF4:\n"
    "movn       $7, $2, $4\n"
    ".L0011FFF8:\n"
    "sd         $7, 0x10($5)\n"
    ".L0011FFFC:\n"
    "daddu      $4, $5, $0\n"
    ".L00120000:\n"
    "jal        __pack_d\n"
    "nop\n"
    "ld         $31, 0x60($29)\n"
    "ld         $16, 0x50($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x70\n"
    ".size dpdiv, .-dpdiv\n"
    ".set reorder\n"
);
#else
#include "types.h"
struct M2c_sp {
    u8 pad_0[0x10];
    u64 unk10;
};

extern u8 D_001596F0[];
extern s32 __pack_d();
extern s32 __unpack_d();
void dpdiv(s64 arg0, s64 arg1) {    s32 sp24;
u8 sp_slot[0x70];    s32 sp28;
    u64 sp30;
    u32 sp0;
    s32 sp4;
    s32 sp8;
    u64 sp10;
    u32 sp20;
    s64 sp40;
    s64 sp48;
    s32 temp_2_59;
    s32 var_6_60;
    s64 var_7_71;
    u32 *var_4_20;
    u64 var_2_69;
    u64 var_4_57;

    sp40 = arg0;
    sp48 = arg1;
    __unpack_d(&sp40, sp_slot);
    __unpack_d(&sp48, &sp20);
    if (sp0 >= 2U) {
        goto block_2;
    }
    var_4_20 = sp_slot;
    goto block_24;
block_2:
    var_4_20 = &sp20;
    if (sp20 < 2U) {
        goto block_24;
    }
    sp4 ^= sp24;
    if ((sp0 ^ 4) == 0) {
        goto block_5;
    }
    if ((sp0 ^ 2) != 0) {
        goto block_7;
    }
block_5:
    var_4_20 = sp_slot;
    if (sp0 != sp20) {
        goto block_24;
    }
    var_4_20 = D_001596F0;
    goto block_24;
block_7:
    if ((sp20 ^ 4) != 0) {
        goto block_9;
    }
    sp10 = 0;
    var_4_20 = sp_slot;
    sp8 = 0;
    goto block_24;
block_9:
    if ((sp20 ^ 2) != 0) {
        goto block_11;
    }
    var_4_20 = sp_slot;
    sp0 = 4;
    goto block_24;
block_11:
    var_4_57 = sp10;
    temp_2_59 = sp8 - sp28;
    var_6_60 = var_4_57 < sp30;
    sp8 = temp_2_59;
    if (var_6_60 == 0) {
        goto block_13;
    }
    var_4_57 *= 2;
    sp8 = temp_2_59 - 1;
    var_6_60 = var_4_57 < sp30;
block_13:
    var_2_69 = 0x8000 << 0x2D;
    var_7_71 = 0;
    goto loop_16;
block_15:
    var_6_60 = var_4_57 < sp30;
loop_16:
    if (var_6_60 != 0) {
        goto block_18;
    }
    var_7_71 |= var_2_69;
    var_4_57 -= sp30;
block_18:
    var_2_69 = var_2_69 >> 1;
    var_4_57 *= 2;
    if (var_2_69 != 0) {
        goto block_15;
    }
    if ((var_7_71 & 0xFF) != 0x80) {
        goto block_23;
    }
    if (!(var_7_71 & 0x100)) {
        goto block_22;
    }
    var_7_71 += 0x80;
    goto block_23;
block_22:
    var_7_71 = (var_4_57 != 0) ? (var_7_71 + 0x80) : var_7_71;
block_23:
    *(s32 *)((u8 *)sp_slot + 0x10) = var_7_71;
    var_4_20 = sp_slot;
block_24:
    __pack_d(var_4_20, sp_slot);
    return;
}
#endif /* NON_MATCHING */
