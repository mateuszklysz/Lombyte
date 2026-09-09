/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 91.8518%
 * blocker: Codex judged the logic correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceCdSyncS; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceCdSyncS\n"
    ".type sceCdSyncS, @function\n"
    "sceCdSyncS:\n"
    "addiu      $29, $29, -0x20\n"
    "sd         $31, 0x10($29)\n"
    "bnez       $4, .L00120D20\n"
    "sd        $16, 0x0($29)\n"
    "lui        $2, %hi(D_001312D0)\n"
    "lw         $3, %lo(D_001312D0)($2)\n"
    "blez       $3, .L00120CF8\n"
    "lui       $4, %hi(D_00152F00)\n"
    "jal        scePrintf\n"
    "addiu     $4, $4, %lo(D_00152F00)\n"
    ".L00120CF8:\n"
    "b          .L00120D08\n"
    "lui       $16, %hi(D_00132D08)\n"
    ".L00120D00:\n"
    "jal        sceCdDelayThread\n"
    "addiu     $4, $0, 0x3C\n"
    ".L00120D08:\n"
    "jal        SceSifCheckStatRpc\n"
    "addiu     $4, $16, %lo(D_00132D08)\n"
    "bnez       $2, .L00120D00\n"
    "daddu     $2, $0, $0\n"
    "b          .L00120D30\n"
    "ld        $31, 0x10($29)\n"
    ".L00120D20:\n"
    "lui        $4, %hi(D_00132D08)\n"
    "jal        SceSifCheckStatRpc\n"
    "addiu     $4, $4, %lo(D_00132D08)\n"
    "ld         $31, 0x10($29)\n"
    ".L00120D30:\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x20\n"
    ".size sceCdSyncS, .-sceCdSyncS\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 D_001312D0[];
extern u8 D_00132D08[];
extern u8 D_00152F00[];
extern s32 SceSifCheckStatRpc();
extern s32 sceCdDelayThread();
extern s32 scePrintf();
s32 sceCdSyncS(s32 arg0) {
    register u32 stat_base __asm__("s0");
    if (arg0 != 0) {
        goto block_7;
    }
    if (D_001312D0[0] <= 0) {
        goto block_3;
    }
    scePrintf(D_00152F00);
block_3:
    stat_base = 0x00130000;
    goto loop_5;
block_4:
    sceCdDelayThread(0x3C);
loop_5:
    if (SceSifCheckStatRpc((void *)(stat_base + 0x2D08)) != 0) {
        goto block_4;
    }
    return 0;
block_7:
    return SceSifCheckStatRpc(D_00132D08);
}
#endif /* NON_MATCHING */
