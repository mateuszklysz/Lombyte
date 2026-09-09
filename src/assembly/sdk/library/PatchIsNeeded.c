/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 76.6154%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit PatchIsNeeded; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl PatchIsNeeded\n"
    ".type PatchIsNeeded, @function\n"
    "PatchIsNeeded:\n"
    "addiu      $29, $29, -0x30\n"
    "sd         $16, 0x10($29)\n"
    "sd         $31, 0x20($29)\n"
    "jal        GetOsdConfigParam\n"
    "daddu     $4, $29, $0\n"
    "lw         $3, 0x0($29)\n"
    "lui        $2, (0xFFFF1FFF >> 16)\n"
    "ori        $2, $2, (0xFFFF1FFF & 0xFFFF)\n"
    "addiu      $16, $29, 0x4\n"
    "and        $3, $3, $2\n"
    "daddu      $4, $16, $0\n"
    "ori        $3, $3, 0x2000\n"
    "jal        SetOsdConfigParam\n"
    "sw        $3, 0x4($29)\n"
    "jal        GetOsdConfigParam\n"
    "daddu     $4, $16, $0\n"
    "jal        SetOsdConfigParam\n"
    "daddu     $4, $29, $0\n"
    "lw         $2, 0x4($29)\n"
    "ld         $31, 0x20($29)\n"
    "srl        $2, $2, 13\n"
    "ld         $16, 0x10($29)\n"
    "andi       $2, $2, 0x7\n"
    "sltiu      $2, $2, 0x1\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x30\n"
    ".size PatchIsNeeded, .-PatchIsNeeded\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 GetOsdConfigParam();
extern s32 SetOsdConfigParam();
s32 PatchIsNeeded(void) {    s32 sp0;
u8 sp_slot[0x30];    u32 sp4;

    GetOsdConfigParam(sp_slot);
    sp4 = (sp0 & 0xFFFF1FFF) | 0x2000;
    SetOsdConfigParam(&sp4);
    GetOsdConfigParam(&sp4);
    SetOsdConfigParam(sp_slot);
    return ((sp4 >> 0xD) & 7) == 0;
}
#endif /* NON_MATCHING */
