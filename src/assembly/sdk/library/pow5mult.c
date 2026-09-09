/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 46.2188%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _pow5mult; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _pow5mult\n"
    ".type _pow5mult, @function\n"
    "_pow5mult:\n"
    "addiu      $29, $29, -0x50\n"
    "sd         $17, 0x10($29)\n"
    "sd         $19, 0x30($29)\n"
    "daddu      $17, $6, $0\n"
    "sd         $18, 0x20($29)\n"
    "daddu      $19, $4, $0\n"
    "sd         $31, 0x40($29)\n"
    "andi       $3, $17, 0x3\n"
    "sd         $16, 0x0($29)\n"
    "beqz       $3, .L00115AC0\n"
    "daddu     $18, $5, $0\n"
    "addiu      $3, $3, -0x1\n"
    "lui        $2, %hi(D_001523B8)\n"
    "addiu      $2, $2, %lo(D_001523B8)\n"
    "sll        $3, $3, 2\n"
    "addu       $3, $3, $2\n"
    "lw         $6, 0x0($3)\n"
    "jal        _multadd\n"
    "daddu     $7, $0, $0\n"
    "daddu      $18, $2, $0\n"
    ".L00115AC0:\n"
    "sra        $17, $17, 2\n"
    "beqz       $17, .L00115B54\n"
    "daddu     $2, $18, $0\n"
    "lw         $16, 0x48($19)\n"
    "bnez       $16, .L00115B20\n"
    "andi      $2, $17, 0x1\n"
    "daddu      $4, $19, $0\n"
    "jal        func_00115808\n"
    "addiu     $5, $0, 0x271\n"
    "daddu      $16, $2, $0\n"
    "sw         $2, 0x48($19)\n"
    "b          .L00115B1C\n"
    "sw        $0, 0x0($16)\n"
    "nop\n"
    ".L00115AF8:\n"
    "bnel       $2, $0, .L00115B1C\n"
    "daddu     $16, $2, $0\n"
    "daddu      $4, $19, $0\n"
    "daddu      $5, $16, $0\n"
    "jal        _multiply\n"
    "daddu     $6, $16, $0\n"
    "sw         $2, 0x0($16)\n"
    "sw         $0, 0x0($2)\n"
    "daddu      $16, $2, $0\n"
    ".L00115B1C:\n"
    "andi       $2, $17, 0x1\n"
    ".L00115B20:\n"
    "beqz       $2, .L00115B44\n"
    "daddu     $5, $18, $0\n"
    "daddu      $4, $19, $0\n"
    "jal        _multiply\n"
    "daddu     $6, $16, $0\n"
    "daddu      $5, $18, $0\n"
    "daddu      $4, $19, $0\n"
    "jal        InsertLinkObject\n"
    "daddu     $18, $2, $0\n"
    ".L00115B44:\n"
    "sra        $17, $17, 1\n"
    "bnel       $17, $0, .L00115AF8\n"
    "lw        $2, 0x0($16)\n"
    "daddu      $2, $18, $0\n"
    ".L00115B54:\n"
    "ld         $31, 0x40($29)\n"
    "ld         $19, 0x30($29)\n"
    "ld         $18, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x50\n"
    ".size _pow5mult, .-_pow5mult\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_library_pow5mult_types.h"
#include "types.h"


extern u8 D_001523B8[];
extern s32 InsertLinkObject();
extern s32 _multadd();
extern s32 _multiply();
extern s32 func_00115808();
s32 *_pow5mult(struct M2c_arg0 *arg0, s32 *arg1, s32 arg2) {
    s32 *temp_2_31;
    s32 *temp_5_56;
    s32 *var_16_27;
    s32 *var_18_13;
    s32 *var_2_26;
    s32 *var_2_43;
    s32 temp_3_10;
    s32 var_17_24;
    s32 var_2_29;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    temp_3_10 = arg2 & 3;
    var_18_13 = arg1;
    if (temp_3_10 == 0) {
        goto block_2;
    }
    var_18_13 = _multadd(*(((temp_3_10 - 1) * 4) + D_001523B8), 0);
block_2:
    var_17_24 = arg2 >> 2;
    var_2_26 = var_18_13;
    if (var_17_24 == 0) {
        goto block_16;
    }
    var_16_27 = arg0->unk48;
    var_2_29 = var_17_24 & 1;
    if (var_16_27 != NULL) {
        goto block_10;
    }
    temp_2_31 = func_00115808(arg0, 0x271);
    var_16_27 = temp_2_31;
    arg0->unk48 = temp_2_31;
    *var_16_27 = NULL;
    goto block_9;
block_6:
    if (var_2_43 != NULL) {
        goto block_8;
    }
    var_2_43 = _multiply(arg0, var_16_27, var_16_27);
    *var_16_27 = var_2_43;
    *var_2_43 = NULL;
block_8:
    var_16_27 = var_2_43;
block_9:
    var_2_29 = var_17_24 & 1;
block_10:
    if (var_2_29 == 0) {
        goto block_12;
    }
    temp_5_56 = var_18_13;
    var_18_13 = _multiply(arg0, var_18_13, var_16_27);
    InsertLinkObject(arg0, temp_5_56);
block_12:
    var_17_24 = var_17_24 >> 1;
    if (var_17_24 == 0) {
        goto block_14;
    }
    var_2_43 = *var_16_27;
    goto block_6;
block_14:
    var_2_26 = var_18_13;
block_16:
    return var_2_26;
}
#endif /* NON_MATCHING */
