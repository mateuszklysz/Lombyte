/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 84.6000%
 * blocker: Codex judged the logic correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceSifBindRpc; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceSifBindRpc\n"
    ".type sceSifBindRpc, @function\n"
    "sceSifBindRpc:\n"
    "addiu      $29, $29, -0x70\n"
    "sd         $17, 0x30($29)\n"
    "sd         $19, 0x50($29)\n"
    "daddu      $17, $4, $0\n"
    "sd         $18, 0x40($29)\n"
    "lui        $4, %hi(D_00156800)\n"
    "sd         $16, 0x20($29)\n"
    "daddu      $19, $5, $0\n"
    "sd         $31, 0x60($29)\n"
    "daddu      $18, $6, $0\n"
    "sw         $0, 0x10($17)\n"
    "addiu      $4, $4, %lo(D_00156800)\n"
    "jal        func_0011ACE8\n"
    "sw        $0, 0x24($17)\n"
    "daddu      $16, $2, $0\n"
    "beqz       $16, .L0011B11C\n"
    "addiu     $2, $0, -0x1\n"
    "lw         $2, 0x18($16)\n"
    "andi       $3, $18, 0x1\n"
    "sw         $16, 0x0($17)\n"
    "sw         $2, 0x4($17)\n"
    "sw         $19, 0x20($16)\n"
    "sw         $16, 0x14($16)\n"
    "bnez       $3, .L0011B0E0\n"
    "sw        $17, 0x1C($16)\n"
    "addiu      $2, $0, 0x1\n"
    "sw         $0, 0x8($29)\n"
    "sw         $2, 0x4($29)\n"
    "jal        CreateSema\n"
    "daddu     $4, $29, $0\n"
    "bgez       $2, .L0011B088\n"
    "sw        $2, 0x8($17)\n"
    "jal        func_0011AD90\n"
    "daddu     $4, $16, $0\n"
    "b          .L0011B11C\n"
    "addiu     $2, $0, -0x3\n"
    ".L0011B088:\n"
    "lui        $4, (0x80000009 >> 16)\n"
    "daddu      $5, $16, $0\n"
    "ori        $4, $4, (0x80000009 & 0xFFFF)\n"
    "addiu      $6, $0, 0x40\n"
    "daddu      $7, $0, $0\n"
    "daddu      $8, $0, $0\n"
    "jal        sceSifSendCmd\n"
    "daddu     $9, $0, $0\n"
    "bnez       $2, .L0011B0C8\n"
    "nop\n"
    "jal        func_0011AD90\n"
    "daddu     $4, $16, $0\n"
    "jal        DeleteSema\n"
    "lw        $4, 0x8($17)\n"
    "b          .L0011B11C\n"
    "addiu     $2, $0, -0x2\n"
    ".L0011B0C8:\n"
    "jal        WaitSema\n"
    "lw        $4, 0x8($17)\n"
    "jal        DeleteSema\n"
    "lw        $4, 0x8($17)\n"
    "b          .L0011B11C\n"
    "daddu     $2, $0, $0\n"
    ".L0011B0E0:\n"
    "addiu      $2, $0, -0x1\n"
    "lui        $4, (0x80000009 >> 16)\n"
    "sw         $2, 0x8($17)\n"
    "ori        $4, $4, (0x80000009 & 0xFFFF)\n"
    "daddu      $5, $16, $0\n"
    "addiu      $6, $0, 0x40\n"
    "daddu      $7, $0, $0\n"
    "daddu      $8, $0, $0\n"
    "jal        sceSifSendCmd\n"
    "daddu     $9, $0, $0\n"
    "bnez       $2, .L0011B11C\n"
    "daddu     $2, $0, $0\n"
    "jal        func_0011AD90\n"
    "daddu     $4, $16, $0\n"
    "addiu      $2, $0, -0x2\n"
    ".L0011B11C:\n"
    "ld         $31, 0x60($29)\n"
    "ld         $19, 0x50($29)\n"
    "ld         $18, 0x40($29)\n"
    "ld         $17, 0x30($29)\n"
    "ld         $16, 0x20($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x70\n"
    ".size sceSifBindRpc, .-sceSifBindRpc\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_sif_rpc_sce_sif_bind_rpc_types.h"
#include "types.h"




extern u8 D_00156800[];
extern s32 CreateSema();
extern s32 DeleteSema();
extern s32 WaitSema();
extern s32 func_0011ACE8();
extern s32 func_0011AD90();
extern s32 sceSifSendCmd();
s32 sceSifBindRpc(struct M2c_arg0 *arg0, s32 arg1, s32 arg2) {
u8 sp_slot[0x70];    s32 temp_2_31;
    s32 var_2_19;
    struct M2c_temp_2_15 *temp_2_15;

    arg0->unk10 = 0;
    arg0->unk24 = 0;
    temp_2_15 = func_0011ACE8(D_00156800);
    var_2_19 = -1;
    if (temp_2_15 == NULL) {
        goto block_10;
    }
    arg0->unk0 = temp_2_15;
    arg0->unk4 = (s32) temp_2_15->unk18;
    temp_2_15->unk20 = arg1;
    temp_2_15->unk14 = temp_2_15;
    temp_2_15->unk1C = arg0;
    if (arg2 & 1) {
        goto block_7;
    }
    temp_2_31 = CreateSema(sp_slot, 1, 0);
    arg0->unk8 = temp_2_31;
    if (temp_2_31 >= 0) {
        goto block_4;
    }
    func_0011AD90(temp_2_15);
    return -3;
block_4:
    if (sceSifSendCmd(0x80000009, temp_2_15, 0x40, 0, 0, 0) != 0) {
        goto block_6;
    }
    func_0011AD90(temp_2_15);
    DeleteSema(arg0->unk8);
    goto block_9;
block_6:
    WaitSema(arg0->unk8);
    DeleteSema(arg0->unk8);
    return 0;
block_7:
    arg0->unk8 = -1;
    var_2_19 = 0;
    if (sceSifSendCmd(0x80000009, temp_2_15, 0x40, 0, 0, 0) != 0) {
        goto block_10;
    }
    func_0011AD90(temp_2_15);
block_9:
    var_2_19 = -2;
block_10:
    return var_2_19;
}
#endif /* NON_MATCHING */
