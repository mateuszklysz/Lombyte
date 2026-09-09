/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 76.4769%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit fflush; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl fflush\n"
    ".type fflush, @function\n"
    "fflush:\n"
    "addiu      $29, $29, -0x40\n"
    "sd         $17, 0x10($29)\n"
    "sd         $31, 0x30($29)\n"
    "daddu      $17, $4, $0\n"
    "sd         $18, 0x20($29)\n"
    "bnez       $17, .L001139A0\n"
    "sd        $16, 0x0($29)\n"
    "lui        $2, %hi(D_0012F76C)\n"
    "lui        $5, %hi(fflush)\n"
    "lw         $4, %lo(D_0012F76C)($2)\n"
    "jal        _fwalk\n"
    "addiu     $5, $5, %lo(fflush)\n"
    "b          .L00113A58\n"
    "ld        $31, 0x30($29)\n"
    ".L001139A0:\n"
    "lw         $3, 0x54($17)\n"
    "bnel       $3, $0, .L001139C0\n"
    "lw        $2, 0x38($3)\n"
    "lui        $2, %hi(D_0012F76C)\n"
    "lw         $3, %lo(D_0012F76C)($2)\n"
    "sw         $3, 0x54($17)\n"
    "lw         $2, 0x38($3)\n"
    "nop\n"
    ".L001139C0:\n"
    "bnel       $2, $0, .L001139D4\n"
    "lh        $3, 0xC($17)\n"
    "jal        __sinit\n"
    "daddu     $4, $3, $0\n"
    "lh         $3, 0xC($17)\n"
    ".L001139D4:\n"
    "andi       $2, $3, 0x8\n"
    "beqz       $2, .L00113A54\n"
    "daddu     $2, $0, $0\n"
    "lw         $18, 0x10($17)\n"
    "bnel       $18, $0, .L00113A08\n"
    "lw        $2, 0x0($17)\n"
    "b          .L00113A58\n"
    "ld        $31, 0x30($29)\n"
    ".L001139F4:\n"
    "lhu        $3, 0xC($17)\n"
    "addiu      $2, $0, -0x1\n"
    "ori        $3, $3, 0x40\n"
    "b          .L00113A54\n"
    "sh        $3, 0xC($17)\n"
    ".L00113A08:\n"
    "andi       $3, $3, 0x3\n"
    "sw         $18, 0x0($17)\n"
    "daddu      $4, $0, $0\n"
    "bnez       $3, .L00113A20\n"
    "subu      $16, $2, $18\n"
    "lw         $4, 0x14($17)\n"
    ".L00113A20:\n"
    "blez       $16, .L00113A50\n"
    "sw        $4, 0x8($17)\n"
    ".L00113A28:\n"
    "lw         $2, 0x24($17)\n"
    "daddu      $5, $18, $0\n"
    "lw         $4, 0x1C($17)\n"
    "jalr       $2\n"
    "daddu     $6, $16, $0\n"
    "daddu      $3, $2, $0\n"
    "blez       $3, .L001139F4\n"
    "subu      $16, $16, $3\n"
    "bgtz       $16, .L00113A28\n"
    "addu      $18, $18, $3\n"
    ".L00113A50:\n"
    "daddu      $2, $0, $0\n"
    ".L00113A54:\n"
    "ld         $31, 0x30($29)\n"
    ".L00113A58:\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x40\n"
    ".size fflush, .-fflush\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_fflush_types.h"
#include "types.h"




extern s32 D_0012F76C;
extern s32 __sinit();
extern s32 _fwalk();
s32 fflush(struct M2c_arg0 *arg0) {
    s16 temp_3_31;
    s32 temp_2_38;
    s32 temp_2_61;
    s32 temp_3_63;
    s32 var_16_52;
    s32 var_18_36;
    s32 var_2_20;
    s32 var_4_50;
    struct M2c_var_3_18 *var_3_18;

    if (arg0 != NULL) {
        goto block_2;
    }
    return _fwalk(D_0012F76C, fflush);
block_2:
    var_3_18 = arg0->unk54;
    if (var_3_18 == NULL) {
        goto block_4;
    }
    var_2_20 = var_3_18->unk38;
    goto block_6;
block_4:
    var_3_18 = D_0012F76C;
    arg0->unk8 = var_4_50;
    var_2_20 = var_3_18->unk38;
block_6:
    if (var_2_20 != 0) {
        goto block_8;
    }
    __sinit(var_3_18);
block_8:
    temp_3_31 = arg0->unkC;
    if (!(temp_3_31 & 8)) {
        goto block_20;
    }
    var_18_36 = arg0->unk10;
    if (var_18_36 == 0) {
        goto block_11;
    }
    temp_2_38 = arg0->unk0;
    goto block_14;
block_11:
    return 0;
block_13:
    arg0->unkC = (s16) ((u16) arg0->unkC | 0x40);
    return -1;
block_14:
    arg0->unk54 = var_3_18;
    var_4_50 = 0;
    var_16_52 = temp_2_38 - var_18_36;
    if (temp_3_31 & 3) {
        goto block_16;
    }
    var_4_50 = arg0->unk14;
block_16:
    arg0->unk0 = var_18_36;
    if (var_16_52 <= 0) {
        goto block_19;
    }
loop_17:
    temp_2_61 = ((s32 (*)())(arg0->unk24))(arg0->unk1C, var_18_36, var_16_52);
    temp_3_63 = temp_2_61;
    var_16_52 -= temp_3_63;
    if (temp_3_63 <= 0) {
        goto block_13;
    }
    var_18_36 += temp_3_63;
    if (var_16_52 > 0) {
        goto loop_17;
    }
block_19:
block_20:
    return 0;
}
#endif /* NON_MATCHING */
