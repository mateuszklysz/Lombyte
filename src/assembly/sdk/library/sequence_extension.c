/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 73.5526%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _sequenceExtension; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _sequenceExtension\n"
    ".type _sequenceExtension, @function\n"
    "_sequenceExtension:\n"
    "addiu      $29, $29, -0x70\n"
    "sd         $17, 0x10($29)\n"
    "sd         $16, 0x0($29)\n"
    "daddu      $17, $4, $0\n"
    "sd         $21, 0x50($29)\n"
    "addiu      $16, $0, 0x1\n"
    "sd         $20, 0x40($29)\n"
    "daddu      $4, $0, $0\n"
    "sd         $19, 0x30($29)\n"
    "sd         $18, 0x20($29)\n"
    "sd         $31, 0x60($29)\n"
    "jal        _ipuSetMPEG1\n"
    "sw        $16, 0x848($17)\n"
    "daddu      $4, $17, $0\n"
    "jal        _nextBit\n"
    "addiu     $5, $0, 0x1C\n"
    "daddu      $18, $2, $0\n"
    "srl        $3, $18, 1\n"
    "srl        $2, $18, 17\n"
    "andi       $21, $3, 0xFFF\n"
    "andi       $2, $2, 0x3\n"
    "srl        $4, $18, 13\n"
    "srl        $3, $18, 15\n"
    "andi       $20, $4, 0x3\n"
    "andi       $19, $3, 0x3\n"
    "beq        $2, $16, .L0012C9AC\n"
    "sw        $2, 0x140($17)\n"
    "lui        $5, %hi(D_00153B00)\n"
    "daddu      $4, $17, $0\n"
    "jal        _Error\n"
    "addiu     $5, $5, %lo(D_00153B00)\n"
    ".L0012C9AC:\n"
    "srl        $2, $18, 19\n"
    "daddu      $4, $17, $0\n"
    "andi       $2, $2, 0x1\n"
    "addiu      $5, $0, 0x10\n"
    "sw         $2, 0x13C($17)\n"
    "jal        _nextBit\n"
    "srl       $16, $18, 20\n"
    "srl        $18, $2, 8\n"
    "addiu      $2, $0, 0x48\n"
    "beq        $16, $2, .L0012C9F4\n"
    "addiu     $2, $0, 0x58\n"
    "beq        $16, $2, .L0012C9F4\n"
    "addiu     $2, $0, 0x44\n"
    "beq        $16, $2, .L0012C9F4\n"
    "lui       $5, %hi(D_00153B28)\n"
    "daddu      $4, $17, $0\n"
    "jal        _Error\n"
    "addiu     $5, $5, %lo(D_00153B28)\n"
    ".L0012C9F4:\n"
    "lw         $4, 0x124($17)\n"
    "sll        $8, $21, 18\n"
    "lw         $3, 0x128($17)\n"
    "sll        $9, $18, 10\n"
    "lw         $6, 0x134($17)\n"
    "sll        $7, $19, 12\n"
    "lw         $2, 0x138($17)\n"
    "sll        $5, $20, 12\n"
    "andi       $4, $4, 0xFFF\n"
    "andi       $3, $3, 0xFFF\n"
    "or         $7, $7, $4\n"
    "or         $5, $5, $3\n"
    "addu       $6, $6, $8\n"
    "addu       $2, $2, $9\n"
    "sw         $2, 0x138($17)\n"
    "sw         $7, 0x124($17)\n"
    "sw         $5, 0x128($17)\n"
    "sw         $6, 0x134($17)\n"
    "ld         $31, 0x60($29)\n"
    "ld         $21, 0x50($29)\n"
    "ld         $20, 0x40($29)\n"
    "ld         $19, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x70\n"
    ".size _sequenceExtension, .-_sequenceExtension\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_sequence_extension_types.h"
#include "types.h"


extern u8 D_00153B00[];
extern u8 D_00153B28[];
extern s32 _Error();
extern s32 _ipuSetMPEG1();
extern s32 _nextBit();
void _sequenceExtension(struct M2c_arg0 *arg0) {
    s32 temp_2_23;
    u32 temp_16_41;
    u32 temp_18_42;
    u32 temp_2_17;

    arg0->unk848 = 1;
    _ipuSetMPEG1(0);
    temp_2_17 = _nextBit(arg0, 0x1C);
    temp_2_23 = (temp_2_17 >> 0x11) & 3;
    arg0->unk140 = temp_2_23;
    if (temp_2_23 != 1) {
        _Error(arg0, D_00153B00);
    }
    arg0->unk13C = (s32) ((temp_2_17 >> 0x13) & 1);
    temp_16_41 = temp_2_17 >> 0x14;
    temp_18_42 = _nextBit(arg0, 0x10) >> 8;
    if ((temp_16_41 != 0x48) && (temp_16_41 != 0x58) && (temp_16_41 != 0x44)) {
        _Error(arg0, D_00153B28);
    }
    arg0->unk138 = (s32) (arg0->unk138 + (temp_18_42 << 0xA));
    arg0->unk124 = (s32) ((((temp_2_17 >> 0xF) & 3) << 0xC) | (arg0->unk124 & 0xFFF));
    arg0->unk128 = (s32) ((((temp_2_17 >> 0xD) & 3) << 0xC) | (arg0->unk128 & 0xFFF));
    arg0->unk134 = (s32) (arg0->unk134 + (((temp_2_17 >> 1) & 0xFFF) << 0x12));
}
#endif /* NON_MATCHING */
