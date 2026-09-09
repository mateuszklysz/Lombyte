/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 64.5758%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _peepBit; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _peepBit\n"
    ".type _peepBit, @function\n"
    "_peepBit:\n"
    "addiu      $29, $29, -0x40\n"
    "sd         $18, 0x20($29)\n"
    "sd         $16, 0x0($29)\n"
    "sd         $31, 0x30($29)\n"
    "daddu      $16, $4, $0\n"
    "sd         $17, 0x10($29)\n"
    "lw         $2, 0x818($16)\n"
    "bnez       $2, .L00128754\n"
    "daddu     $18, $5, $0\n"
    "lw         $2, 0x83C($16)\n"
    "slt        $2, $2, $18\n"
    "beql       $2, $0, .L00128808\n"
    "lw        $3, 0x838($16)\n"
    ".L00128754:\n"
    "lui        $2, (0x10002010 >> 16)\n"
    "lui        $4, (0x80004000 >> 16)\n"
    "ori        $2, $2, (0x10002010 & 0xFFFF)\n"
    "ori        $4, $4, (0x80004000 & 0xFFFF)\n"
    "lw         $3, 0x0($2)\n"
    "lui        $2, (0x80000000 >> 16)\n"
    "and        $3, $3, $4\n"
    "bne        $3, $2, .L001287C8\n"
    "daddu     $6, $0, $0\n"
    "lui        $17, %hi(D_00132E70)\n"
    "nop\n"
    ".L00128780:\n"
    "daddu      $2, $6, $0\n"
    "slti       $2, $2, 0x1389\n"
    "bnez       $2, .L0012879C\n"
    "addiu     $6, $6, 0x1\n"
    "jal        _dispatchMpegCbNodata\n"
    "lw        $4, 0x858($16)\n"
    "daddu      $6, $0, $0\n"
    ".L0012879C:\n"
    "lui        $3, (0x10002010 >> 16)\n"
    "lui        $4, (0x80004000 >> 16)\n"
    "ori        $3, $3, (0x10002010 & 0xFFFF)\n"
    "ori        $4, $4, (0x80004000 & 0xFFFF)\n"
    "lw         $2, 0x0($3)\n"
    "lui        $5, (0x80000000 >> 16)\n"
    "and        $2, $2, $4\n"
    "beq        $2, $5, .L00128780\n"
    "lui       $2, (0x10002000 >> 16)\n"
    "b          .L001287D4\n"
    "lui       $3, (0x40000000 >> 16)\n"
    ".L001287C8:\n"
    "lui        $17, %hi(D_00132E70)\n"
    "lui        $2, (0x10002000 >> 16)\n"
    "lui        $3, (0x40000000 >> 16)\n"
    ".L001287D4:\n"
    "ori        $2, $2, (0x10002000 & 0xFFFF)\n"
    "addiu      $5, $17, %lo(D_00132E70)\n"
    "sw         $3, 0x0($2)\n"
    "daddu      $4, $16, $0\n"
    "lw         $2, 0x10($5)\n"
    "jal        _waitIpuIdle64\n"
    "sw        $2, 0x818($16)\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    "addiu      $3, $0, 0x20\n"
    "sw         $2, 0x838($16)\n"
    "sw         $3, 0x83C($16)\n"
    "lw         $3, 0x838($16)\n"
    ".L00128808:\n"
    "negu       $2, $18\n"
    "ld         $31, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "srlv       $2, $3, $2\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x40\n"
    ".size _peepBit, .-_peepBit\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library__peepBit_types.h"
#include "types.h"




extern struct M2c_D_00132E70 D_00132E70;
extern s32 _dispatchMpegCbNodata();
extern s32 _waitIpuIdle64();
u32 _peepBit(struct M2c_arg0 *arg0, s32 arg1) {
    s32 temp_18_11;
    s32 var_5_0;
    s32 var_6_25;

    var_5_0 = arg1;
    temp_18_11 = var_5_0;
    if (arg0->unk818 != 0) {
        goto block_2;
    }
    if (arg0->unk83C >= temp_18_11) {
        goto block_10;
    }
block_2:
    var_6_25 = 0;
    if ((*(s32 *)0x10002010 & 0x80004000) != 0x80000000) {
        goto block_8;
    }
loop_4:
    var_6_25 += 1;
    if (var_6_25 < 0x1389) {
        goto block_6;
    }
    _dispatchMpegCbNodata(arg0->unk858, var_5_0, var_6_25);
    var_6_25 = 0;
block_6:
    var_5_0 = 0x80000000;
    if ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000) {
        goto loop_4;
    }
    goto block_9;
block_8:
block_9:
    *(s32 *)0x10002000 = 0x40000000;
    arg0->unk83C = 0x20;
    arg0->unk838 = (u32) ((s64) (_waitIpuIdle64(arg0, &D_00132E70, var_6_25) << 0x20) >> 0x20);
    arg0->unk818 = (s32) D_00132E70.unk10;
block_10:
    return (u32) arg0->unk838 >> -temp_18_11;
}
#endif /* NON_MATCHING */
