/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 55.5294%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _mbAddressIncrement; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _mbAddressIncrement\n"
    ".type _mbAddressIncrement, @function\n"
    "_mbAddressIncrement:\n"
    "addiu      $29, $29, -0x90\n"
    "sd         $23, 0x70($29)\n"
    "sd         $22, 0x60($29)\n"
    "addiu      $23, $0, 0x1\n"
    "sd         $21, 0x50($29)\n"
    "addiu      $22, $0, 0x22\n"
    "sd         $20, 0x40($29)\n"
    "addiu      $21, $0, 0x23\n"
    "sd         $19, 0x30($29)\n"
    "lui        $20, %hi(D_001537A8)\n"
    "sd         $18, 0x20($29)\n"
    "addiu      $19, $0, 0xF\n"
    "sd         $17, 0x10($29)\n"
    "daddu      $18, $0, $0\n"
    "sd         $31, 0x80($29)\n"
    "daddu      $17, $4, $0\n"
    "sd         $16, 0x0($29)\n"
    "daddu      $4, $17, $0\n"
    ".L00127650:\n"
    "jal        _ipuVdec\n"
    "daddu     $5, $0, $0\n"
    "daddu      $16, $2, $0\n"
    "beq        $16, $22, .L001276BC\n"
    "sltiu     $2, $16, 0x23\n"
    "beqz       $2, .L0012767C\n"
    "nop\n"
    "beqz       $16, .L00127690\n"
    "daddu     $4, $17, $0\n"
    "b          .L001276DC\n"
    "addu      $18, $18, $16\n"
    ".L0012767C:\n"
    "bnel       $16, $21, .L001276DC\n"
    "addu      $18, $18, $16\n"
    "addiu      $2, $0, 0x1\n"
    "b          .L001276E0\n"
    "addiu     $18, $18, 0x21\n"
    ".L00127690:\n"
    "jal        _peepBit\n"
    "addiu     $5, $0, 0xB\n"
    "daddu      $3, $2, $0\n"
    "lw         $2, 0x848($17)\n"
    "beqz       $2, .L001276C4\n"
    "addiu     $5, $20, %lo(D_001537A8)\n"
    "bne        $3, $19, .L001276C8\n"
    "daddu     $6, $16, $0\n"
    "daddu      $4, $17, $0\n"
    "jal        _flushBuf\n"
    "addiu     $5, $0, 0xB\n"
    ".L001276BC:\n"
    "b          .L001276E0\n"
    "addiu     $2, $0, 0x1\n"
    ".L001276C4:\n"
    "daddu      $6, $16, $0\n"
    ".L001276C8:\n"
    "jal        _Error1\n"
    "daddu     $4, $17, $0\n"
    "sw         $23, 0x11C($17)\n"
    "b          .L001276EC\n"
    "addiu     $2, $0, 0x1\n"
    ".L001276DC:\n"
    "daddu      $2, $0, $0\n"
    ".L001276E0:\n"
    "bnez       $2, .L00127650\n"
    "daddu     $4, $17, $0\n"
    "daddu      $2, $18, $0\n"
    ".L001276EC:\n"
    "ld         $31, 0x80($29)\n"
    "ld         $23, 0x70($29)\n"
    "ld         $22, 0x60($29)\n"
    "ld         $21, 0x50($29)\n"
    "ld         $20, 0x40($29)\n"
    "ld         $19, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x90\n"
    ".size _mbAddressIncrement, .-_mbAddressIncrement\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_mb_address_increment_types.h"
#include "types.h"


extern u8 D_001537A8[];
extern s32 _Error1();
extern s32 _flushBuf();
extern s32 _ipuVdec();
extern s32 _peepBit();
s32 _mbAddressIncrement(struct M2c_arg0 *arg0) {
    s32 temp_3_42;
    s32 var_18_16;
    s32 var_2_36;
    u32 temp_2_22;

    var_18_16 = 0;
loop_1:
    temp_2_22 = _ipuVdec(arg0, 0);
    if (temp_2_22 == 0x22) {
        goto block_12;
    }
    if (temp_2_22 >= 0x23U) {
        goto block_5;
    }
    if (temp_2_22 == 0) {
        goto block_9;
    }
    var_18_16 += temp_2_22;
    goto block_15;
block_5:
    if (temp_2_22 == 0x23) {
        goto block_7;
    }
    var_18_16 += temp_2_22;
    goto block_15;
block_7:
    var_2_36 = 1;
    var_18_16 += 0x21;
    goto block_16;
block_9:
    temp_3_42 = _peepBit(arg0, 0xB);
    if (arg0->unk848 == 0) {
        goto block_13;
    }
    if (temp_3_42 != 0xF) {
        goto block_14;
    }
    _flushBuf(arg0, 0xB, temp_2_22);
block_12:
    var_2_36 = 1;
    goto block_16;
block_13:
block_14:
    _Error1(arg0, D_001537A8, temp_2_22);
    arg0->unk11C = 1;
    return 1;
block_15:
    var_2_36 = 0;
block_16:
    if (var_2_36 != 0) {
        goto loop_1;
    }
    return var_18_16;
}
#endif /* NON_MATCHING */
