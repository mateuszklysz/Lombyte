/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 73.4444%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit get_iob; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl get_iob\n"
    ".type get_iob, @function\n"
    "get_iob:\n"
    "addiu      $29, $29, -0x30\n"
    "sd         $16, 0x0($29)\n"
    "sd         $17, 0x10($29)\n"
    "daddu      $16, $4, $0\n"
    "sd         $31, 0x20($29)\n"
    "jal        _sceFsIobSemaMK\n"
    "lui       $17, %hi(D_0012FCA0)\n"
    "jal        WaitSema\n"
    "lw        $4, %lo(D_0012FCA0)($17)\n"
    "sltiu      $3, $16, 0x20\n"
    "bnez       $3, .L0011B538\n"
    "lui       $2, %hi(D_00157D80)\n"
    "jal        SignalSema\n"
    "lw        $4, %lo(D_0012FCA0)($17)\n"
    "b          .L0011B550\n"
    "daddu     $2, $0, $0\n"
    ".L0011B538:\n"
    "sll        $16, $16, 4\n"
    "addiu      $2, $2, %lo(D_00157D80)\n"
    "lw         $4, %lo(D_0012FCA0)($17)\n"
    "jal        SignalSema\n"
    "addu      $16, $16, $2\n"
    "daddu      $2, $16, $0\n"
    ".L0011B550:\n"
    "ld         $31, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x30\n"
    ".size get_iob, .-get_iob\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern u32 D_0012FCA0[];
extern u8 D_00157D80[];
extern s32 SignalSema();
extern s32 WaitSema();
extern s32 _sceFsIobSemaMK();
s32 *get_iob(u32 arg0) {
    _sceFsIobSemaMK();
    WaitSema(D_0012FCA0[0]);
    if (arg0 >= 0x20U) {
        SignalSema(D_0012FCA0[0]);
        return NULL;
    }
    SignalSema(D_0012FCA0[0]);
    return (arg0 * 0x10) + D_00157D80;
}
#endif /* NON_MATCHING */
