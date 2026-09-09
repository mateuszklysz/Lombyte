/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 58.6444%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit __sbprintf; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl __sbprintf\n"
    ".type __sbprintf, @function\n"
    "__sbprintf:\n"
    "addiu      $29, $29, -0x490\n"
    "addiu      $10, $0, 0x400\n"
    "sd         $17, 0x470($29)\n"
    "addiu      $11, $29, 0x60\n"
    "sd         $16, 0x460($29)\n"
    "daddu      $17, $4, $0\n"
    "sd         $31, 0x480($29)\n"
    "daddu      $4, $29, $0\n"
    "lhu        $2, 0xC($17)\n"
    "lw         $8, 0x54($17)\n"
    "lhu        $9, 0xE($17)\n"
    "andi       $2, $2, 0xFFFD\n"
    "lw         $7, 0x1C($17)\n"
    "lw         $3, 0x24($17)\n"
    "sw         $8, 0x54($29)\n"
    "sh         $2, 0xC($29)\n"
    "sh         $9, 0xE($29)\n"
    "sw         $7, 0x1C($29)\n"
    "sw         $3, 0x24($29)\n"
    "sw         $11, 0x10($29)\n"
    "sw         $10, 0x14($29)\n"
    "sw         $11, 0x0($29)\n"
    "sw         $10, 0x8($29)\n"
    "jal        func_00116DA8\n"
    "sw        $0, 0x18($29)\n"
    "daddu      $16, $2, $0\n"
    "bltz       $16, .L00116D74\n"
    "lhu       $2, 0xC($29)\n"
    "jal        func_00113968\n"
    "daddu     $4, $29, $0\n"
    "addiu      $3, $0, -0x1\n"
    "movn       $16, $3, $2\n"
    "lhu        $2, 0xC($29)\n"
    ".L00116D74:\n"
    "andi       $2, $2, 0x40\n"
    "beqz       $2, .L00116D90\n"
    "daddu     $2, $16, $0\n"
    "lhu        $2, 0xC($17)\n"
    "ori        $2, $2, 0x40\n"
    "sh         $2, 0xC($17)\n"
    "daddu      $2, $16, $0\n"
    ".L00116D90:\n"
    "ld         $31, 0x480($29)\n"
    "ld         $17, 0x470($29)\n"
    "ld         $16, 0x460($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x490\n"
    ".size __sbprintf, .-__sbprintf\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_deci_debug_sbprintf_types.h"
#include "types.h"


extern s32 fflush();
extern s32 func_00116DA8();
s32 __sbprintf(struct M2c_arg0 *arg0) {
u8 sp_slot[0x490];    u16 spC;
    u16 spE;
    s32 *sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp24;
    s32 sp54;
    s32 sp60;
    s32 temp_7_15;
    s32 temp_8_12;
    s32 var_16_28;
    u16 temp_9_13;

    temp_8_12 = arg0->unk54;
    temp_9_13 = arg0->unkE;
    temp_7_15 = arg0->unk1C;
    sp54 = temp_8_12;
    spC = arg0->unkC & 0xFFFD;
    spE = temp_9_13;
    sp1C = temp_7_15;
    sp24 = arg0->unk24;
    sp10 = &sp60;
    sp14 = 0x400;
    sp18 = 0;
    var_16_28 = func_00116DA8(sp_slot, temp_7_15, temp_8_12, temp_9_13, 0x400, &sp60, &sp60, 0x400);
    if (var_16_28 >= 0) {
        var_16_28 = (fflush(sp_slot) != 0) ? -1 : var_16_28;
    }
    if (spC & 0x40) {
        arg0->unkC = (u16) (arg0->unkC | 0x40);
    }
    return var_16_28;
}
#endif /* NON_MATCHING */
