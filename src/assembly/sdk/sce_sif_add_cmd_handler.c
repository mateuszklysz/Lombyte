/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 52.0909%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library leaf sceSifAddCmdHandler; target words retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl sceSifAddCmdHandler\n"
    ".type sceSifAddCmdHandler, @function\n"
    "sceSifAddCmdHandler:\n"
    "bgez       $4, .L0011A74C\n"
    "sll       $3, $4, 3\n"
    "lui        $2, %hi(D_00154E64)\n"
    "b          .L0011A754\n"
    "lw        $4, %lo(D_00154E64)($2)\n"
    ".L0011A74C:\n"
    "lui        $2, %hi(D_00154E6C)\n"
    "lw         $4, %lo(D_00154E6C)($2)\n"
    ".L0011A754:\n"
    "addu       $3, $3, $4\n"
    "sw         $6, 0x4($3)\n"
    "jr         $31\n"
    "sw        $5, 0x0($3)\n"
    ".size sceSifAddCmdHandler, .-sceSifAddCmdHandler\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_sce_sif_add_cmd_handler_types.h"
#include "types.h"


extern u8 D_00154E64[];
extern u8 D_00154E6C[];
void sceSifAddCmdHandler(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_4_7;
    struct M2c_temp_3_12 *temp_3_12;

    if (arg0 < 0) {
        var_4_7 = D_00154E64[0];
    } else {
        var_4_7 = D_00154E6C[0];
    }
    temp_3_12 = (arg0 * 8) + var_4_7;
    temp_3_12->unk4 = arg2;
    temp_3_12->unk0 = arg1;
}
#endif /* NON_MATCHING */
