/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 64.8537%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit VSync2; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl VSync2\n"
    ".type VSync2, @function\n"
    "VSync2:\n"
    "addiu      $29, $29, -0x20\n"
    "sd         $31, 0x10($29)\n"
    "daddu      $4, $29, $0\n"
    "sw         $0, 0x0($29)\n"
    "jal        SetVSyncFlag\n"
    "ori       $5, $29, 0x8\n"
    "jal        DIntr\n"
    "nop\n"
    "lui        $3, (0x1000F000 >> 16)\n"
    "addiu      $4, $0, 0x4\n"
    "ori        $3, $3, (0x1000F000 & 0xFFFF)\n"
    "sw         $4, 0x0($3)\n"
    "sync\n"
    "beqz       $2, .L00118CA8\n"
    "lui       $3, (0x1000F000 >> 16)\n"
    "jal        EnableInterrupts\n"
    "nop\n"
    "lui        $3, (0x1000F000 >> 16)\n"
    ".L00118CA8:\n"
    "ori        $3, $3, (0x1000F000 & 0xFFFF)\n"
    "nop\n"
    ".L00118CB0:\n"
    "lw         $2, 0x0($3)\n"
    "andi       $2, $2, 0x4\n"
    "bnez       $2, .L00118CCC\n"
    "nop\n"
    "lw         $2, 0x0($29)\n"
    "beqz       $2, .L00118CB0\n"
    "nop\n"
    ".L00118CCC:\n"
    "jal        DIntr\n"
    "nop\n"
    "addiu      $3, $0, 0x4\n"
    "lui        $1, (0x10010000 >> 16)\n"
    "sw         $3, -0x1000($1)\n"
    "sync\n"
    "beqz       $2, .L00118CF4\n"
    "nop\n"
    "jal        EnableInterrupts\n"
    "nop\n"
    ".L00118CF4:\n"
    "ld         $2, 0x8($29)\n"
    "ld         $31, 0x10($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x20\n"
    ".size VSync2, .-VSync2\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 DIntr();
extern s32 EnableInterrupts();
extern s32 SetVSyncFlag();
s64 VSync2(void) {
u8 sp_slot[0x20];    s32 sp0;
    s64 sp8;
    s32 temp_2_33;
    s32 temp_2_9;

    sp0 = 0;
    SetVSyncFlag(sp_slot, &sp8);
    temp_2_9 = DIntr();
    *(s32 *)0x1000F000 = 4;
    M2C_SYNC();
    if (temp_2_9 != 0) {
        EnableInterrupts(4);
    }
loop_3:
    if (!(*(volatile u32 *)0x1000F000 & 4)) {
        if (sp0 == 0) {
            goto loop_3;
        }
    }
    temp_2_33 = DIntr();
    *(volatile u32 *)0x1000F000 = 4;
    M2C_SYNC();
    if (temp_2_33 != 0) {
        EnableInterrupts();
    }
    return sp8;
}
#endif /* NON_MATCHING */
