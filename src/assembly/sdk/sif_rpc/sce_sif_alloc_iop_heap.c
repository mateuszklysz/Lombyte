/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 69.2857%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceSifAllocIopHeap; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceSifAllocIopHeap\n"
    ".type sceSifAllocIopHeap, @function\n"
    "sceSifAllocIopHeap:\n"
    "lui        $3, %hi(D_0012FCAC)\n"
    "addiu      $29, $29, -0x30\n"
    "lw         $2, %lo(D_0012FCAC)($3)\n"
    "daddu      $5, $4, $0\n"
    "sd         $31, 0x20($29)\n"
    "bltz       $2, .L0011C924\n"
    "sd        $16, 0x10($29)\n"
    "lui        $7, %hi(D_001580C0)\n"
    "lui        $4, %hi(D_00158040)\n"
    "sw         $5, %lo(D_001580C0)($7)\n"
    "lui        $16, %hi(D_00158080)\n"
    "addiu      $4, $4, %lo(D_00158040)\n"
    "addiu      $7, $7, %lo(D_001580C0)\n"
    "sw         $0, 0x0($29)\n"
    "addiu      $5, $0, 0x1\n"
    "daddu      $6, $0, $0\n"
    "addiu      $8, $0, 0x4\n"
    "addiu      $9, $16, %lo(D_00158080)\n"
    "addiu      $10, $0, 0x4\n"
    "jal        sceSifCallRpc\n"
    "daddu     $11, $0, $0\n"
    "bgez       $2, .L0011C928\n"
    "lw        $2, %lo(D_00158080)($16)\n"
    ".L0011C924:\n"
    "daddu      $2, $0, $0\n"
    ".L0011C928:\n"
    "ld         $31, 0x20($29)\n"
    "ld         $16, 0x10($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x30\n"
    ".size sceSifAllocIopHeap, .-sceSifAllocIopHeap\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 D_0012FCAC;
extern u8 D_00158040[];
extern u8 D_00158080[];
extern u8 D_001580C0[];
extern s32 sceSifCallRpc();
s32 sceSifAllocIopHeap(s32 arg0) {
    s32 var_2_25;

    if ((D_0012FCAC < 0) || (*(s32 *)D_001580C0 = arg0, var_2_25 = D_00158080, (sceSifCallRpc(D_00158040, 1, 0, D_001580C0, 4, D_00158080, 4, 0, 0) < 0))) {
        var_2_25 = 0;
    }
    return var_2_25;
}
#endif /* NON_MATCHING */
