/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 51.3824%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit new_iob; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl new_iob\n"
    ".type new_iob, @function\n"
    "new_iob:\n"
    "addiu      $29, $29, -0x30\n"
    "sd         $17, 0x10($29)\n"
    "sd         $16, 0x0($29)\n"
    "sd         $31, 0x20($29)\n"
    "jal        _sceFsIobSemaMK\n"
    "lui       $17, %hi(D_0012FCA0)\n"
    "jal        WaitSema\n"
    "lw        $4, %lo(D_0012FCA0)($17)\n"
    "lui        $3, %hi(D_00157D80)\n"
    "addiu      $16, $3, %lo(D_00157D80)\n"
    "addiu      $3, $16, 0x200\n"
    "sltu       $2, $16, $3\n"
    "beqz       $2, .L0011B4D8\n"
    "lui       $5, (0x10000000 >> 16)\n"
    "lw         $2, 0x4($16)\n"
    "nop\n"
    ".L0011B4B0:\n"
    "bnel       $2, $0, .L0011B4CC\n"
    "addiu     $16, $16, 0x10\n"
    "lw         $4, %lo(D_0012FCA0)($17)\n"
    "jal        SignalSema\n"
    "sw        $5, 0x4($16)\n"
    "b          .L0011B4E4\n"
    "daddu     $2, $16, $0\n"
    ".L0011B4CC:\n"
    "sltu       $2, $16, $3\n"
    "bnel       $2, $0, .L0011B4B0\n"
    "lw        $2, 0x4($16)\n"
    ".L0011B4D8:\n"
    "jal        SignalSema\n"
    "lw        $4, %lo(D_0012FCA0)($17)\n"
    "daddu      $2, $0, $0\n"
    ".L0011B4E4:\n"
    "ld         $31, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x30\n"
    ".size new_iob, .-new_iob\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_new_iob_types.h"
#include "types.h"




extern u8 D_0012FCA0[];
extern struct M2c_D_00157D80 D_00157D80;
extern s32 SignalSema();
extern s32 WaitSema();
extern s32 _sceFsIobSemaMK();
s32 *new_iob(void) {
    struct M2c_var_16_12 *var_16_12;
    s32 var_2_17;
    s32 *temp_3_13;

    _sceFsIobSemaMK();
    WaitSema(D_0012FCA0[0]);
    var_16_12 = &D_00157D80;
    temp_3_13 = ((u8 *)&D_00157D80 + 0x200);
    if ((u32) &D_00157D80 < (u32) temp_3_13) {
        var_2_17 = D_00157D80.unk4;
loop_2:
        if (var_2_17 != 0) {
            var_16_12 += 0x10;
            if ((u32) var_16_12 < (u32) temp_3_13) {
                var_2_17 = var_16_12->unk4;
                goto loop_2;
            }
            goto block_9;
        }
        var_16_12->unk4 = 0x10000000;
        SignalSema(D_0012FCA0[0], 0x10000000);
        return var_16_12;
    }
block_9:
    SignalSema(D_0012FCA0[0], 0x10000000);
    return NULL;
}
#endif /* NON_MATCHING */
