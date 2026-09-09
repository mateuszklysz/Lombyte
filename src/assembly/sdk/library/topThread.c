/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 60.2593%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit topThread; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl topThread\n"
    ".type topThread, @function\n"
    "topThread:\n"
    "addiu      $29, $29, -0x80\n"
    "sd         $17, 0x10($29)\n"
    "daddu      $17, $4, $0\n"
    "sd         $22, 0x60($29)\n"
    "sd         $21, 0x50($29)\n"
    "lui        $22, %hi(D_00154500)\n"
    "sd         $20, 0x40($29)\n"
    "lui        $21, %hi(D_001526E8)\n"
    "sd         $19, 0x30($29)\n"
    "addiu      $20, $0, 0x1\n"
    "sd         $18, 0x20($29)\n"
    "addiu      $19, $0, 0x2\n"
    "sd         $16, 0x0($29)\n"
    "addiu      $18, $17, 0x8\n"
    "sd         $31, 0x70($29)\n"
    "addiu      $16, $17, 0x9\n"
    ".L00119208:\n"
    "jal        WaitSema\n"
    "lw        $4, %lo(D_00154500)($22)\n"
    "lw         $3, 0x0($17)\n"
    "andi       $3, $3, 0x1FF\n"
    "addiu      $4, $3, 0x1\n"
    "sll        $3, $3, 1\n"
    "sw         $4, 0x0($17)\n"
    "addu       $2, $18, $3\n"
    "addu       $6, $16, $3\n"
    "lbu        $2, 0x0($2)\n"
    "beq        $2, $20, .L00119270\n"
    "slti      $5, $2, 0x2\n"
    "beqz       $5, .L00119250\n"
    "addiu     $4, $21, %lo(D_001526E8)\n"
    "beqz       $2, .L00119260\n"
    "daddu     $3, $6, $0\n"
    "b          .L00119290\n"
    "nop\n"
    ".L00119250:\n"
    "beq        $2, $19, .L00119280\n"
    "addu      $3, $16, $3\n"
    "b          .L00119290\n"
    "nop\n"
    ".L00119260:\n"
    "jal        WakeupThread\n"
    "lbu       $4, 0x0($3)\n"
    "b          .L00119208\n"
    "nop\n"
    ".L00119270:\n"
    "jal        RotateThreadReadyQueue\n"
    "lbu       $4, 0x0($6)\n"
    "b          .L00119208\n"
    "nop\n"
    ".L00119280:\n"
    "jal        SuspendThread\n"
    "lbu       $4, 0x0($3)\n"
    "b          .L00119208\n"
    "nop\n"
    ".L00119290:\n"
    "jal        kprintf\n"
    "nop\n"
    "b          .L00119208\n"
    "nop\n"
    ".size topThread, .-topThread\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern u8 D_001526E8[];
extern u32 D_00154500[];
extern s32 RotateThreadReadyQueue();
extern s32 SuspendThread();
extern s32 WaitSema();
extern s32 WakeupThread();
extern s32 kprintf();
void topThread(s32 *arg0) {
u8 *temp_16_18;
    s32 temp_3_23;
    s32 temp_3_25;
    s32 temp_5_31;
    u8 *temp_6_28;
    u8 temp_2_29;

    temp_16_18 = arg0 + 9;
loop_1:
    WaitSema(D_00154500[0]);
    temp_3_23 = *arg0 & 0x1FF;
    temp_3_25 = temp_3_23 * 2;
    *arg0 = temp_3_23 + 1;
    temp_6_28 = temp_16_18 + temp_3_25;
    temp_2_29 = *(arg0 + 8 + temp_3_25);
    temp_5_31 = (s32) temp_2_29 < 2;
    if (temp_2_29 == 1) {
        goto block_8;
    }
    if (temp_5_31 == 0) {
        goto block_5;
    }
    if (temp_2_29 == 0) {
        goto block_7;
    }
    goto block_10;
block_5:
    if (temp_2_29 == 2) {
        goto block_9;
    }
    goto block_10;
block_7:
    WakeupThread(*temp_6_28, temp_5_31, temp_6_28);
    goto loop_1;
block_8:
    RotateThreadReadyQueue(*temp_6_28, temp_5_31, temp_6_28);
    goto loop_1;
block_9:
    SuspendThread(*(s32 *)((u8 *)temp_16_18 + temp_3_25), temp_5_31, temp_6_28);
    goto loop_1;
block_10:
    kprintf(D_001526E8, temp_5_31, temp_6_28);
    goto loop_1;
}
#endif /* NON_MATCHING */
