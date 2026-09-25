#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceIpuInit; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceIpuInit\n"
    ".type sceIpuInit, @function\n"
    "sceIpuInit:\n"
    "addiu      $29, $29, -0x10\n"
    "sd         $31, 0x0($29)\n"
    "jal        SetD4ChcrVariant\n"
    "addiu     $4, $0, 0x1\n"
    "lui        $2, (0x10002010 >> 16)\n"
    "lui        $3, (0x40000000 >> 16)\n"
    "ori        $2, $2, (0x10002010 & 0xFFFF)\n"
    "lui        $4, (0x10002010 >> 16)\n"
    "sw         $3, 0x0($2)\n"
    "ori        $4, $4, (0x10002010 & 0xFFFF)\n"
    ".L0012CF50:\n"
    "lw         $2, 0x0($4)\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "bltz       $2, .L0012CF50\n"
    "nop\n"
    "lui        $2, (0x10002000 >> 16)\n"
    "lui        $3, (0x10002010 >> 16)\n"
    "ori        $2, $2, (0x10002000 & 0xFFFF)\n"
    "ori        $3, $3, (0x10002010 & 0xFFFF)\n"
    "sw         $0, 0x0($2)\n"
    ".L0012CF80:\n"
    "lw         $2, 0x0($3)\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "bltz       $2, .L0012CF80\n"
    "nop\n"
    "lui        $5, %hi(D_00133050)\n"
    "lui        $4, (0x10007010 >> 16)\n"
    "addiu      $5, $5, %lo(D_00133050)\n"
    "ori        $4, $4, (0x10007010 & 0xFFFF)\n"
    "lq         $2, 0x0($5)\n"
    "lui        $6, (0x10002000 >> 16)\n"
    "lui        $7, (0x50000000 >> 16)\n"
    "ori        $6, $6, (0x10002000 & 0xFFFF)\n"
    "sq         $2, 0x0($4)\n"
    "lui        $8, (0x10002010 >> 16)\n"
    "ori        $8, $8, (0x10002010 & 0xFFFF)\n"
    "lq         $3, 0x10($5)\n"
    "sq         $3, 0x0($4)\n"
    "lq         $2, 0x20($5)\n"
    "sq         $2, 0x0($4)\n"
    "lq         $3, 0x30($5)\n"
    "sq         $3, 0x0($4)\n"
    "lq         $2, 0x40($5)\n"
    "sq         $2, 0x0($4)\n"
    "lq         $3, 0x40($5)\n"
    "sq         $3, 0x0($4)\n"
    "lq         $2, 0x40($5)\n"
    "sq         $2, 0x0($4)\n"
    "lq         $3, 0x40($5)\n"
    "sq         $3, 0x0($4)\n"
    "sw         $7, 0x0($6)\n"
    "nop\n"
    ".L0012D008:\n"
    "lw         $2, 0x0($8)\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "bltz       $2, .L0012D008\n"
    "nop\n"
    "lui        $2, (0x10002000 >> 16)\n"
    "lui        $3, (0x58000000 >> 16)\n"
    "ori        $2, $2, (0x10002000 & 0xFFFF)\n"
    "lui        $4, (0x10002010 >> 16)\n"
    "sw         $3, 0x0($2)\n"
    "ori        $4, $4, (0x10002010 & 0xFFFF)\n"
    "nop\n"
    ".L0012D040:\n"
    "lw         $2, 0x0($4)\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "bltz       $2, .L0012D040\n"
    "nop\n"
    "lui        $3, %hi(D_001330A0)\n"
    "lui        $4, (0x10007010 >> 16)\n"
    "addiu      $3, $3, %lo(D_001330A0)\n"
    "ori        $4, $4, (0x10007010 & 0xFFFF)\n"
    "lq         $2, 0x0($3)\n"
    "lui        $5, (0x10002000 >> 16)\n"
    "lui        $6, (0x60000000 >> 16)\n"
    "ori        $5, $5, (0x10002000 & 0xFFFF)\n"
    "sq         $2, 0x0($4)\n"
    "lui        $7, (0x10002010 >> 16)\n"
    "ori        $7, $7, (0x10002010 & 0xFFFF)\n"
    "lq         $2, 0x10($3)\n"
    "sq         $2, 0x0($4)\n"
    "sw         $6, 0x0($5)\n"
    "nop\n"
    ".L0012D098:\n"
    "lw         $2, 0x0($7)\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "bltz       $2, .L0012D098\n"
    "nop\n"
    "lui        $2, (0x10002000 >> 16)\n"
    "lui        $3, (0x90000000 >> 16)\n"
    "ori        $2, $2, (0x10002000 & 0xFFFF)\n"
    "lui        $4, (0x10002010 >> 16)\n"
    "sw         $3, 0x0($2)\n"
    "ori        $4, $4, (0x10002010 & 0xFFFF)\n"
    "nop\n"
    ".L0012D0D0:\n"
    "lw         $2, 0x0($4)\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "bltz       $2, .L0012D0D0\n"
    "nop\n"
    "lui        $2, (0x10002010 >> 16)\n"
    "lui        $3, (0x40000000 >> 16)\n"
    "ori        $2, $2, (0x10002010 & 0xFFFF)\n"
    "lui        $4, (0x10002010 >> 16)\n"
    "sw         $3, 0x0($2)\n"
    "ori        $4, $4, (0x10002010 & 0xFFFF)\n"
    "nop\n"
    ".L0012D108:\n"
    "lw         $2, 0x0($4)\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "bltz       $2, .L0012D108\n"
    "nop\n"
    "lui        $2, (0x10002000 >> 16)\n"
    "lui        $3, (0x10002010 >> 16)\n"
    "ori        $2, $2, (0x10002000 & 0xFFFF)\n"
    "ori        $3, $3, (0x10002010 & 0xFFFF)\n"
    "sw         $0, 0x0($2)\n"
    ".L0012D138:\n"
    "lw         $2, 0x0($3)\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "bltz       $2, .L0012D138\n"
    "nop\n"
    "ld         $31, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x10\n"
    ".size sceIpuInit, .-sceIpuInit\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_sce_ipu_init_types.h"
#include "types.h"




extern struct M2c_D_00133050 D_00133050;
extern struct M2c_D_001330A0 D_001330A0;
extern s32 SetD4ChcrVariant();
void sceIpuInit(void) {
    SetD4ChcrVariant(1);
    *(s32 *)0x10002010 = 0x40000000;
    do {

    } while (*(volatile u32 *)0x10002010 < 0);
    *(s32 *)0x10002000 = 0;
    do {

    } while (*(volatile u32 *)0x10002010 < 0);
    *(s64 *)0x10007010 = D_00133050.unk0;
    *(s64 *)0x10007010 = D_00133050.unk10;
    *(s64 *)0x10007010 = D_00133050.unk20;
    *(s64 *)0x10007010 = D_00133050.unk30;
    *(s64 *)0x10007010 = D_00133050.unk40;
    *(s64 *)0x10007010 = D_00133050.unk40;
    *(s64 *)0x10007010 = D_00133050.unk40;
    *(s64 *)0x10007010 = D_00133050.unk40;
    *(volatile u32 *)0x10002000 = 0x50000000;
    do {

    } while (*(volatile u32 *)0x10002010 < 0);
    *(volatile u32 *)0x10002000 = 0x58000000;
    do {

    } while (*(volatile u32 *)0x10002010 < 0);
    *(volatile u32 *)0x10007010 = (s64) D_001330A0.unk0;
    *(volatile u32 *)0x10007010 = (s64) D_001330A0.unk10;
    *(volatile u32 *)0x10002000 = 0x60000000;
    do {

    } while (*(volatile u32 *)0x10002010 < 0);
    *(volatile u32 *)0x10002000 = 0x90000000;
    do {

    } while (*(volatile u32 *)0x10002010 < 0);
    *(volatile u32 *)0x10002010 = 0x40000000;
    do {

    } while (*(volatile u32 *)0x10002010 < 0);
    *(volatile u32 *)0x10002000 = 0;
    do {

    } while (*(volatile u32 *)0x10002010 < 0);
}
#endif /* NON_MATCHING */
