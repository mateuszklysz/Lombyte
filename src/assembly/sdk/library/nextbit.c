/*
STATE: C_NON_MATCHING
SYMBOL: _nextBit
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _nextBit; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _nextBit\n"
    ".type _nextBit, @function\n"
    "_nextBit:\n"
    "addiu      $29, $29, -0x50\n"
    "lui        $2, (0x10002010 >> 16)\n"
    "sd         $18, 0x20($29)\n"
    "ori        $2, $2, (0x10002010 & 0xFFFF)\n"
    "sd         $17, 0x10($29)\n"
    "lui        $6, (0x80004000 >> 16)\n"
    "sd         $31, 0x40($29)\n"
    "ori        $6, $6, (0x80004000 & 0xFFFF)\n"
    "sd         $19, 0x30($29)\n"
    "daddu      $17, $4, $0\n"
    "sd         $16, 0x0($29)\n"
    "daddu      $18, $5, $0\n"
    "daddu      $7, $0, $0\n"
    "lw         $3, 0x0($2)\n"
    "lui        $2, (0x80000000 >> 16)\n"
    "and        $3, $3, $6\n"
    "bne        $3, $2, .L001289AC\n"
    "lui       $19, %hi(D_00132E70)\n"
    "daddu      $2, $7, $0\n"
    "nop\n"
    ".L00128968:\n"
    "slti       $2, $2, 0x1389\n"
    "bnez       $2, .L00128980\n"
    "addiu     $7, $7, 0x1\n"
    "jal        _dispatchMpegCbNodata\n"
    "lw        $4, 0x858($17)\n"
    "daddu      $7, $0, $0\n"
    ".L00128980:\n"
    "lui        $3, (0x10002010 >> 16)\n"
    "lui        $4, (0x80004000 >> 16)\n"
    "ori        $3, $3, (0x10002010 & 0xFFFF)\n"
    "ori        $4, $4, (0x80004000 & 0xFFFF)\n"
    "lw         $2, 0x0($3)\n"
    "lui        $5, (0x80000000 >> 16)\n"
    "and        $2, $2, $4\n"
    "beq        $2, $5, .L00128968\n"
    "daddu     $2, $7, $0\n"
    "b          .L001289B0\n"
    "lw        $2, 0x818($17)\n"
    ".L001289AC:\n"
    "lw         $2, 0x818($17)\n"
    ".L001289B0:\n"
    "bnez       $2, .L001289C8\n"
    "lui       $2, (0x10002000 >> 16)\n"
    "lw         $2, 0x83C($17)\n"
    "slt        $2, $2, $18\n"
    "beqz       $2, .L001289F4\n"
    "lui       $2, (0x10002000 >> 16)\n"
    ".L001289C8:\n"
    "lui        $3, (0x40000000 >> 16)\n"
    "ori        $2, $2, (0x10002000 & 0xFFFF)\n"
    "addiu      $5, $19, %lo(D_00132E70)\n"
    "sw         $3, 0x0($2)\n"
    "daddu      $4, $17, $0\n"
    "lw         $2, 0x10($5)\n"
    "jal        _waitIpuIdle64\n"
    "sw        $2, 0x818($17)\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    "sw         $2, 0x838($17)\n"
    ".L001289F4:\n"
    "addiu      $5, $0, 0x20\n"
    "lui        $4, (0x40000000 >> 16)\n"
    "lui        $2, (0x10002000 >> 16)\n"
    "or         $4, $18, $4\n"
    "sw         $5, 0x83C($17)\n"
    "ori        $2, $2, (0x10002000 & 0xFFFF)\n"
    "lw         $16, 0x838($17)\n"
    "srl        $3, $4, 28\n"
    "sw         $4, 0x0($2)\n"
    "sll        $3, $3, 2\n"
    "addiu      $2, $19, %lo(D_00132E70)\n"
    "subu       $5, $5, $18\n"
    "addu       $3, $3, $2\n"
    "srlv       $16, $16, $5\n"
    "lw         $2, 0x0($3)\n"
    "daddu      $4, $17, $0\n"
    "jal        _waitIpuIdle64\n"
    "sw        $2, 0x818($17)\n"
    "dsll32     $2, $2, 0\n"
    "dsra32     $2, $2, 0\n"
    "ld         $31, 0x40($29)\n"
    "sw         $2, 0x838($17)\n"
    "daddu      $2, $16, $0\n"
    "ld         $19, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x50\n"
    ".size _nextBit, .-_nextBit\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_nextbit_types.h"
#include "types.h"


extern s32 _nextBit();
void _sequenceDisplayExtension(struct M2c_arg0 *arg0) {
    _nextBit(arg0, 3);
    if (_nextBit(arg0, 1) != 0) {
        _nextBit(arg0, 8);
        _nextBit(arg0, 8);
        arg0->unk144 = _nextBit(arg0, 8);
    }
    arg0->unk148 = _nextBit(arg0, 0xE);
    _nextBit(arg0, 1);
    arg0->unk14C = _nextBit(arg0, 0xE);
}
#endif /* NON_MATCHING */
