/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 92.3204%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceSifInitRpc; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceSifInitRpc\n"
    ".type sceSifInitRpc, @function\n"
    "sceSifInitRpc:\n"
    "addiu      $29, $29, -0x40\n"
    "sd         $31, 0x30($29)\n"
    "sd         $18, 0x20($29)\n"
    "sd         $17, 0x10($29)\n"
    "jal        DIntr\n"
    "sd        $16, 0x0($29)\n"
    "lui        $3, %hi(D_0012FC08)\n"
    "lw         $2, %lo(D_0012FC08)($3)\n"
    "beqz       $2, .L0011AB60\n"
    "addiu     $17, $0, 0x1\n"
    "ld         $31, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "j          EnableInterrupts\n"
    "addiu     $29, $29, 0x40\n"
    ".L0011AB60:\n"
    "jal        EnableInterrupts\n"
    "sw        $17, %lo(D_0012FC08)($3)\n"
    "jal        sceSifInitCmd\n"
    "nop\n"
    "jal        DIntr\n"
    "nop\n"
    "lui        $3, %hi(D_00155000)\n"
    "lui        $8, %hi(D_00156800)\n"
    "addiu      $18, $3, %lo(D_00155000)\n"
    "lui        $6, %hi(D_00155800)\n"
    "lui        $7, %hi(D_00156000)\n"
    "addiu      $16, $8, %lo(D_00156800)\n"
    "addiu      $3, $0, 0x20\n"
    "lui        $2, (0x20000000 >> 16)\n"
    "addiu      $6, $6, %lo(D_00155800)\n"
    "addiu      $7, $7, %lo(D_00156000)\n"
    "or         $6, $6, $2\n"
    "or         $7, $7, $2\n"
    "sw         $3, 0x20($16)\n"
    "or         $2, $18, $2\n"
    "sw         $17, %lo(D_00156800)($8)\n"
    "lui        $5, %hi(_request_end)\n"
    "sw         $6, 0x14($16)\n"
    "lui        $4, (0x80000008 >> 16)\n"
    "sw         $2, 0x4($16)\n"
    "addiu      $5, $5, %lo(_request_end)\n"
    "sw         $7, 0x1C($16)\n"
    "ori        $4, $4, (0x80000008 & 0xFFFF)\n"
    "daddu      $6, $16, $0\n"
    "sw         $3, 0x8($16)\n"
    "sw         $0, 0xC($16)\n"
    "sw         $0, 0x10($16)\n"
    "sw         $3, 0x18($16)\n"
    "jal        sceSifAddCmdHandler\n"
    "sw        $0, 0x24($16)\n"
    "lui        $5, %hi(_request_bind)\n"
    "lui        $4, (0x80000009 >> 16)\n"
    "addiu      $5, $5, %lo(_request_bind)\n"
    "ori        $4, $4, (0x80000009 & 0xFFFF)\n"
    "jal        sceSifAddCmdHandler\n"
    "daddu     $6, $16, $0\n"
    "lui        $5, %hi(D_0011B138)\n"
    "lui        $4, (0x8000000A >> 16)\n"
    "addiu      $5, $5, %lo(D_0011B138)\n"
    "ori        $4, $4, (0x8000000A & 0xFFFF)\n"
    "jal        sceSifAddCmdHandler\n"
    "daddu     $6, $16, $0\n"
    "lui        $5, %hi(_request_rdata)\n"
    "lui        $4, (0x8000000C >> 16)\n"
    "addiu      $5, $5, %lo(_request_rdata)\n"
    "daddu      $6, $16, $0\n"
    "jal        sceSifAddCmdHandler\n"
    "ori       $4, $4, (0x8000000C & 0xFFFF)\n"
    "jal        EnableInterrupts\n"
    "nop\n"
    "lui        $4, (0x80000002 >> 16)\n"
    "jal        sceSifGetReg\n"
    "ori       $4, $4, (0x80000002 & 0xFFFF)\n"
    "bnez       $2, .L0011ACA8\n"
    "ld        $31, 0x30($29)\n"
    "addiu      $5, $18, 0x40\n"
    "lui        $4, (0x80000002 >> 16)\n"
    "sw         $17, 0xC($5)\n"
    "ori        $4, $4, (0x80000002 & 0xFFFF)\n"
    "addiu      $6, $0, 0x10\n"
    "daddu      $7, $0, $0\n"
    "daddu      $8, $0, $0\n"
    "jal        sceSifSendCmd\n"
    "daddu     $9, $0, $0\n"
    "nop\n"
    ".L0011AC78:\n"
    "jal        func_0011A458\n"
    "daddu     $4, $0, $0\n"
    "beqz       $2, .L0011AC78\n"
    "ld        $31, 0x30($29)\n"
    "lui        $4, (0x80000002 >> 16)\n"
    "ld         $18, 0x20($29)\n"
    "addiu      $5, $0, 0x1\n"
    "ld         $17, 0x10($29)\n"
    "ori        $4, $4, (0x80000002 & 0xFFFF)\n"
    "ld         $16, 0x0($29)\n"
    "j          sceSifSetReg\n"
    "addiu     $29, $29, 0x40\n"
    ".L0011ACA8:\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x40\n"
    ".size sceSifInitRpc, .-sceSifInitRpc\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_sif_rpc_sce_sif_init_rpc_types.h"
#include "types.h"




extern u8 D_0011B138[];
extern u32 D_0012FC08[];
extern u8 D_00155000[];
extern u8 D_00155800[];
extern u8 D_00156000[];
extern struct M2c_D_00156800 D_00156800;
extern s32 DIntr();
extern s32 EnableInterrupts();
extern s32 func_0011A458();
extern s32 sceSifAddCmdHandler();
extern s32 sceSifGetReg();
extern s32 sceSifInitCmd();
extern s32 sceSifSendCmd();
extern s32 sceSifSetReg();
extern void _request_bind();
extern void _request_end();
extern void _request_rdata();
void sceSifInitRpc(void) {
    s32 temp_7_37;
    struct M2c_temp_5_80 *temp_5_80;

    DIntr();
    if (D_0012FC08[0] == 0) {
        goto block_3;
    }
    EnableInterrupts();
    return;
block_3:
    D_0012FC08[0] = 1;
    EnableInterrupts();
    sceSifInitCmd();
    DIntr();
    D_00156800.unk20 = 0x20;
    D_00156800.unk0 = 1;
    D_00156800.unk14 = (s32) ((s32) D_00155800 | 0x20000000);
    D_00156800.unk4 = (s32) ((s32) D_00155000 | 0x20000000);
    temp_7_37 = (s32) D_00156000 | 0x20000000;
    D_00156800.unk1C = temp_7_37;
    D_00156800.unk8 = 0x20;
    D_00156800.unkC = 0;
    D_00156800.unk10 = 0;
    D_00156800.unk18 = 0x20;
    D_00156800.unk24 = 0;
    sceSifAddCmdHandler(0x80000008, &_request_end, &D_00156800);
    sceSifAddCmdHandler(0x80000009, &_request_bind, &D_00156800);
    sceSifAddCmdHandler(0x8000000A, D_0011B138, &D_00156800);
    sceSifAddCmdHandler(0x8000000C, &_request_rdata, &D_00156800);
    EnableInterrupts();
    if (sceSifGetReg(0x80000002) != 0) {
        goto block_8;
    }
    temp_5_80 = (struct M2c_temp_5_80 *)(D_00155000 + 0x40);
    temp_5_80->unkC = 1;
    sceSifSendCmd(0x80000002, temp_5_80, 0x10, 0, 0, 0);
while (func_0011A458(0) == 0) {
    }
    sceSifSetReg(0x80000002, 1);
    return;
block_8:
    return;
}
#endif /* NON_MATCHING */
