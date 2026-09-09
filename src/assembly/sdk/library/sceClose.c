/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 86.3368%
 * blocker: Codex judged the logic correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceClose; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceClose\n"
    ".type sceClose, @function\n"
    "sceClose:\n"
    "addiu      $29, $29, -0xA0\n"
    "sd         $20, 0x80($29)\n"
    "sd         $18, 0x60($29)\n"
    "lui        $20, %hi(D_00156880)\n"
    "sd         $16, 0x40($29)\n"
    "addiu      $18, $20, %lo(D_00156880)\n"
    "sd         $31, 0x90($29)\n"
    "sd         $19, 0x70($29)\n"
    "jal        get_iob\n"
    "sd        $17, 0x50($29)\n"
    "daddu      $16, $2, $0\n"
    "jal        _sceFsWaitS\n"
    "addiu     $4, $0, 0x1\n"
    "lui        $3, %hi(D_0012FC94)\n"
    "lw         $2, %lo(D_0012FC94)($3)\n"
    "bnez       $2, .L0011BF5C\n"
    "nop\n"
    "jal        ReadQueueStatus\n"
    "nop\n"
    "b          .L0011C064\n"
    "addiu     $2, $0, -0x1\n"
    ".L0011BF5C:\n"
    "beqz       $16, .L0011BF70\n"
    "nop\n"
    "lw         $2, 0x4($16)\n"
    "bnel       $2, $0, .L0011BF80\n"
    "lw        $3, 0x0($16)\n"
    ".L0011BF70:\n"
    "jal        ReadQueueStatus\n"
    "nop\n"
    "b          .L0011C064\n"
    "addiu     $2, $0, -0x9\n"
    ".L0011BF80:\n"
    "lui        $2, %hi(D_00157D80)\n"
    "addiu      $2, $2, %lo(D_00157D80)\n"
    "addiu      $4, $0, 0x1\n"
    "sw         $3, 0xC($18)\n"
    "subu       $2, $16, $2\n"
    "sw         $4, 0x14($29)\n"
    "sra        $2, $2, 4\n"
    "sw         $2, 0x10($18)\n"
    "addiu      $4, $29, 0x10\n"
    "sw         $0, 0x18($29)\n"
    "jal        CreateSema\n"
    "sw        $0, 0x24($29)\n"
    "daddu      $17, $2, $0\n"
    "addiu      $3, $29, 0x30\n"
    "lui        $2, %hi(D_001574C0)\n"
    "sw         $17, %lo(D_00156880)($20)\n"
    "addiu      $19, $2, %lo(D_001574C0)\n"
    "lui        $4, %hi(D_00157F80)\n"
    "addiu      $2, $0, 0x4\n"
    "sw         $3, 0x4($18)\n"
    "sw         $2, 0x8($18)\n"
    "addiu      $4, $4, %lo(D_00157F80)\n"
    "daddu      $7, $18, $0\n"
    "addiu      $5, $0, 0x1\n"
    "sw         $0, 0x0($29)\n"
    "daddu      $6, $0, $0\n"
    "addiu      $8, $0, 0x14\n"
    "daddu      $9, $19, $0\n"
    "addiu      $10, $0, 0x4\n"
    "jal        sceSifCallRpc\n"
    "daddu     $11, $0, $0\n"
    "bgezl      $2, .L0011C01C\n"
    "sw        $0, 0x4($16)\n"
    "jal        DeleteSema\n"
    "daddu     $4, $17, $0\n"
    "jal        ReadQueueStatus\n"
    "nop\n"
    "b          .L0011C064\n"
    "addiu     $2, $0, -0xB\n"
    ".L0011C01C:\n"
    "lui        $2, (0x20000000 >> 16)\n"
    "or         $2, $19, $2\n"
    "jal        ReadQueueStatus\n"
    "lw        $16, (0x20000000 & 0xFFFF)($2)\n"
    "bnez       $16, .L0011C044\n"
    "nop\n"
    "jal        DeleteSema\n"
    "daddu     $4, $17, $0\n"
    "b          .L0011C064\n"
    "addiu     $2, $0, -0xB\n"
    ".L0011C044:\n"
    "jal        WaitSema\n"
    "daddu     $4, $17, $0\n"
    "jal        DeleteSema\n"
    "daddu     $4, $17, $0\n"
    "lw         $2, 0x30($29)\n"
    "addiu      $3, $0, -0x1\n"
    "slt        $3, $3, $2\n"
    "movn       $2, $0, $3\n"
    ".L0011C064:\n"
    "ld         $31, 0x90($29)\n"
    "ld         $20, 0x80($29)\n"
    "ld         $19, 0x70($29)\n"
    "ld         $18, 0x60($29)\n"
    "ld         $17, 0x50($29)\n"
    "ld         $16, 0x40($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0xA0\n"
    ".size sceClose, .-sceClose\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_sceClose_types.h"
#include "types.h"




extern u32 D_0012FC94[];
extern struct M2c_D_00156880 D_00156880;
extern u8 D_001574C0[];
extern u8 D_00157D80[];
extern u8 D_00157F80[];
extern s32 CreateSema();
extern s32 DeleteSema();
extern s32 ReadQueueStatus();
extern s32 WaitSema();
extern s32 _sceFsWaitS();
extern s32 get_iob();
extern s32 sceSifCallRpc();
s32 sceClose(void) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp24;
    s32 sp30;
    s32 temp_16_79;
    s32 temp_2_46;
    struct M2c_temp_16_13 *temp_16_13;

    temp_16_13 = get_iob();
    _sceFsWaitS(1);
    if (D_0012FC94[0] != 0) {
        goto block_2;
    }
    ReadQueueStatus();
    return -1;
block_2:
    if (temp_16_13 == NULL) {
        goto block_6;
    }
    if (temp_16_13->unk4 == 0) {
        goto block_5;
    }
    goto block_7;
block_5:
block_6:
    ReadQueueStatus();
    return -9;
block_7:
    D_00156880.unkC = (s32) temp_16_13->unk0;
    sp14 = 1;
    D_00156880.unk10 = (s32) ((s32) (((u8 *)temp_16_13 - (u8 *)D_00157D80)) >> 4);
    sp18 = 0;
    sp24 = 0;
    temp_2_46 = CreateSema(&sp10);
    D_00156880.unk0 = temp_2_46;
    D_00156880.unk4 = &sp30;
    D_00156880.unk8 = 4;
    if (sceSifCallRpc(D_00157F80, 1, 0, &D_00156880, 0x14, D_001574C0, 4, 0, 0) < 0) {
        goto block_9;
    }
    temp_16_13->unk4 = 0;
    goto block_11;
block_9:
    DeleteSema(temp_2_46);
    ReadQueueStatus();
    return -0xB;
block_11:
    temp_16_79 = *(volatile u32 *)((u32) D_001574C0 | 0x20000000);
    ReadQueueStatus();
    if (temp_16_79 != 0) {
        goto block_13;
    }
    DeleteSema(temp_2_46);
    return -0xB;
block_13:
    WaitSema(temp_2_46);
    DeleteSema(temp_2_46);
    return (sp30 > -1) ? 0 : sp30;
}
#endif /* NON_MATCHING */
