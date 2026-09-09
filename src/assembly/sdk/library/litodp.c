/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 47.0652%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit litodp; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl litodp\n"
    ".type litodp, @function\n"
    "litodp:\n"
    "addiu      $29, $29, -0x30\n"
    "addiu      $2, $0, 0x3\n"
    "srl        $3, $4, 31\n"
    "sd         $31, 0x20($29)\n"
    "sw         $2, 0x0($29)\n"
    "bnez       $4, .L001201A8\n"
    "sw        $3, 0x4($29)\n"
    "addiu      $2, $0, 0x2\n"
    "b          .L00120224\n"
    "sw        $2, 0x0($29)\n"
    ".L001201A8:\n"
    "addiu      $2, $0, 0x3C\n"
    "beqz       $3, .L001201D8\n"
    "sw        $2, 0x8($29)\n"
    "lui        $2, (0x80000000 >> 16)\n"
    "bne        $4, $2, .L001201D0\n"
    "negu      $2, $4\n"
    "ori        $2, $0, 0xC1E0\n"
    "dsll32     $2, $2, 16\n"
    "b          .L00120230\n"
    "ld        $31, 0x20($29)\n"
    ".L001201D0:\n"
    "b          .L001201DC\n"
    "sd        $2, 0x10($29)\n"
    ".L001201D8:\n"
    "sd         $4, 0x10($29)\n"
    ".L001201DC:\n"
    "ld         $5, 0x10($29)\n"
    "addiu      $2, $0, -0x1\n"
    "dsrl       $2, $2, 4\n"
    "sltu       $2, $2, $5\n"
    "bnez       $2, .L00120224\n"
    "lw        $4, 0x8($29)\n"
    "addiu      $6, $0, -0x1\n"
    "dsrl       $6, $6, 4\n"
    "nop\n"
    ".L00120200:\n"
    "dsll       $3, $5, 1\n"
    "addiu      $4, $4, -0x1\n"
    "daddu      $5, $3, $0\n"
    "sltu       $2, $6, $3\n"
    "nop\n"
    "beqz       $2, .L00120200\n"
    "nop\n"
    "sw         $4, 0x8($29)\n"
    "sd         $3, 0x10($29)\n"
    ".L00120224:\n"
    "jal        __pack_d\n"
    "daddu     $4, $29, $0\n"
    "ld         $31, 0x20($29)\n"
    ".L00120230:\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x30\n"
    ".size litodp, .-litodp\n"
    ".set reorder\n"
);
#else
#include "types.h"
extern s32 __pack_d();
s64 litodp(u64 arg0, u64 arg1, u64 arg2) {
u8 sp_slot[0x30];    s32 sp8;
    s64 sp10;                                       /* compiler-managed */
    s32 var_4_35;
    u64 temp_3_40;
    u64 var_5_0;
    u64 var_6_0;

    var_5_0 = arg1;
    var_6_0 = arg2;
    if (arg0 == 0) {
        goto block_11;
    }
    sp8 = 0x3C;
    if ((arg0 >> 0x1F) != 0) {
        if (arg0 == 0x80000000) {
            return 0xC1E0 << 0x30;
        }
        sp10 = -(s64) arg0;
        goto block_7;
    }
    sp10 = arg0;
block_7:
    var_5_0 = sp10;
    var_4_35 = sp8;
    if ((u64) (-1U >> 4) >= var_5_0) {
        var_6_0 = -1U >> 4;
        do {
            temp_3_40 = var_5_0 * 2;
            var_4_35 -= 1;
            var_5_0 = temp_3_40;
        } while (var_6_0 >= temp_3_40);
        sp8 = var_4_35;
        sp10 = temp_3_40;
    }
block_11:
    return __pack_d(sp_slot, var_5_0, var_6_0);
}
#endif /* NON_MATCHING */
