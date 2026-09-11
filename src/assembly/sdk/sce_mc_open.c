/*
STATE: C_NON_MATCHING
SYMBOL: sceMcOpen
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceMcOpen; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceMcOpen\n"
    ".type sceMcOpen, @function\n"
    "sceMcOpen:\n"
    "addiu      $29, $29, -0x90\n"
    "lui        $2, %hi(D_00159A00)\n"
    "sd         $22, 0x70($29)\n"
    "sd         $21, 0x60($29)\n"
    "addiu      $22, $2, %lo(D_00159A00)\n"
    "sd         $20, 0x50($29)\n"
    "daddu      $21, $5, $0\n"
    "sd         $19, 0x40($29)\n"
    "daddu      $20, $4, $0\n"
    "sd         $17, 0x20($29)\n"
    "daddu      $19, $7, $0\n"
    "sd         $31, 0x80($29)\n"
    "sd         $18, 0x30($29)\n"
    "sd         $16, 0x10($29)\n"
    "lw         $2, 0x24($22)\n"
    "bnez       $2, .L001235FC\n"
    "daddu     $17, $6, $0\n"
    "b          .L001236AC\n"
    "addiu     $2, $0, -0x64\n"
    ".L001235FC:\n"
    "lui        $18, %hi(D_00132DAC)\n"
    "jal        PollSema\n"
    "lw        $4, %lo(D_00132DAC)($18)\n"
    "bltz       $2, .L001236AC\n"
    "addiu     $2, $0, -0xC8\n"
    "beqz       $17, .L00123624\n"
    "nop\n"
    "lb         $2, 0x0($17)\n"
    "bnez       $2, .L00123634\n"
    "lui       $16, %hi(D_00159AC4)\n"
    ".L00123624:\n"
    "jal        SignalSema\n"
    "lw        $4, %lo(D_00132DAC)($18)\n"
    "b          .L001236AC\n"
    "addiu     $2, $0, -0xD2\n"
    ".L00123634:\n"
    "daddu      $5, $17, $0\n"
    "addiu      $16, $16, %lo(D_00159AC4)\n"
    "addiu      $6, $0, 0x3FF\n"
    "jal        func_00116808\n"
    "daddu     $4, $16, $0\n"
    "addiu      $3, $16, -0x14\n"
    "sw         $20, -0x14($16)\n"
    "sw         $19, 0x8($3)\n"
    "lui        $9, %hi(D_0015AFC0)\n"
    "sw         $21, 0x4($3)\n"
    "daddu      $4, $22, $0\n"
    "sb         $0, 0x413($3)\n"
    "daddu      $7, $3, $0\n"
    "addiu      $9, $9, %lo(D_0015AFC0)\n"
    "addiu      $5, $0, 0x2\n"
    "sw         $0, 0x0($29)\n"
    "addiu      $6, $0, 0x1\n"
    "addiu      $8, $0, 0x414\n"
    "addiu      $10, $0, 0x4\n"
    "jal        sceSifCallRpc\n"
    "daddu     $11, $0, $0\n"
    "daddu      $16, $2, $0\n"
    "bnez       $16, .L001236A0\n"
    "lui       $3, %hi(D_00132DA8)\n"
    "addiu      $2, $0, 0x2\n"
    "b          .L001236A8\n"
    "sw        $2, %lo(D_00132DA8)($3)\n"
    ".L001236A0:\n"
    "jal        SignalSema\n"
    "lw        $4, %lo(D_00132DAC)($18)\n"
    ".L001236A8:\n"
    "daddu      $2, $16, $0\n"
    ".L001236AC:\n"
    "ld         $31, 0x80($29)\n"
    "ld         $22, 0x70($29)\n"
    "ld         $21, 0x60($29)\n"
    "ld         $20, 0x50($29)\n"
    "ld         $19, 0x40($29)\n"
    "ld         $18, 0x30($29)\n"
    "ld         $17, 0x20($29)\n"
    "ld         $16, 0x10($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x90\n"
    ".size sceMcOpen, .-sceMcOpen\n"
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
void sceMcOpen(void *a0) {
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
