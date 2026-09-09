/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 27.8400%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _clearEach; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _clearEach\n"
    ".type _clearEach, @function\n"
    "_clearEach:\n"
    "addiu      $29, $29, -0x10\n"
    "addiu      $2, $0, 0x1\n"
    "sd         $31, 0x0($29)\n"
    "sw         $2, 0x818($4)\n"
    "jal        DIntr\n"
    "sw        $0, 0x1B0($4)\n"
    "lui        $6, (0x1000F520 >> 16)\n"
    "lui        $7, (0x1000F590 >> 16)\n"
    "ori        $6, $6, (0x1000F520 & 0xFFFF)\n"
    "lui        $8, (0x10000 >> 16)\n"
    "lw         $3, 0x0($6)\n"
    "ori        $7, $7, (0x1000F590 & 0xFFFF)\n"
    "lui        $4, (0x1000B000 >> 16)\n"
    "lui        $5, (0x1000B400 >> 16)\n"
    "or         $3, $3, $8\n"
    "ori        $4, $4, (0x1000B000 & 0xFFFF)\n"
    "sw         $3, 0x0($7)\n"
    "ori        $5, $5, (0x1000B400 & 0xFFFF)\n"
    "sw         $0, 0x0($4)\n"
    "lui        $3, (0x1000D400 >> 16)\n"
    "sw         $0, 0x0($5)\n"
    "ori        $3, $3, (0x1000D400 & 0xFFFF)\n"
    "sw         $0, 0x0($3)\n"
    "lui        $4, (0xFFFEFFFF >> 16)\n"
    "ori        $4, $4, (0xFFFEFFFF & 0xFFFF)\n"
    "lw         $3, 0x0($6)\n"
    "and        $3, $3, $4\n"
    "sw         $3, 0x0($7)\n"
    "beqz       $2, .L0012C29C\n"
    "lui       $2, (0x1000B020 >> 16)\n"
    "jal        EnableInterrupts\n"
    "nop\n"
    "lui        $2, (0x1000B020 >> 16)\n"
    ".L0012C29C:\n"
    "lui        $4, (0x1000B420 >> 16)\n"
    "ori        $2, $2, (0x1000B020 & 0xFFFF)\n"
    "ori        $4, $4, (0x1000B420 & 0xFFFF)\n"
    "sw         $0, 0x0($2)\n"
    "lui        $3, (0x1000D420 >> 16)\n"
    "sw         $0, 0x0($4)\n"
    "ori        $3, $3, (0x1000D420 & 0xFFFF)\n"
    "sw         $0, 0x0($3)\n"
    "lui        $2, (0x10002010 >> 16)\n"
    "ori        $2, $2, (0x10002010 & 0xFFFF)\n"
    "lui        $3, (0x40000000 >> 16)\n"
    "ld         $31, 0x0($29)\n"
    "daddu      $4, $0, $0\n"
    "sw         $3, 0x0($2)\n"
    "daddu      $5, $0, $0\n"
    "j          sceIpuSync\n"
    "addiu     $29, $29, 0x10\n"
    ".size _clearEach, .-_clearEach\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library__clearEach_types.h"
#include "types.h"


extern s32 DIntr();
extern s32 EnableInterrupts();
void _clearEach(struct M2c_arg0 *arg0) {
    s32 temp_2_7;

    arg0->unk818 = 1;
    arg0->unk1B0 = 0;
    temp_2_7 = DIntr();
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 | 0x10000;
    *(s32 *)0x1000B000 = 0;
    *(s32 *)0x1000B400 = 0;
    *(s32 *)0x1000D400 = 0;
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 & 0xFFFEFFFF;
    if (temp_2_7 != 0) {
        EnableInterrupts(0xFFFEFFFF, 0x1000B400, 0x1000F520, 0x1000F590, 0x10000);
    }
    *(s32 *)0x1000B020 = 0;
    *(s32 *)0x1000B420 = 0;
    *(s32 *)0x1000D420 = 0;
    *(s32 *)0x10002010 = 0x40000000;
    sceIpuSync(0, 0);
}
#endif /* NON_MATCHING */
