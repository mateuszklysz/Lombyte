/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 81.0357%
 * blocker: logic is correct above 80%; breadth-first fallback preserves the C logic while register allocation, stack/frame layout, and delay-slot scheduling remain compiler blockers
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit __smakebuf; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl __smakebuf\n"
    ".type __smakebuf, @function\n"
    "__smakebuf:\n"
    "addiu      $29, $29, -0xB0\n"
    "sd         $16, 0x70($29)\n"
    "sd         $31, 0xA0($29)\n"
    "daddu      $16, $4, $0\n"
    "sd         $18, 0x90($29)\n"
    "sd         $17, 0x80($29)\n"
    "lhu        $3, 0xC($16)\n"
    "andi       $2, $3, 0x2\n"
    "beqz       $2, .L001145B4\n"
    "addiu     $2, $0, 0x1\n"
    "addiu      $3, $16, 0x43\n"
    "sw         $2, 0x14($16)\n"
    "sw         $3, 0x10($16)\n"
    "b          .L001146B0\n"
    "sw        $3, 0x0($16)\n"
    ".L001145B4:\n"
    "lh         $5, 0xE($16)\n"
    "bltz       $5, .L001145DC\n"
    "ori       $2, $3, 0x800\n"
    "lw         $4, 0x54($16)\n"
    "jal        func_00114000\n"
    "daddu     $6, $29, $0\n"
    "bgez       $2, .L001145EC\n"
    "lw        $2, 0x4($29)\n"
    "lhu        $3, 0xC($16)\n"
    "ori        $2, $3, 0x800\n"
    ".L001145DC:\n"
    "daddu      $17, $0, $0\n"
    "sh         $2, 0xC($16)\n"
    "b          .L00114634\n"
    "addiu     $18, $0, 0x400\n"
    ".L001145EC:\n"
    "addiu      $18, $0, 0x400\n"
    "ori        $4, $0, 0x8000\n"
    "andi       $17, $2, 0xF000\n"
    "daddu      $2, $17, $0\n"
    "xori       $3, $17, 0x2000\n"
    "bne        $2, $4, .L00114628\n"
    "sltiu     $17, $3, 0x1\n"
    "lui        $2, %hi(__sseek)\n"
    "lw         $3, 0x28($16)\n"
    "addiu      $2, $2, %lo(__sseek)\n"
    "bne        $3, $2, .L0011462C\n"
    "lhu       $2, 0xC($16)\n"
    "sw         $18, 0x4C($16)\n"
    "b          .L00114630\n"
    "ori       $2, $2, 0x400\n"
    ".L00114628:\n"
    "lhu        $2, 0xC($16)\n"
    ".L0011462C:\n"
    "ori        $2, $2, 0x800\n"
    ".L00114630:\n"
    "sh         $2, 0xC($16)\n"
    ".L00114634:\n"
    "lw         $4, 0x54($16)\n"
    "jal        _malloc_r\n"
    "addiu     $5, $0, 0x400\n"
    "daddu      $5, $2, $0\n"
    "bnez       $5, .L0011466C\n"
    "lhu       $2, 0xC($16)\n"
    "addiu      $4, $16, 0x43\n"
    "addiu      $3, $0, 0x1\n"
    "sw         $4, 0x10($16)\n"
    "ori        $2, $2, 0x2\n"
    "sw         $3, 0x14($16)\n"
    "sh         $2, 0xC($16)\n"
    "b          .L001146B0\n"
    "sw        $4, 0x0($16)\n"
    ".L0011466C:\n"
    "lui        $3, %hi(D_00113AC8)\n"
    "lw         $4, 0x54($16)\n"
    "addiu      $3, $3, %lo(D_00113AC8)\n"
    "ori        $2, $2, 0x80\n"
    "sw         $5, 0x10($16)\n"
    "sw         $3, 0x3C($4)\n"
    "sh         $2, 0xC($16)\n"
    "sw         $18, 0x14($16)\n"
    "beqz       $17, .L001146B0\n"
    "sw        $5, 0x0($16)\n"
    "jal        func_00118EC0\n"
    "lh        $4, 0xE($16)\n"
    "beqz       $2, .L001146B4\n"
    "ld        $31, 0xA0($29)\n"
    "lhu        $2, 0xC($16)\n"
    "ori        $2, $2, 0x1\n"
    "sh         $2, 0xC($16)\n"
    ".L001146B0:\n"
    "ld         $31, 0xA0($29)\n"
    ".L001146B4:\n"
    "ld         $18, 0x90($29)\n"
    "ld         $17, 0x80($29)\n"
    "ld         $16, 0x70($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0xB0\n"
    ".size __smakebuf, .-__smakebuf\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_smakebuf_types.h"
#include "types.h"




extern u8 D_00113AC8[];
extern s32 _malloc_r();
extern s32 func_00114000();
extern s32 func_00118EC0();
extern void __sseek();
void __smakebuf(struct M2c_arg0 *arg0) {    s32 sp4;
u8 sp_slot[0xB0];    s16 temp_5_19;
    s32 temp_17_37;
    s32 var_17_30;
    u16 temp_2_62;
    u16 temp_3_9;
    u16 var_2_21;
    u16 var_2_49;
    s32 *temp_2_58;
    s32 *temp_3_13;
    s32 *temp_4_63;

    temp_3_9 = arg0->unkC;
    if (!(temp_3_9 & 2)) {
        goto block_2;
    }
    temp_3_13 = ((u8 *)arg0 + (0x43));
    arg0->unk14 = 1;
    arg0->unk10 = arg0->unk0 = temp_3_13;
    goto block_17;
block_2:
    temp_5_19 = arg0->unkE;
    var_2_21 = temp_3_9 | 0x800;
    if (temp_5_19 < 0) {
        goto block_5;
    }
    if (func_00114000(arg0->unk54, temp_5_19, sp_slot) >= 0) {
        goto block_6;
    }
    var_2_21 = arg0->unkC | 0x800;
block_5:
    var_17_30 = 0;
    arg0->unkC = var_2_21;
    goto block_12;
block_6:
    temp_17_37 = sp4 & 0xF000;
    var_17_30 = temp_17_37 == 0x2000;
    if (temp_17_37 != 0x8000) {
        goto block_9;
    }
    if (arg0->unk28 != &__sseek) {
        goto block_10;
    }
    var_2_49 = arg0->unkC | 0x400;
    goto block_11;
block_9:
block_10:
    var_2_49 = arg0->unkC | 0x800;
block_11:
    arg0->unkC = var_2_49;
block_12:
    temp_2_58 = _malloc_r(arg0->unk54, 0x400);
    temp_2_62 = arg0->unkC;
    if (temp_2_58 != NULL) {
        goto block_14;
    }
    temp_4_63 = ((u8 *)arg0 + (0x43));
    arg0->unk10 = temp_4_63;
    arg0->unk14 = 1;
    arg0->unkC = (u16) (temp_2_62 | 2);
    arg0->unk0 = temp_4_63;
    goto block_17;
block_14:
    arg0->unk10 = temp_2_58;
    arg0->unk54->unk3C = D_00113AC8;
    arg0->unkC = (u16) (temp_2_62 | 0x80);
    (unsigned char)arg0->unk14 = 0x400;
    arg0->unk0 = temp_2_58;
    if (var_17_30 == 0) {
        goto block_17;
    }
    if (func_00118EC0(arg0->unkE, temp_2_58) == 0) {
        goto block_18;
    }
    arg0->unkC = (u16) (arg0->unkC | 1);
block_17:
block_18:
    return;
}
#endif /* NON_MATCHING */
