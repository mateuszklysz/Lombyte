/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 77.7778%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceDbcSetWorkAddr; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceDbcSetWorkAddr\n"
    ".type sceDbcSetWorkAddr, @function\n"
    "sceDbcSetWorkAddr:\n"
    "addiu      $29, $29, -0x30\n"
    "lui        $2, %hi(D_0015B008)\n"
    "sd         $16, 0x10($29)\n"
    "lui        $5, (0x80000904 >> 16)\n"
    "lui        $16, %hi(D_0015B080)\n"
    "sd         $31, 0x20($29)\n"
    "addiu      $7, $16, %lo(D_0015B080)\n"
    "ori        $5, $5, (0x80000904 & 0xFFFF)\n"
    "sw         $4, 0x4($7)\n"
    "daddu      $6, $0, $0\n"
    "addiu      $4, $2, %lo(D_0015B008)\n"
    "sw         $0, 0x0($29)\n"
    "addiu      $8, $0, 0x400\n"
    "daddu      $9, $7, $0\n"
    "addiu      $10, $0, 0x400\n"
    "jal        sceSifCallRpc\n"
    "daddu     $11, $0, $0\n"
    "bgez       $2, .L00124704\n"
    "lw        $2, %lo(D_0015B080)($16)\n"
    "lui        $4, %hi(D_00153558)\n"
    "jal        func_00124A20\n"
    "addiu     $4, $4, %lo(D_00153558)\n"
    "daddu      $2, $0, $0\n"
    ".L00124704:\n"
    "ld         $31, 0x20($29)\n"
    "ld         $16, 0x10($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x30\n"
    ".size sceDbcSetWorkAddr, .-sceDbcSetWorkAddr\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_sceDbcSetWorkAddr_types.h"
#include "types.h"


extern u8 D_00153558[];
extern u8 D_0015B008[];
extern struct M2c_D_0015B080 D_0015B080;
extern s32 func_00124A20();
extern s32 sceSifCallRpc();
s32 sceDbcSetWorkAddr(s32 arg0) {
    s32 var_2_21;
    register struct M2c_D_0015B080 *work __asm__("s0") = &D_0015B080;

    work->unk4 = arg0;
    var_2_21 = work->unk0;
    if (sceSifCallRpc(D_0015B008, 0x80000904, 0, work, 0x400, work, 0x400, 0, 0) < 0) {
        func_00124A20(D_00153558);
        var_2_21 = 0;
    }
    return var_2_21;
}
#endif /* NON_MATCHING */
