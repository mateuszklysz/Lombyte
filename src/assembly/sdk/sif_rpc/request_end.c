/*
STATE: C_NON_MATCHING
SYMBOL: _request_end
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _request_end; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _request_end\n"
    ".type _request_end, @function\n"
    "_request_end:\n"
    "addiu      $29, $29, -0x30\n"
    "lui        $2, (0x8000000A >> 16)\n"
    "sd         $17, 0x10($29)\n"
    "ori        $2, $2, (0x8000000A & 0xFFFF)\n"
    "sd         $31, 0x20($29)\n"
    "daddu      $17, $4, $0\n"
    "sd         $16, 0x0($29)\n"
    "lw         $3, 0x20($17)\n"
    "beq        $3, $2, .L0011AE28\n"
    "sltu      $2, $2, $3\n"
    "bnel       $2, $0, .L0011AE60\n"
    "lw        $16, 0x1C($17)\n"
    "lui        $2, (0x80000009 >> 16)\n"
    "ori        $2, $2, (0x80000009 & 0xFFFF)\n"
    "beql       $3, $2, .L0011AE48\n"
    "lw        $2, 0x24($17)\n"
    "b          .L0011AE60\n"
    "lw        $16, 0x1C($17)\n"
    ".L0011AE28:\n"
    "lw         $16, 0x1C($17)\n"
    "lw         $2, 0x1C($16)\n"
    "beql       $2, $0, .L0011AE64\n"
    "lw        $4, 0x8($16)\n"
    "jalr       $2\n"
    "lw        $4, 0x20($16)\n"
    "b          .L0011AE60\n"
    "lw        $16, 0x1C($17)\n"
    ".L0011AE48:\n"
    "lw         $16, 0x1C($17)\n"
    "sw         $2, 0x24($16)\n"
    "lw         $3, 0x28($17)\n"
    "sw         $3, 0x14($16)\n"
    "lw         $2, 0x2C($17)\n"
    "sw         $2, 0x18($16)\n"
    ".L0011AE60:\n"
    "lw         $4, 0x8($16)\n"
    ".L0011AE64:\n"
    "bltz       $4, .L0011AE74\n"
    "nop\n"
    "jal        iSignalSema\n"
    "nop\n"
    ".L0011AE74:\n"
    "jal        func_0011AD90\n"
    "lw        $4, 0x0($16)\n"
    "sw         $0, 0x0($16)\n"
    "ld         $31, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x30\n"
    ".size _request_end, .-_request_end\n"
    ".set reorder\n"
);
#else
#include "types.h"
/* ee-2.9-991111 matched TU. */

extern void func_003B0A40(int a);

/* compiler: ee-2.9-991111 ; extra keys: none */


__attribute__((section(".text._request_call")))
void _request_end(char *p) {
    char *r;
    char *q;
    int t0;
    int t1;
    r = *(char **)(p + 0x34);
    q = *(char **)(r + 0x40);
    if (*(int *)(q + 0xC) == 0) {
        *(int *)(q + 0xC) = (int)r;
    } else {
        *(int *)(*(int *)(q + 0x10) + 0x3C) = (int)r;
    }
    *(int *)(q + 0x10) = (int)r;
    t0 = *(int *)(p + 0x14);
    t1 = *(int *)(p + 0x1C);
    *(int *)(r + 0x20) = t0;
    *(int *)(r + 0x1C) = t1;
    *(int *)(r + 0x24) = *(int *)(p + 0x20);
    *(int *)(r + 0xC) = *(int *)(p + 0x24);
    *(int *)(r + 0x28) = *(int *)(p + 0x28);
    *(int *)(r + 0x2C) = *(int *)(p + 0x2C);
    *(int *)(r + 0x30) = *(int *)(p + 0x30);
    *(int *)(r + 0x34) = *(int *)(p + 0x10);
    if (*(int *)(q + 0x0) >= 0) {
        if (*(int *)(q + 0x4) == 0) {
            func_003B0A40(*(int *)(q + 0x0));
        }
    }
}
#endif /* NON_MATCHING */
