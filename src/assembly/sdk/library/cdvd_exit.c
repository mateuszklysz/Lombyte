/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 84.5676%
 * blocker: Codex judged the logic correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit cdvd_exit; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl cdvd_exit\n"
    ".type cdvd_exit, @function\n"
    "cdvd_exit:\n"
    "lui        $2, %hi(D_001312D4)\n"
    "addiu      $29, $29, -0x20\n"
    "lw         $3, %lo(D_001312D4)($2)\n"
    "sd         $31, 0x10($29)\n"
    "beqz       $3, .L001208F8\n"
    "sd        $16, 0x0($29)\n"
    "lui        $3, %hi(D_00131314)\n"
    "addiu      $2, $0, -0x1\n"
    "sw         $2, %lo(D_00131314)($3)\n"
    "lui        $16, %hi(D_001312E0)\n"
    "jal        SignalSema\n"
    "lw        $4, %lo(D_001312E0)($16)\n"
    "b          .L00120900\n"
    "lui       $2, %hi(D_001312E8)\n"
    ".L001208F8:\n"
    "lui        $16, %hi(D_001312E0)\n"
    "lui        $2, %hi(D_001312E8)\n"
    ".L00120900:\n"
    "jal        DeleteSema\n"
    "lw        $4, %lo(D_001312E8)($2)\n"
    "lui        $3, %hi(D_001312EC)\n"
    "jal        DeleteSema\n"
    "lw        $4, %lo(D_001312EC)($3)\n"
    "jal        DeleteSema\n"
    "lw        $4, %lo(D_001312E0)($16)\n"
    "jal        DIntr\n"
    "nop\n"
    "lui        $4, (0x80000012 >> 16)\n"
    "daddu      $16, $2, $0\n"
    "jal        sceSifRemoveCmdHandler\n"
    "ori       $4, $4, (0x80000012 & 0xFFFF)\n"
    "beqz       $16, .L00120948\n"
    "ld        $31, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "j          EnableInterrupts\n"
    "addiu     $29, $29, 0x20\n"
    ".L00120948:\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x20\n"
    ".size cdvd_exit, .-cdvd_exit\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern u8 D_001312D4[];
extern u8 D_001312E0[];
extern u8 D_001312E8[];
extern u8 D_001312EC[];
extern u8 D_00131314[];
extern s32 DIntr();
extern s32 DeleteSema();
extern s32 SignalSema();
extern s32 sceSifRemoveCmdHandler();
void cdvd_exit(void) {
    s32 temp_16_31;

    if (D_001312D4[0] != 0) {
        D_00131314[0] = -1;
        SignalSema(D_001312E0[0]);
    }
    DeleteSema(D_001312E8[0]);
    DeleteSema(D_001312EC[0]);
    DeleteSema(D_001312E0[0]);
    temp_16_31 = DIntr();
    sceSifRemoveCmdHandler(0x80000012);
    if (temp_16_31 != 0) {
        EnableInterrupts();
    }
}
#endif /* NON_MATCHING */
