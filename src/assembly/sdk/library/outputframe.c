/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 81.9167%
 * blocker: Codex judged the logic correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _outputFrame; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _outputFrame\n"
    ".type _outputFrame, @function\n"
    "_outputFrame:\n"
    "addiu      $29, $29, -0x20\n"
    "daddu      $7, $5, $0\n"
    "sd         $16, 0x0($29)\n"
    "sd         $31, 0x10($29)\n"
    "beqz       $6, .L0012952C\n"
    "daddu     $16, $4, $0\n"
    "lw         $2, 0x174($16)\n"
    "addiu      $3, $0, 0x3\n"
    "bne        $2, $3, .L00129508\n"
    "lw        $2, 0x150($16)\n"
    "bnel       $2, $3, .L001294F4\n"
    "lw        $5, 0x1B8($16)\n"
    "lw         $5, 0x1C4($16)\n"
    ".L001294F4:\n"
    "addiu      $6, $7, -0x1\n"
    "jal        _dispRefImage\n"
    "daddu     $4, $16, $0\n"
    "b          .L00129530\n"
    "lw        $3, 0xF8($16)\n"
    ".L00129508:\n"
    "bnel       $2, $3, .L0012951C\n"
    "lw        $5, 0x1C8($16)\n"
    "lw         $5, 0x1D4($16)\n"
    "b          .L00129520\n"
    "lw        $6, 0x1E4($16)\n"
    ".L0012951C:\n"
    "lw         $6, 0x1D8($16)\n"
    ".L00129520:\n"
    "addiu      $7, $7, -0x1\n"
    "jal        _dispRefImageField\n"
    "daddu     $4, $16, $0\n"
    ".L0012952C:\n"
    "lw         $3, 0xF8($16)\n"
    ".L00129530:\n"
    "addiu      $2, $0, 0x1\n"
    "bne        $3, $2, .L00129544\n"
    "ld        $31, 0x10($29)\n"
    "addiu      $2, $0, 0x2\n"
    "sw         $2, 0xF8($16)\n"
    ".L00129544:\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x20\n"
    ".size _outputFrame, .-_outputFrame\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_outputframe_types.h"
#include "types.h"


extern s32 _dispRefImage();
extern s32 _dispRefImageField();
void _outputFrame(struct M2c_arg0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_2_12;
    s32 var_5_14;
    s32 var_5_24;
    s32 var_6_27;

    if (arg2 != 0) {
        temp_2_12 = arg0->unk150;
        if (arg0->unk174 == 3) {
            if (temp_2_12 != 3) {
                var_5_14 = arg0->unk1B8;
            } else {
                var_5_14 = arg0->unk1C4;
            }
            _dispRefImage(arg0, var_5_14, arg1 - 1, arg1);
        } else {
            if (temp_2_12 != 3) {
                var_5_24 = arg0->unk1C8;
                var_6_27 = arg0->unk1D8;
            } else {
                var_5_24 = arg0->unk1D4;
                var_6_27 = arg0->unk1E4;
            }
            _dispRefImageField(arg0, var_5_24, var_6_27, arg1 - 1);
        }
    }
    if (arg0->unkF8 == 1) {
        arg0->unkF8 = 2;
    }
}
#endif /* NON_MATCHING */
