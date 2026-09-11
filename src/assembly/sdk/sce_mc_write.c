/*
STATE: C_NON_MATCHING
SYMBOL: sceMcWrite
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceMcWrite; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceMcWrite\n"
    ".type sceMcWrite, @function\n"
    "sceMcWrite:\n"
    "addiu      $29, $29, -0x80\n"
    "sd         $20, 0x50($29)\n"
    "sd         $18, 0x30($29)\n"
    "lui        $20, %hi(D_00159A00)\n"
    "sd         $17, 0x20($29)\n"
    "addiu      $2, $20, %lo(D_00159A00)\n"
    "sd         $16, 0x10($29)\n"
    "daddu      $18, $4, $0\n"
    "sd         $31, 0x70($29)\n"
    "daddu      $17, $5, $0\n"
    "sd         $21, 0x60($29)\n"
    "sd         $19, 0x40($29)\n"
    "lw         $3, 0x24($2)\n"
    "bnez       $3, .L00123A8C\n"
    "daddu     $16, $6, $0\n"
    "b          .L00123B98\n"
    "addiu     $2, $0, -0x64\n"
    ".L00123A8C:\n"
    "lui        $21, %hi(D_00132DAC)\n"
    "jal        PollSema\n"
    "lw        $4, %lo(D_00132DAC)($21)\n"
    "bgez       $2, .L00123AA8\n"
    "lui       $19, %hi(D_00159A80)\n"
    "b          .L00123B98\n"
    "addiu     $2, $0, -0xC8\n"
    ".L00123AA8:\n"
    "slti       $2, $16, 0x11\n"
    "addiu      $6, $19, %lo(D_00159A80)\n"
    "beqz       $2, .L00123AC8\n"
    "sw        $18, %lo(D_00159A80)($19)\n"
    "sw         $16, 0x14($6)\n"
    "sw         $0, 0x18($6)\n"
    "b          .L00123AF4\n"
    "sw        $0, 0xC($6)\n"
    ".L00123AC8:\n"
    "lui        $3, (0xFFFFFFF0 >> 16)\n"
    "addiu      $2, $17, -0x1\n"
    "ori        $3, $3, (0xFFFFFFF0 & 0xFFFF)\n"
    "addiu      $4, $17, -0x10\n"
    "and        $2, $2, $3\n"
    "subu       $2, $2, $4\n"
    "subu       $5, $16, $2\n"
    "addu       $3, $17, $2\n"
    "sw         $3, 0x18($6)\n"
    "sw         $5, 0xC($6)\n"
    "sw         $2, 0x14($6)\n"
    ".L00123AF4:\n"
    "addiu      $2, $19, %lo(D_00159A80)\n"
    "daddu      $7, $19, $0\n"
    "lw         $3, 0x14($2)\n"
    "beqz       $3, .L00123B40\n"
    "daddu     $6, $0, $0\n"
    "lui        $16, %hi(D_0015AFC0)\n"
    "addu       $2, $17, $6\n"
    "addiu      $4, $7, %lo(D_00159A80)\n"
    "nop\n"
    ".L00123B18:\n"
    "lbu        $5, 0x0($2)\n"
    "addu       $3, $4, $6\n"
    "addiu      $6, $6, 0x1\n"
    "sb         $5, 0x20($3)\n"
    "lw         $2, 0x14($4)\n"
    "sltu       $2, $6, $2\n"
    "bnez       $2, .L00123B18\n"
    "addu      $2, $17, $6\n"
    "b          .L00123B44\n"
    "nop\n"
    ".L00123B40:\n"
    "lui        $16, %hi(D_0015AFC0)\n"
    ".L00123B44:\n"
    "jal        FlushCache\n"
    "daddu     $4, $0, $0\n"
    "addiu      $9, $16, %lo(D_0015AFC0)\n"
    "addiu      $4, $20, %lo(D_00159A00)\n"
    "addiu      $7, $19, %lo(D_00159A80)\n"
    "sw         $0, 0x0($29)\n"
    "addiu      $5, $0, 0x6\n"
    "addiu      $6, $0, 0x1\n"
    "addiu      $8, $0, 0x30\n"
    "addiu      $10, $0, 0x4\n"
    "jal        sceSifCallRpc\n"
    "daddu     $11, $0, $0\n"
    "daddu      $16, $2, $0\n"
    "bnez       $16, .L00123B8C\n"
    "lui       $3, %hi(D_00132DA8)\n"
    "addiu      $2, $0, 0x6\n"
    "b          .L00123B94\n"
    "sw        $2, %lo(D_00132DA8)($3)\n"
    ".L00123B8C:\n"
    "jal        SignalSema\n"
    "lw        $4, %lo(D_00132DAC)($21)\n"
    ".L00123B94:\n"
    "daddu      $2, $16, $0\n"
    ".L00123B98:\n"
    "ld         $31, 0x70($29)\n"
    "ld         $21, 0x60($29)\n"
    "ld         $20, 0x50($29)\n"
    "ld         $19, 0x40($29)\n"
    "ld         $18, 0x30($29)\n"
    "ld         $17, 0x20($29)\n"
    "ld         $16, 0x10($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x80\n"
    ".size sceMcWrite, .-sceMcWrite\n"
    ".set reorder\n"
);
#else
#include "types.h"
/* SN ProDG ee-gcc 2.95.3 matched TU. */

extern void func_003A6C58(void *a0, void *a1, void *a2);
extern int D_00747A30;
extern unsigned char D_0044A920[];
extern unsigned char D_0044A940[];
extern unsigned char D_0044A958[];
extern unsigned char D_005E8640[];
extern void cRelSys_unlinkNoFree(void *a0, int a1);
extern void func_00297660(void);
extern void cEventConfig_setEventNo(void *a0, int a1);
extern unsigned char D_00586B30[];

__attribute__((section(".text.LoadDisplayText_297450")))
void sceMcWrite(void *a0) {
    unsigned char *s0 = (unsigned char *)a0;
    char buf[0x40];
    unsigned long b = *(unsigned char *)(s0 + 8);
    int a1;
    if ((b >> 7) == 0) {
        if (D_00747A30 & 0x400) {
            func_003A6C58(buf, D_0044A920, D_0044A940);
        } else {
            func_003A6C58(buf, D_0044A958, D_0044A940);
        }
        a1 = *(int *)(s0 + 0x10);
        if (a1 != 0) {
            cRelSys_linkNoAlloc(D_005E8640, a1, buf, 2);
            *(int *)(s0 + 8) = *(int *)(s0 + 8) | 0x80;
        }
    }
}

__attribute__((section(".text.ClearDisplayText_2974F0")))
void ClearDisplayText_2974F0(void *a0) {
    unsigned char *s0 = (unsigned char *)a0;
    unsigned long v0 = *(unsigned char *)(s0 + 8);
    if (v0 >> 7) {
        cRelSys_unlinkNoFree(D_005E8640, 2);
        *(int *)(s0 + 8) = *(int *)(s0 + 8) & -0x81;
    }
}

__attribute__((section(".text.InitSubState_2975F8")))
void InitSubState_2975F8(void *a0, int a1) {
    unsigned char *s0 = (unsigned char *)a0;
    unsigned long t = *(int *)(s0 + 8);
    if (((t >> 1) & 1) == 0) {
        func_00297660();
        *(int *)(s0 + 0x18) = a1;
        cEventConfig_setEventNo(D_00586B30, a1);
        *(int *)(s0 + 8) = *(int *)(s0 + 8) | 2;
    }
}
#endif /* NON_MATCHING */
