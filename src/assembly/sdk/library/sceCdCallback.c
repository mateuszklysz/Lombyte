/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 65.8261%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceCdCallback; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceCdCallback\n"
    ".type sceCdCallback, @function\n"
    "sceCdCallback:\n"
    "addiu      $29, $29, -0x30\n"
    "sd         $17, 0x10($29)\n"
    "daddu      $17, $4, $0\n"
    "sd         $31, 0x20($29)\n"
    "sd         $16, 0x0($29)\n"
    "jal        sceCdSync\n"
    "addiu     $4, $0, 0x1\n"
    "bnez       $2, .L001206C0\n"
    "daddu     $2, $0, $0\n"
    "jal        DIntr\n"
    "nop\n"
    "lui        $3, %hi(D_00159740)\n"
    "lw         $16, %lo(D_00159740)($3)\n"
    "beqz       $2, .L001206BC\n"
    "sw        $17, %lo(D_00159740)($3)\n"
    "jal        EnableInterrupts\n"
    "nop\n"
    ".L001206BC:\n"
    "daddu      $2, $16, $0\n"
    ".L001206C0:\n"
    "ld         $31, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x30\n"
    ".size sceCdCallback, .-sceCdCallback\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern u32 D_00159740[];
extern s32 DIntr();
extern s32 EnableInterrupts();
extern s32 sceCdSync();
s32 sceCdCallback(s32 arg0) {
    s32 temp_16_15;
    s32 var_2_11;

    var_2_11 = 0;
    if (sceCdSync(1) == 0) {
        temp_16_15 = D_00159740[0];
        D_00159740[0] = arg0;
        if (DIntr() != 0) {
            EnableInterrupts();
        }
        var_2_11 = temp_16_15;
    }
    return var_2_11;
}
#endif /* NON_MATCHING */
