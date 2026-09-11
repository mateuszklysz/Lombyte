/*
STATE: C_NON_MATCHING
SYMBOL: InitExecPS2
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit InitExecPS2; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl InitExecPS2\n"
    ".type InitExecPS2, @function\n"
    "InitExecPS2:\n"
    "addiu      $29, $29, -0x40\n"
    "sd         $31, 0x30($29)\n"
    "sd         $18, 0x20($29)\n"
    "sd         $17, 0x10($29)\n"
    "jal        PatchIsNeeded\n"
    "sd        $16, 0x0($29)\n"
    "beqz       $2, .L0011DA4C\n"
    "lui       $2, %hi(D_00130AD0)\n"
    "addiu      $18, $0, 0x2\n"
    "addiu      $16, $2, %lo(D_00130AD0)\n"
    "lw         $4, %lo(D_00130AD0)($2)\n"
    "lw         $5, 0x4($16)\n"
    "jal        Rfu116SetSyscallLate\n"
    "addiu     $17, $16, 0x10\n"
    "lui        $5, %hi(D_00130328)\n"
    "lui        $4, (0x80074000 >> 16)\n"
    "addiu      $6, $0, 0x7A8\n"
    "addiu      $5, $5, %lo(D_00130328)\n"
    "jal        InvokeKernelSyscall005A_RfuWorker\n"
    "ori       $4, $4, (0x80074000 & 0xFFFF)\n"
    "jal        FlushCache\n"
    "daddu     $4, $0, $0\n"
    "jal        FlushCache\n"
    "addiu     $4, $0, 0x2\n"
    "lw         $4, 0x8($16)\n"
    "jal        Rfu116SetSyscallLate\n"
    "lw        $5, 0xC($16)\n"
    "lw         $4, 0x0($17)\n"
    ".L0011DA28:\n"
    "jal        Rfu091Mid\n"
    "addiu     $18, $18, 0x1\n"
    "lw         $4, 0x0($17)\n"
    "daddu      $5, $2, $0\n"
    "jal        Rfu116SetSyscallLate\n"
    "addiu     $17, $17, 0x8\n"
    "sltiu      $2, $18, 0x3\n"
    "bnel       $2, $0, .L0011DA28\n"
    "lw        $4, 0x0($17)\n"
    ".L0011DA4C:\n"
    "ld         $31, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x40\n"
    ".size InitExecPS2, .-InitExecPS2\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_InitExecPS2_types.h"
#include "types.h"


extern u8 D_00130328[];
extern struct M2c_D_00130AD0 D_00130AD0;
extern s32 FlushCache();
extern s32 InvokeKernelSyscall005A_RfuWorker();
extern s32 PatchIsNeeded();
extern s32 Rfu091Mid();
extern s32 Rfu116SetSyscallLate();
void InitExecPS2(void) {
    s32 *var_17_16;
    s32 temp_4_34;
    s32 temp_5_35;
    u32 var_18_11;

    if (PatchIsNeeded() != 0) {
        var_18_11 = 2;
        var_17_16 = ((u8 *)&D_00130AD0 + 0x10);
        Rfu116SetSyscallLate(D_00130AD0.unk0, D_00130AD0.unk4);
        InvokeKernelSyscall005A_RfuWorker(0x80074000, D_00130328, 0x7A8);
        FlushCache(0);
        FlushCache(2);
        Rfu116SetSyscallLate(D_00130AD0.unk8, D_00130AD0.unkC);
        do {
            var_18_11 += 1;
            temp_4_34 = *var_17_16;
            temp_5_35 = Rfu091Mid(*var_17_16);
            var_17_16 += 8;
            Rfu116SetSyscallLate(temp_4_34, temp_5_35);
        } while (var_18_11 < 3U);
    }
}
#endif /* NON_MATCHING */
