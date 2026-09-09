/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 64.1509%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit InitThread; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl InitThread\n"
    ".type InitThread, @function\n"
    "InitThread:\n"
    "addiu      $29, $29, -0x80\n"
    "sd         $16, 0x50($29)\n"
    "lui        $16, %hi(D_0012FBF8)\n"
    "sd         $31, 0x70($29)\n"
    "lw         $2, %lo(D_0012FBF8)($16)\n"
    "bgtz       $2, .L00119328\n"
    "sd        $17, 0x60($29)\n"
    "addiu      $2, $0, 0xFF\n"
    "sw         $0, 0x38($29)\n"
    "sw         $2, 0x34($29)\n"
    "jal        CreateSema\n"
    "addiu     $4, $29, 0x30\n"
    "lui        $17, %hi(D_00154500)\n"
    "bltz       $2, .L00119328\n"
    "sw        $2, %lo(D_00154500)($17)\n"
    "lui        $2, %hi(topThread)\n"
    "lui        $3, %hi(D_00154100)\n"
    "lui        $5, %hi(D_00166C00)\n"
    "addiu      $2, $2, %lo(topThread)\n"
    "addiu      $3, $3, %lo(D_00154100)\n"
    "addiu      $5, $5, %lo(D_00166C00)\n"
    "addiu      $6, $0, 0x400\n"
    "sw         $2, 0x4($29)\n"
    "sw         $3, 0x8($29)\n"
    "daddu      $4, $29, $0\n"
    "sw         $6, 0xC($29)\n"
    "sw         $5, 0x10($29)\n"
    "jal        CreateThread\n"
    "sw        $0, 0x14($29)\n"
    "daddu      $4, $2, $0\n"
    "bgez       $4, .L00119330\n"
    "sw        $4, %lo(D_0012FBF8)($16)\n"
    "jal        DeleteSema\n"
    "lw        $4, %lo(D_00154500)($17)\n"
    ".L00119328:\n"
    "b          .L00119360\n"
    "addiu     $2, $0, -0x1\n"
    ".L00119330:\n"
    "lui        $2, %hi(D_00154508)\n"
    "addiu      $3, $2, %lo(D_00154508)\n"
    "sw         $0, %lo(D_00154508)($2)\n"
    "daddu      $5, $3, $0\n"
    "jal        _StartThread\n"
    "sw        $0, 0x4($3)\n"
    "jal        GetThreadId\n"
    "nop\n"
    "daddu      $4, $2, $0\n"
    "jal        ChangeThreadPriority\n"
    "addiu     $5, $0, 0x1\n"
    "lw         $2, %lo(D_0012FBF8)($16)\n"
    ".L00119360:\n"
    "ld         $31, 0x70($29)\n"
    "ld         $17, 0x60($29)\n"
    "ld         $16, 0x50($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x80\n"
    ".size InitThread, .-InitThread\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_InitThread_types.h"
#include "types.h"


extern u32 D_0012FBF8[];
extern u8 D_00154100[];
extern u32 D_00154500[];
extern struct M2c_D_00154508 D_00154508;
extern u8 D_00166C00[];
extern s32 ChangeThreadPriority();
extern s32 CreateSema();
extern s32 CreateThread();
extern s32 DeleteSema();
extern s32 GetThreadId();
extern s32 _StartThread();
extern void topThread();
s32 InitThread(void) {
u8 sp_slot[0x80];    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 temp_2_13;
    s32 temp_2_30;

    if (D_0012FBF8[0] > 0) {
        goto block_4;
    }
    sp38 = 0;
    sp34 = 0xFF;
    temp_2_13 = CreateSema(&sp30);
    D_00154500[0] = temp_2_13;
    if (temp_2_13 < 0) {
        goto block_4;
    }
    temp_2_30 = CreateThread(sp_slot, D_00166C00, 0x400, &topThread, D_00154100, 0x400, D_00166C00, 0);
    D_0012FBF8[0] = temp_2_30;
    if (temp_2_30 >= 0) {
        goto block_5;
    }
    DeleteSema(D_00154500[0]);
block_4:
    return -1;
block_5:
    D_00154508.unk0 = 0;
    D_00154508.unk4 = 0;
    _StartThread(temp_2_30, &D_00154508);
    ChangeThreadPriority(GetThreadId(), 1);
    return D_0012FBF8[0];
}
#endif /* NON_MATCHING */
