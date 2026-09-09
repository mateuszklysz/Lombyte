/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 89.3191%
 * blocker: Codex judged the logic correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _skipMB0; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _skipMB0\n"
    ".type _skipMB0, @function\n"
    "_skipMB0:\n"
    "addiu      $29, $29, -0x20\n"
    "addiu      $3, $0, 0x140\n"
    "sd         $16, 0x0($29)\n"
    "addiu      $9, $0, 0x1\n"
    "sd         $31, 0x10($29)\n"
    "daddu      $16, $8, $0\n"
    "addiu      $8, $0, 0x2\n"
    "lw         $2, 0x810($4)\n"
    "mult       $10, $2, $3\n"
    "addu       $2, $10, $4\n"
    "sw         $9, 0x6CC($2)\n"
    "sw         $9, 0x1B0($4)\n"
    "lw         $2, 0x150($4)\n"
    "bnel       $2, $8, .L00127B90\n"
    "lw        $3, 0x174($4)\n"
    "sw         $0, 0x0($5)\n"
    "sw         $0, 0x14($5)\n"
    "sw         $0, 0x10($5)\n"
    "sw         $0, 0x4($5)\n"
    "lw         $3, 0x174($4)\n"
    ".L00127B90:\n"
    "addiu      $2, $0, 0x3\n"
    "bnel       $3, $2, .L00127BA4\n"
    "sw        $9, 0x0($6)\n"
    "b          .L00127BB8\n"
    "sw        $8, 0x0($6)\n"
    ".L00127BA4:\n"
    "lw         $2, 0x174($4)\n"
    "xori       $2, $2, 0x2\n"
    "sltiu      $2, $2, 0x1\n"
    "sw         $2, 0x0($7)\n"
    "sw         $2, 0x4($7)\n"
    ".L00127BB8:\n"
    "lw         $3, 0x150($4)\n"
    "addiu      $2, $0, 0x1\n"
    "bnel       $3, $2, .L00127BDC\n"
    "lw        $3, 0x0($16)\n"
    "lui        $5, %hi(D_00153868)\n"
    "jal        _Error\n"
    "addiu     $5, $5, %lo(D_00153868)\n"
    "daddu      $9, $0, $0\n"
    "lw         $3, 0x0($16)\n"
    ".L00127BDC:\n"
    "addiu      $4, $0, -0x2\n"
    "ld         $31, 0x10($29)\n"
    "daddu      $2, $9, $0\n"
    "and        $3, $3, $4\n"
    "sw         $3, 0x0($16)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x20\n"
    ".size _skipMB0, .-_skipMB0\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_skip_mb0_types.h"
#include "types.h"






extern u8 D_00153868[];
extern s32 _Error();
s32 _skipMB0(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1, s32 *arg2, struct M2c_arg3 *arg3, s32 *arg4) {
    s32 temp_10_11;
    s32 temp_2_32;
    s32 var_9_6;

    var_9_6 = 1;
    temp_10_11 = arg0->unk810 * 0x140;
    *(s32 *)((u8 *)(((u8 *)arg0 + (temp_10_11))) + 0x6CC) = 1;
    arg0->unk1B0 = 1;
    if (arg0->unk150 == 2) {
        arg1->unk14 = 0;
        arg1->unk10 = 0;
        arg1->unk4 = 0;
        arg1->unk0 = 0;
    }
    if (arg0->unk174 != 3) {
        *arg2 = 1;
        temp_2_32 = arg0->unk174 == 2;
        arg3->unk0 = temp_2_32;
        arg3->unk4 = temp_2_32;
    } else {
        *arg2 = 2;
    }
    if (arg0->unk150 == 1) {
        _Error(D_00153868, 2, 1, temp_10_11);
        var_9_6 = 0;
    }
    *arg4 &= ~1;
    return var_9_6;
}
#endif /* NON_MATCHING */
