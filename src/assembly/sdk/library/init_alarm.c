/*
STATE: C_NON_MATCHING
SYMBOL: InitAlarm
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit InitAlarm; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl InitAlarm\n"
    ".type InitAlarm, @function\n"
    "InitAlarm:\n"
    "addiu      $29, $29, -0x40\n"
    "lui        $2, (0x10001810 >> 16)\n"
    "sd         $31, 0x30($29)\n"
    "ori        $2, $2, (0x10001810 & 0xFFFF)\n"
    "sd         $18, 0x20($29)\n"
    "sd         $17, 0x10($29)\n"
    "sd         $16, 0x0($29)\n"
    "lw         $3, 0x0($2)\n"
    "andi       $3, $3, 0x100\n"
    "bnez       $3, .L0011DBF8\n"
    "ld        $31, 0x30($29)\n"
    "lui        $2, %hi(D_00131258)\n"
    "addiu      $18, $0, 0x2\n"
    "addiu      $16, $2, %lo(D_00131258)\n"
    "lw         $4, %lo(D_00131258)($2)\n"
    "lw         $5, 0x4($16)\n"
    "jal        Rfu116SetSyscallTail\n"
    "addiu     $17, $16, 0x10\n"
    "lui        $5, %hi(D_00130AF0)\n"
    "lui        $4, (0x80076000 >> 16)\n"
    "addiu      $5, $5, %lo(D_00130AF0)\n"
    "ori        $4, $4, (0x80076000 & 0xFFFF)\n"
    "jal        InvokeKernelSyscall005A_RfuTail\n"
    "addiu     $6, $0, 0x740\n"
    "lui        $5, %hi(D_00131230)\n"
    "lui        $4, (0x82000 >> 16)\n"
    "addiu      $5, $5, %lo(D_00131230)\n"
    "ori        $4, $4, (0x82000 & 0xFFFF)\n"
    "jal        InvokeKernelSyscall005A_RfuTail\n"
    "addiu     $6, $0, 0x28\n"
    "jal        FlushCache\n"
    "daddu     $4, $0, $0\n"
    "jal        FlushCache\n"
    "addiu     $4, $0, 0x2\n"
    "lw         $4, 0x8($16)\n"
    "jal        Rfu116SetSyscallTail\n"
    "lw        $5, 0xC($16)\n"
    "lw         $4, 0x0($17)\n"
    ".L0011DBD0:\n"
    "jal        Rfu091Tail\n"
    "addiu     $18, $18, 0x1\n"
    "lw         $4, 0x0($17)\n"
    "daddu      $5, $2, $0\n"
    "jal        Rfu116SetSyscallTail\n"
    "addiu     $17, $17, 0x8\n"
    "sltiu      $2, $18, 0x8\n"
    "bnel       $2, $0, .L0011DBD0\n"
    "lw        $4, 0x0($17)\n"
    "ld         $31, 0x30($29)\n"
    ".L0011DBF8:\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x40\n"
    ".size InitAlarm, .-InitAlarm\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_init_alarm_types.h"
#include "types.h"


extern u8 D_00130AF0[];
extern u8 D_00131230[];
extern struct M2c_D_00131258 D_00131258;
extern s32 FlushCache();
extern s32 InvokeKernelSyscall005A_RfuTail();
extern s32 Rfu091Tail();
extern s32 Rfu116SetSyscallTail();
void InitAlarm(void) {
    s32 *var_17_20;
    s32 temp_4_44;
    s32 temp_5_45;
    u32 var_18_15;

    if (*(s32 *)0x10001810 & 0x100) {
        goto block_4;
    }
    var_18_15 = 2;
    var_17_20 = ((u8 *)&D_00131258 + 0x10);
    Rfu116SetSyscallTail(D_00131258.unk0, D_00131258.unk4);
    InvokeKernelSyscall005A_RfuTail(0x80076000, D_00130AF0, 0x740);
    InvokeKernelSyscall005A_RfuTail(0x82000, D_00131230, 0x28);
    FlushCache(0);
    FlushCache(2);
    Rfu116SetSyscallTail(D_00131258.unk8, D_00131258.unkC);
loop_2:
    var_18_15 += 1;
    temp_4_44 = *var_17_20;
    temp_5_45 = Rfu091Tail(*var_17_20);
    var_17_20 += 8;
    Rfu116SetSyscallTail(temp_4_44, temp_5_45);
    if (var_18_15 < 8U) {
        goto loop_2;
    }
block_4:
    return;
}
#endif /* NON_MATCHING */
