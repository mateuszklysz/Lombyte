/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 91.4928%
 * blocker: Codex judged the logic correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _decodeOrSkipFrame; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _decodeOrSkipFrame\n"
    ".type _decodeOrSkipFrame, @function\n"
    "_decodeOrSkipFrame:\n"
    "addiu      $29, $29, -0x50\n"
    "addiu      $2, $0, -0x1\n"
    "sd         $19, 0x30($29)\n"
    "sd         $17, 0x10($29)\n"
    "daddu      $19, $0, $0\n"
    "sd         $31, 0x40($29)\n"
    "daddu      $17, $4, $0\n"
    "sd         $18, 0x20($29)\n"
    "sd         $16, 0x0($29)\n"
    "beq        $6, $2, .L0012BE38\n"
    "lw        $16, 0x40($17)\n"
    "slt        $2, $5, $6\n"
    "beqz       $2, .L0012BE74\n"
    "daddu     $4, $16, $0\n"
    ".L0012BE38:\n"
    "lw         $2, 0x8($16)\n"
    "bnez       $2, .L0012BE50\n"
    "daddu     $4, $16, $0\n"
    "sw         $0, 0x8($17)\n"
    "addiu      $2, $0, 0x1\n"
    "sw         $2, 0x8($16)\n"
    ".L0012BE50:\n"
    "jal        _updateRefImage\n"
    "daddu     $5, $0, $0\n"
    "beqz       $2, .L0012BE6C\n"
    "daddu     $3, $0, $0\n"
    "jal        _decPicture\n"
    "daddu     $4, $16, $0\n"
    "sltu       $3, $0, $2\n"
    ".L0012BE6C:\n"
    "b          .L0012BE8C\n"
    "daddu     $18, $3, $0\n"
    ".L0012BE74:\n"
    "jal        _updateRefImage\n"
    "daddu     $5, $0, $0\n"
    "addiu      $19, $0, 0x1\n"
    "daddu      $18, $2, $0\n"
    "jal        _dispatchMpegCbNodata\n"
    "daddu     $4, $17, $0\n"
    ".L0012BE8C:\n"
    "lw         $5, 0x118($16)\n"
    "daddu      $4, $16, $0\n"
    "jal        _outputFrame\n"
    "lw        $6, 0x4($16)\n"
    "lw         $3, 0x174($16)\n"
    "addiu      $2, $0, 0x3\n"
    "beql       $3, $2, .L0012BEC4\n"
    "lw        $3, 0xAC($16)\n"
    "bnel       $19, $0, .L0012BEC4\n"
    "lw        $3, 0xAC($16)\n"
    "lw         $2, 0x120($16)\n"
    "sltiu      $2, $2, 0x1\n"
    "sw         $2, 0x120($16)\n"
    "lw         $3, 0xAC($16)\n"
    ".L0012BEC4:\n"
    "lw         $2, 0x118($16)\n"
    "subu       $2, $2, $3\n"
    "sw         $2, 0x8($17)\n"
    "lw         $3, 0x120($16)\n"
    "bnez       $3, .L0012BEF8\n"
    "daddu     $2, $18, $0\n"
    "lw         $2, 0x118($16)\n"
    "lw         $3, 0x4($16)\n"
    "addiu      $2, $2, 0x1\n"
    "addiu      $3, $3, 0x1\n"
    "sw         $2, 0x118($16)\n"
    "sw         $3, 0x4($16)\n"
    "daddu      $2, $18, $0\n"
    ".L0012BEF8:\n"
    "ld         $31, 0x40($29)\n"
    "ld         $19, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x50\n"
    ".size _decodeOrSkipFrame, .-_decodeOrSkipFrame\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library__decodeOrSkipFrame_types.h"
#include "types.h"




extern s32 _decPicture();
extern s32 _dispatchMpegCbNodata();
extern s32 _outputFrame();
extern s32 _updateRefImage();
s32 _decodeOrSkipFrame(struct M2c_arg0 *arg0, s32 arg1, s32 arg2) {
    s32 var_18_34;
    s32 var_19_7;
    s32 var_3_28;
    struct M2c_temp_16_13 *temp_16_13;

    var_19_7 = 0;
    temp_16_13 = arg0->unk40;
    if ((arg2 == -1) || (arg1 < arg2)) {
        if (temp_16_13->unk8 == 0) {
            arg0->unk8 = 0;
            temp_16_13->unk8 = 1;
        }
        var_3_28 = 0;
        if (_updateRefImage(temp_16_13, 0) != 0) {
            var_3_28 = _decPicture(temp_16_13) != 0;
        }
        var_18_34 = var_3_28;
    } else {
        var_19_7 = 1;
        var_18_34 = _updateRefImage(temp_16_13, 0);
        _dispatchMpegCbNodata(arg0);
    }
    _outputFrame(temp_16_13, temp_16_13->unk118, temp_16_13->unk4);
    if ((temp_16_13->unk174 != 3) && (var_19_7 == 0)) {
        temp_16_13->unk120 = (s32) (temp_16_13->unk120 == 0);
    }
    arg0->unk8 = (s32) (temp_16_13->unk118 - temp_16_13->unkAC);
    if (temp_16_13->unk120 == 0) {
        temp_16_13->unk118 = (s32) (temp_16_13->unk118 + 1);
        temp_16_13->unk4 = (s32) (temp_16_13->unk4 + 1);
    }
    return var_18_34;
}
#endif /* NON_MATCHING */
