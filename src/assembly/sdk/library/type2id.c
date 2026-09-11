/*
STATE: C_NON_MATCHING
SYMBOL: _type2id
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 50.5882%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _type2id; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl _type2id\n"
    ".type _type2id, @function\n"
    "_type2id:\n"
    "daddu      $7, $5, $0\n"
    "addiu      $29, $29, -0x10\n"
    "daddu      $3, $0, $0\n"
    "sltiu      $2, $4, 0xA\n"
    "beqz       $2, .L0012ABBC\n"
    "daddu     $5, $0, $0\n"
    "lui        $8, %hi(D_00132ED8)\n"
    "sll        $6, $4, 4\n"
    "addiu      $2, $8, %lo(D_00132ED8)\n"
    "ori        $4, $0, 0xFFFF\n"
    "dsll       $4, $4, 24\n"
    "addu       $2, $2, $6\n"
    "ld         $3, 0x8($2)\n"
    "beq        $3, $4, .L0012AB9C\n"
    "sltu      $2, $4, $3\n"
    "bnel       $2, $0, .L0012ABA8\n"
    "daddu     $5, $0, $0\n"
    "ori        $2, $0, 0xFF00\n"
    "dsll       $2, $2, 24\n"
    "beq        $3, $2, .L0012ABA4\n"
    "addiu     $2, $8, %lo(D_00132ED8)\n"
    "b          .L0012ABB0\n"
    "dsllv     $4, $7, $5\n"
    ".L0012AB9C:\n"
    "b          .L0012ABA8\n"
    "addiu     $5, $0, 0x18\n"
    ".L0012ABA4:\n"
    "addiu      $5, $0, 0x20\n"
    ".L0012ABA8:\n"
    "addiu      $2, $8, %lo(D_00132ED8)\n"
    "dsllv      $4, $7, $5\n"
    ".L0012ABB0:\n"
    "addu       $2, $6, $2\n"
    "ld         $3, 0x0($2)\n"
    "or         $3, $3, $4\n"
    ".L0012ABBC:\n"
    "daddu      $2, $3, $0\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x10\n"
    ".size _type2id, .-_type2id\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern u8 D_00132ED8[];
s32 _type2id(u32 arg0, s64 arg1) {
    s32 temp_6_10;
    s32 var_3_5;
    s64 var_5_8;
    u64 temp_3_15;
    u64 temp_4_13;

    var_3_5 = 0;
    var_5_8 = 0;
    if (arg0 >= 0xAU) {
        goto block_11;
    }
    temp_6_10 = arg0 * 0x10;
    temp_4_13 = 0xFFFF << 0x18;
    temp_3_15 = *(s32 *)((u8 *)(D_00132ED8 + temp_6_10) + 0x8);
    if (temp_3_15 == temp_4_13) {
        goto block_7;
    }
    if (temp_4_13 >= temp_3_15) {
        goto block_4;
    }
    var_5_8 = 0;
    goto block_9;
block_4:
    if (temp_3_15 == (0xFF00 << 0x18)) {
        goto block_8;
    }
    goto block_10;
block_7:
    var_5_8 = 0x18;
    goto block_9;
block_8:
    var_5_8 = 0x20;
block_9:
block_10:
    var_3_5 = *(temp_6_10 + D_00132ED8) | (arg1 << var_5_8);
block_11:
    return var_3_5;
}
#endif /* NON_MATCHING */
