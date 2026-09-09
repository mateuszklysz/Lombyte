/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 67.2222%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit VSync; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl VSync\n"
    ".type VSync, @function\n"
    "VSync:\n"
    "addiu      $29, $29, -0x10\n"
    "sd         $31, 0x0($29)\n"
    "jal        DIntr\n"
    "nop\n"
    "lui        $3, (0x1000F000 >> 16)\n"
    "addiu      $4, $0, 0x4\n"
    "ori        $3, $3, (0x1000F000 & 0xFFFF)\n"
    "sw         $4, 0x0($3)\n"
    "sync\n"
    "beqz       $2, .L00118C08\n"
    "lui       $3, (0x1000F000 >> 16)\n"
    "jal        EnableInterrupts\n"
    "nop\n"
    "lui        $3, (0x1000F000 >> 16)\n"
    ".L00118C08:\n"
    "ori        $3, $3, (0x1000F000 & 0xFFFF)\n"
    "nop\n"
    ".L00118C10:\n"
    "lw         $2, 0x0($3)\n"
    "andi       $2, $2, 0x4\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "beqz       $2, .L00118C10\n"
    "nop\n"
    "jal        DIntr\n"
    "nop\n"
    "lui        $3, (0x1000F000 >> 16)\n"
    "addiu      $4, $0, 0x4\n"
    "ori        $3, $3, (0x1000F000 & 0xFFFF)\n"
    "sw         $4, 0x0($3)\n"
    "sync\n"
    "beqz       $2, .L00118C58\n"
    "ld        $31, 0x0($29)\n"
    "j          EnableInterrupts\n"
    "addiu     $29, $29, 0x10\n"
    ".L00118C58:\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x10\n"
    ".size VSync, .-VSync\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 DIntr();
extern s32 EnableInterrupts();
void VSync(void) {
    s32 temp_2_28;
    s32 temp_2_5;

    temp_2_5 = DIntr();
    *(s32 *)0x1000F000 = 4;
    M2C_SYNC();
    if (temp_2_5 != 0) {
        EnableInterrupts(4);
    }
    do {

    } while (!(*(volatile u32 *)0x1000F000 & 4));
    temp_2_28 = DIntr();
    *(volatile u32 *)0x1000F000 = 4;
    M2C_SYNC();
    if (temp_2_28 != 0) {
        EnableInterrupts(4);
    }
}
#endif /* NON_MATCHING */
