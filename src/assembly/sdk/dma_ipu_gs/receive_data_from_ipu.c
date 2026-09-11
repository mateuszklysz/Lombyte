/*
STATE: C_NON_MATCHING
SYMBOL: receiveDataFromIPU
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit receiveDataFromIPU; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl receiveDataFromIPU\n"
    ".type receiveDataFromIPU, @function\n"
    "receiveDataFromIPU:\n"
    "addiu      $29, $29, -0x30\n"
    "sd         $17, 0x10($29)\n"
    "sd         $16, 0x0($29)\n"
    "daddu      $17, $5, $0\n"
    "sd         $31, 0x20($29)\n"
    "jal        DIntr\n"
    "daddu     $16, $4, $0\n"
    "lui        $3, (0xFFFFFFF >> 16)\n"
    "lui        $5, (0x1000B010 >> 16)\n"
    "ori        $3, $3, (0xFFFFFFF & 0xFFFF)\n"
    "lui        $6, (0x80000000 >> 16)\n"
    "and        $16, $16, $3\n"
    "ori        $5, $5, (0x1000B010 & 0xFFFF)\n"
    "or         $16, $16, $6\n"
    "lui        $4, (0x1000B020 >> 16)\n"
    "sw         $16, 0x0($5)\n"
    "ori        $4, $4, (0x1000B020 & 0xFFFF)\n"
    "sra        $17, $17, 4\n"
    "lui        $3, (0x1000B000 >> 16)\n"
    "sw         $17, 0x0($4)\n"
    "ori        $3, $3, (0x1000B000 & 0xFFFF)\n"
    "addiu      $4, $0, 0x100\n"
    "sw         $4, 0x0($3)\n"
    "beqz       $2, .L0012A19C\n"
    "ld        $31, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "j          EnableInterrupts\n"
    "addiu     $29, $29, 0x30\n"
    ".L0012A19C:\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x30\n"
    ".size receiveDataFromIPU, .-receiveDataFromIPU\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 DIntr();
void receiveDataFromIPU(s32 arg0, s32 arg1) {
    s32 temp_2_8;

    temp_2_8 = DIntr();
    *(s32 *)0x1000B010 = (arg0 & 0x0FFFFFFF) | 0x80000000;
    *(s32 *)0x1000B020 = arg1 >> 4;
    *(s32 *)0x1000B000 = 0x100;
    if (temp_2_8 != 0) {
        EnableInterrupts(0x100, 0x1000B010, 0x80000000);
    }
}
#endif /* NON_MATCHING */
