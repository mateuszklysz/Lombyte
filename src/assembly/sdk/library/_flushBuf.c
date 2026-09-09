/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 64.6167%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _flushBuf; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _flushBuf\n"
    ".type _flushBuf, @function\n"
    "_flushBuf:\n"
    "addiu      $29, $29, -0x40\n"
    "lui        $2, (0x10002010 >> 16)\n"
    "sd         $17, 0x10($29)\n"
    "ori        $2, $2, (0x10002010 & 0xFFFF)\n"
    "sd         $16, 0x0($29)\n"
    "lui        $6, (0x80004000 >> 16)\n"
    "sd         $31, 0x30($29)\n"
    "ori        $6, $6, (0x80004000 & 0xFFFF)\n"
    "sd         $18, 0x20($29)\n"
    "daddu      $16, $4, $0\n"
    "daddu      $17, $5, $0\n"
    "daddu      $7, $0, $0\n"
    "lw         $3, 0x0($2)\n"
    "lui        $2, (0x80000000 >> 16)\n"
    "and        $3, $3, $6\n"
    "bne        $3, $2, .L001288B8\n"
    "lui       $18, %hi(D_00132E70)\n"
    "nop\n"
    ".L00128870:\n"
    "daddu      $2, $7, $0\n"
    "slti       $2, $2, 0x1389\n"
    "bnez       $2, .L0012888C\n"
    "addiu     $7, $7, 0x1\n"
    "jal        _dispatchMpegCbNodata\n"
    "lw        $4, 0x858($16)\n"
    "daddu      $7, $0, $0\n"
    ".L0012888C:\n"
    "lui        $3, (0x10002010 >> 16)\n"
    "lui        $4, (0x80004000 >> 16)\n"
    "ori        $3, $3, (0x10002010 & 0xFFFF)\n"
    "ori        $4, $4, (0x80004000 & 0xFFFF)\n"
    "lw         $2, 0x0($3)\n"
    "lui        $5, (0x80000000 >> 16)\n"
    "and        $2, $2, $4\n"
    "beq        $2, $5, .L00128870\n"
    "lui       $2, (0x40000000 >> 16)\n"
    "b          .L001288C0\n"
    "lui       $3, (0x10002000 >> 16)\n"
    ".L001288B8:\n"
    "lui        $2, (0x40000000 >> 16)\n"
    "lui        $3, (0x10002000 >> 16)\n"
    ".L001288C0:\n"
    "or         $2, $17, $2\n"
    "ori        $3, $3, (0x10002000 & 0xFFFF)\n"
    "sw         $2, 0x0($3)\n"
    "srl        $5, $2, 28\n"
    "addiu      $2, $18, %lo(D_00132E70)\n"
    "sll        $5, $5, 2\n"
    "addu       $5, $5, $2\n"
    "daddu      $4, $16, $0\n"
    "lw         $2, 0x0($5)\n"
    "jal        _waitIpuIdle64\n"
    "sw        $2, 0x818($16)\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    "addiu      $3, $0, 0x20\n"
    "sw         $3, 0x83C($16)\n"
    "sw         $2, 0x838($16)\n"
    "ld         $31, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x40\n"
    ".size _flushBuf, .-_flushBuf\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library__flushBuf_types.h"
#include "types.h"


extern u8 D_00132E70[];
extern s32 _dispatchMpegCbNodata();
extern s32 _waitIpuIdle64();
void _flushBuf(struct M2c_arg0 *arg0, s32 arg1) {
    s32 *temp_5_51;
    s32 temp_17_13;
    s32 var_5_0;
    s32 var_7_14;
    s64 temp_2_57;
    u32 temp_2_45;

    var_5_0 = arg1;
    temp_17_13 = var_5_0;
    var_7_14 = 0;
    if ((*(s32 *)0x10002010 & 0x80004000) == 0x80000000) {
        do {
            var_7_14 += 1;
            if (var_7_14 >= 0x1389) {
                _dispatchMpegCbNodata(arg0->unk858, var_5_0);
                var_7_14 = 0;
            }
            var_5_0 = 0x80000000;
        } while ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000);
    }
    temp_2_45 = temp_17_13 | 0x40000000;
    *(u32 *)0x10002000 = temp_2_45;
    temp_5_51 = ((temp_2_45 >> 0x1C) * 4) + D_00132E70;
    arg0->unk818 = (s32) *temp_5_51;
    temp_2_57 = (s64) (_waitIpuIdle64(arg0, temp_5_51) << 0x20) >> 0x20;
    arg0->unk83C = 0x20;
    arg0->unk838 = (s32) temp_2_57;
}
#endif /* NON_MATCHING */
