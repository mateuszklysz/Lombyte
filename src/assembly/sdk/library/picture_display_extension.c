/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 77.0164%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _pictureDisplayExtension; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _pictureDisplayExtension\n"
    ".type _pictureDisplayExtension, @function\n"
    "_pictureDisplayExtension:\n"
    "addiu      $29, $29, -0x70\n"
    "sd         $17, 0x10($29)\n"
    "sd         $31, 0x60($29)\n"
    "daddu      $17, $4, $0\n"
    "sd         $21, 0x50($29)\n"
    "sd         $20, 0x40($29)\n"
    "sd         $19, 0x30($29)\n"
    "sd         $18, 0x20($29)\n"
    "sd         $16, 0x0($29)\n"
    "lw         $2, 0x13C($17)\n"
    "beql       $2, $0, .L001292B4\n"
    "lw        $3, 0x174($17)\n"
    "lw         $2, 0x184($17)\n"
    "beqz       $2, .L001292C0\n"
    "addiu     $19, $0, 0x2\n"
    "lw         $3, 0x178($17)\n"
    "addiu      $2, $0, 0x3\n"
    "b          .L001292D0\n"
    "movn      $19, $2, $3\n"
    ".L001292B4:\n"
    "addiu      $2, $0, 0x3\n"
    "beql       $3, $2, .L001292C8\n"
    "lw        $2, 0x184($17)\n"
    ".L001292C0:\n"
    "b          .L001292D0\n"
    "addiu     $19, $0, 0x1\n"
    ".L001292C8:\n"
    "addiu      $19, $0, 0x2\n"
    "movn       $19, $3, $2\n"
    ".L001292D0:\n"
    "blez       $19, .L00129338\n"
    "daddu     $18, $0, $0\n"
    "addiu      $21, $17, 0x18C\n"
    "addiu      $20, $17, 0x198\n"
    "daddu      $4, $17, $0\n"
    "nop\n"
    ".L001292E8:\n"
    "jal        _nextBit\n"
    "addiu     $5, $0, 0x10\n"
    "sll        $16, $18, 2\n"
    "addu       $3, $21, $16\n"
    "daddu      $4, $17, $0\n"
    "sw         $2, 0x0($3)\n"
    "jal        _nextBit\n"
    "addiu     $5, $0, 0x1\n"
    "addiu      $18, $18, 0x1\n"
    "daddu      $4, $17, $0\n"
    "jal        _nextBit\n"
    "addiu     $5, $0, 0x10\n"
    "addu       $16, $20, $16\n"
    "daddu      $4, $17, $0\n"
    "sw         $2, 0x0($16)\n"
    "jal        _nextBit\n"
    "addiu     $5, $0, 0x1\n"
    "slt        $3, $18, $19\n"
    "bnez       $3, .L001292E8\n"
    "daddu     $4, $17, $0\n"
    ".L00129338:\n"
    "ld         $31, 0x60($29)\n"
    "ld         $21, 0x50($29)\n"
    "ld         $20, 0x40($29)\n"
    "ld         $19, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x70\n"
    ".size _pictureDisplayExtension, .-_pictureDisplayExtension\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_picture_display_extension_types.h"
#include "types.h"


extern s32 _nextBit();
void _pictureDisplayExtension(struct M2c_arg0 *arg0) {
    s32 temp_16_42;
    s32 temp_3_14;
    s32 var_18_34;
    s32 var_19_21;

    if (arg0->unk13C != 0) {
        goto block_2;
    }
    temp_3_14 = arg0->unk174;
    goto block_5;
block_2:
    if (arg0->unk184 == 0) {
        goto block_8;
    }
    var_19_21 = (arg0->unk178 != 0) ? 3 : 2;
    goto block_10;
block_5:
    if (temp_3_14 != 3) {
        goto block_7;
    }
    goto block_9;
block_7:
block_8:
    var_19_21 = 1;
    goto block_10;
block_9:
    var_19_21 = (arg0->unk184 != 0) ? temp_3_14 : 2;
block_10:
    var_18_34 = 0;
    if (var_19_21 <= 0) {
        goto block_13;
    }
loop_12:
    temp_16_42 = var_18_34 * 4;
    *(((u8 *)arg0 + (0x18C ))+ temp_16_42) = _nextBit(arg0, 0x10);
    _nextBit(arg0, 1);
    var_18_34 += 1;
    *(((u8 *)arg0 + (0x198 ))+ temp_16_42) = _nextBit(arg0, 0x10);
    _nextBit(arg0, 1);
    if (var_18_34 < var_19_21) {
        goto loop_12;
    }
block_13:
    return;
}
#endif /* NON_MATCHING */
