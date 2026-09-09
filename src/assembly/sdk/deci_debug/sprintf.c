/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 21.6071%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sprintf; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sprintf\n"
    ".type sprintf, @function\n"
    "sprintf:\n"
    "lui        $2, %hi(D_0012F76C)\n"
    "addiu      $29, $29, -0xE0\n"
    "lw         $13, %lo(D_0012F76C)($2)\n"
    "lui        $3, (0x7FFFFFFF >> 16)\n"
    "daddu      $12, $4, $0\n"
    "ori        $3, $3, (0x7FFFFFFF & 0xFFFF)\n"
    "sd         $6, 0xB0($29)\n"
    "addiu      $2, $0, 0x208\n"
    "sd         $31, 0x60($29)\n"
    "daddu      $4, $29, $0\n"
    "sd         $7, 0xB8($29)\n"
    "addiu      $6, $29, 0xB0\n"
    "sd         $8, 0xC0($29)\n"
    "sd         $9, 0xC8($29)\n"
    "sd         $10, 0xD0($29)\n"
    "sd         $11, 0xD8($29)\n"
    "sh         $2, 0xC($29)\n"
    "sw         $12, 0x10($29)\n"
    "sw         $3, 0x14($29)\n"
    "sw         $13, 0x54($29)\n"
    "sw         $12, 0x0($29)\n"
    "jal        func_00116DA8\n"
    "sw        $3, 0x8($29)\n"
    "lw         $3, 0x0($29)\n"
    "ld         $31, 0x60($29)\n"
    "sb         $0, 0x0($3)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0xE0\n"
    ".size sprintf, .-sprintf\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 D_0012F76C;
extern s32 func_00116DA8();
void sprintf(s32 arg1, s8 *arg0, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7) {
u8 sp_slot[0xE0];    s8 *sp0;
    s32 sp8;
    s16 spC;
    s8 *sp10;
    s32 sp14;
    s32 sp54;
    s64 spB0;
    s64 spB8;
    s64 spC0;
    s64 spC8;
    s64 spD0;
    s64 spD8;

    spB0 = arg2;
    spB8 = arg3;
    spC0 = arg4;
    spC8 = arg5;
    spD0 = arg6;
    spD8 = arg7;
    spC = 0x208;
    sp10 = arg0;
    sp14 = 0x7FFFFFFF;
    sp54 = D_0012F76C;
    sp0 = arg0;
    sp8 = 0x7FFFFFFF;
    func_00116DA8(sp_slot, &spB0);
    *sp0 = 0;
}
#endif /* NON_MATCHING */
