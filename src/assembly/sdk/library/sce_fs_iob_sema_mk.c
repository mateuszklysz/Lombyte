/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 67.5217%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _sceFsIobSemaMK; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _sceFsIobSemaMK\n"
    ".type _sceFsIobSemaMK, @function\n"
    "_sceFsIobSemaMK:\n"
    "addiu      $29, $29, -0x40\n"
    "addiu      $3, $0, -0x1\n"
    "sd         $16, 0x20($29)\n"
    "lui        $16, %hi(D_0012FCA0)\n"
    "sd         $31, 0x30($29)\n"
    "lw         $2, %lo(D_0012FCA0)($16)\n"
    "bne        $2, $3, .L0011B460\n"
    "ld        $31, 0x30($29)\n"
    "addiu      $2, $0, 0x1\n"
    "sw         $0, 0x14($29)\n"
    "sw         $2, 0x4($29)\n"
    "daddu      $4, $29, $0\n"
    "jal        CreateSema\n"
    "sw        $2, 0x8($29)\n"
    "sw         $2, %lo(D_0012FCA0)($16)\n"
    "jal        CreateSema\n"
    "daddu     $4, $29, $0\n"
    "lui        $3, %hi(D_0012FCA4)\n"
    "sw         $2, %lo(D_0012FCA4)($3)\n"
    "ld         $31, 0x30($29)\n"
    ".L0011B460:\n"
    "ld         $16, 0x20($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x40\n"
    ".size _sceFsIobSemaMK, .-_sceFsIobSemaMK\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern u32 D_0012FCA0[];
extern u32 D_0012FCA4[];
extern s32 CreateSema();
void _sceFsIobSemaMK(void) {
    if (D_0012FCA0[0] == -1) {
u8 sp_slot[0x40];        D_0012FCA0[0] = CreateSema(sp_slot, 1, 1, 0);
        D_0012FCA4[0] = CreateSema(sp_slot);
    }
}
#endif /* NON_MATCHING */
