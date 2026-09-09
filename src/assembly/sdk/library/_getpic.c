/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 88.7283%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _getpic; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _getpic\n"
    ".type _getpic, @function\n"
    "_getpic:\n"
    "addiu      $29, $29, -0x50\n"
    "sd         $19, 0x30($29)\n"
    "sd         $18, 0x20($29)\n"
    "addiu      $19, $0, 0x1\n"
    "sd         $17, 0x10($29)\n"
    "daddu      $18, $0, $0\n"
    "sd         $31, 0x40($29)\n"
    "daddu      $17, $4, $0\n"
    "sd         $16, 0x0($29)\n"
    "lw         $16, 0x40($17)\n"
    "lw         $6, 0xD8($16)\n"
    "andi       $2, $6, 0x3F\n"
    "beqz       $2, .L0012BCE0\n"
    "sw        $0, 0x0($16)\n"
    "lui        $5, %hi(D_00153A58)\n"
    "daddu      $4, $16, $0\n"
    "jal        _Error1\n"
    "addiu     $5, $5, %lo(D_00153A58)\n"
    "b          .L0012BDE4\n"
    "addiu     $2, $0, -0x1\n"
    ".L0012BCE0:\n"
    "sw         $0, 0x820($16)\n"
    "addiu      $2, $0, -0x1\n"
    ".L0012BCE8:\n"
    "beq        $18, $2, .L0012BD20\n"
    "sltiu     $2, $19, 0x5\n"
    ".L0012BCF0:\n"
    "jal        _nextHeader\n"
    "daddu     $4, $16, $0\n"
    "daddu      $19, $2, $0\n"
    "beqz       $19, .L0012BD20\n"
    "sltiu     $2, $19, 0x5\n"
    "lw         $3, 0x174($16)\n"
    "lw         $2, 0xD4($16)\n"
    "beq        $3, $2, .L0012BD20\n"
    "sltiu     $2, $19, 0x5\n"
    "lw         $2, 0x848($16)\n"
    "bnez       $2, .L0012BCF0\n"
    "sltiu     $2, $19, 0x5\n"
    ".L0012BD20:\n"
    "beqz       $2, .L0012BDC8\n"
    "lui       $2, %hi(jtbl_00153AA0)\n"
    "sll        $3, $19, 2\n"
    "addiu      $2, $2, %lo(jtbl_00153AA0)\n"
    "addu       $3, $3, $2\n"
    "lw         $4, 0x0($3)\n"
    "jr         $4\n"
    "nop\n"
    "jal        _sceMpegFlush\n"
    "daddu     $4, $17, $0\n"
    "addiu      $3, $0, 0x1\n"
    "b          .L0012BDC8\n"
    "sw        $3, 0x0($16)\n"
    "sw         $0, 0xA8($16)\n"
    "daddu      $4, $17, $0\n"
    "sw         $0, 0xA4($16)\n"
    "daddu      $5, $0, $0\n"
    "sw         $0, 0xA0($16)\n"
    "jal        _decodeOrSkip\n"
    "lw        $6, 0x94($16)\n"
    "lw         $3, 0xA0($16)\n"
    "daddu      $18, $2, $0\n"
    "addiu      $3, $3, 0x1\n"
    "b          .L0012BDC8\n"
    "sw        $3, 0xA0($16)\n"
    "lw         $5, 0xA4($16)\n"
    "daddu      $4, $17, $0\n"
    "jal        _decodeOrSkip\n"
    "lw        $6, 0x98($16)\n"
    "lw         $3, 0xA4($16)\n"
    "daddu      $18, $2, $0\n"
    "addiu      $3, $3, 0x1\n"
    "b          .L0012BDC8\n"
    "sw        $3, 0xA4($16)\n"
    "lw         $5, 0xA8($16)\n"
    "daddu      $4, $17, $0\n"
    "jal        _decodeOrSkip\n"
    "lw        $6, 0x9C($16)\n"
    "lw         $3, 0xA8($16)\n"
    "daddu      $18, $2, $0\n"
    "addiu      $3, $3, 0x1\n"
    "sw         $3, 0xA8($16)\n"
    ".L0012BDC8:\n"
    "lw         $2, 0x820($16)\n"
    "bnez       $2, .L0012BDE4\n"
    "addiu     $2, $0, 0x1\n"
    "lw         $2, 0x0($16)\n"
    "beqz       $2, .L0012BCE8\n"
    "addiu     $2, $0, -0x1\n"
    "addiu      $2, $0, 0x1\n"
    ".L0012BDE4:\n"
    "ld         $31, 0x40($29)\n"
    "ld         $19, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x50\n"
    ".size _getpic, .-_getpic\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library__getpic_types.h"
#include "types.h"




extern u8 D_00153A58[];
extern s32 _Error1();
extern s32 _decodeOrSkip();
extern s32 _nextHeader();
extern s32 _sceMpegFlush();
s32 _getpic(struct M2c_arg0 *arg0) {
    s32 temp_6_13;
    s32 var_18_8;
    s32 var_2_28;
    u32 var_19_6;
    struct M2c_temp_16_12 *temp_16_12;

    var_19_6 = 1;
    var_18_8 = 0;
    temp_16_12 = arg0->unk40;
    temp_6_13 = temp_16_12->unkD8;
    temp_16_12->unk0 = 0;
    if (temp_6_13 & 0x3F) {
        _Error1(temp_16_12, D_00153A58, temp_6_13);
        return -1;
    }
    temp_16_12->unk820 = 0;
loop_3:
    var_2_28 = var_19_6 < 5U;
    if (var_18_8 != -1) {
loop_4:
        var_19_6 = _nextHeader(temp_16_12);
        var_2_28 = var_19_6 < 5U;
        if (var_19_6 != 0) {
            var_2_28 = var_19_6 < 5U;
            if (temp_16_12->unk174 != temp_16_12->unkD4) {
                var_2_28 = var_19_6 < 5U;
                if (temp_16_12->unk848 != 0) {
                    goto loop_4;
                }
            }
        }
    }
    if (var_2_28 != 0) {
        switch (var_19_6) {
        case 0:
            _sceMpegFlush(arg0);
            temp_16_12->unk0 = 1;
            break;
        case 1:
            temp_16_12->unkA8 = 0;
            temp_16_12->unkA4 = 0;
            temp_16_12->unkA0 = 0;
            var_18_8 = _decodeOrSkip(arg0, 0, temp_16_12->unk94);
            temp_16_12->unkA0 = (s32) (temp_16_12->unkA0 + 1);
            break;
        case 2:
            var_18_8 = _decodeOrSkip(arg0, temp_16_12->unkA4, temp_16_12->unk98);
            temp_16_12->unkA4 = (s32) (temp_16_12->unkA4 + 1);
            break;
        case 3:
        case 4:
            var_18_8 = _decodeOrSkip(arg0, temp_16_12->unkA8, temp_16_12->unk9C);
            temp_16_12->unkA8 = (s32) (temp_16_12->unkA8 + 1);
            break;
        }
    }
    if (temp_16_12->unk820 == 0) {
        if (temp_16_12->unk0 != 0) {

        } else {
            goto loop_3;
        }
    }
    return 1;
}
#endif /* NON_MATCHING */
