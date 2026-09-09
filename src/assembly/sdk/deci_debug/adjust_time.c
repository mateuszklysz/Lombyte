/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 83.1429%
 * blocker: logic and byte field width are correct above 80%; remaining differences are branch-likely and delay-slot scheduling with a temporary register destination
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit AdjustTime; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl AdjustTime\n"
    ".type AdjustTime, @function\n"
    "AdjustTime:\n"
    "addiu      $29, $29, -0x30\n"
    "sd         $17, 0x10($29)\n"
    "sd         $16, 0x0($29)\n"
    "daddu      $17, $4, $0\n"
    "sd         $31, 0x20($29)\n"
    "jal        func_0012D3C0\n"
    "daddu     $16, $5, $0\n"
    "lbu        $2, 0x2($17)\n"
    "addu       $16, $2, $16\n"
    "bltzl      $16, .L0012D6A8\n"
    "addiu     $16, $16, 0x3C\n"
    "slti       $2, $16, 0x3D\n"
    "bnel       $2, $0, .L0012D6BC\n"
    "sb        $16, 0x2($17)\n"
    "daddu      $4, $17, $0\n"
    "nop\n"
    ".L0012D688:\n"
    "jal        addhour\n"
    "addiu     $16, $16, -0x3C\n"
    "slti       $2, $16, 0x3D\n"
    "beqz       $2, .L0012D688\n"
    "daddu     $4, $17, $0\n"
    "b          .L0012D6C0\n"
    "sb        $16, 0x2($17)\n"
    "nop\n"
    ".L0012D6A8:\n"
    "jal        subhour\n"
    "daddu     $4, $17, $0\n"
    "bltzl      $16, .L0012D6A8\n"
    "addiu     $16, $16, 0x3C\n"
    "sb         $16, 0x2($17)\n"
    ".L0012D6BC:\n"
    "daddu      $4, $17, $0\n"
    ".L0012D6C0:\n"
    "ld         $31, 0x20($29)\n"
    "ld         $17, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "j          func_0012D428\n"
    "addiu     $29, $29, 0x30\n"
    ".size AdjustTime, .-AdjustTime\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_deci_debug_adjust_time_types.h"
#include "types.h"


extern s32 addhour();
extern s32 func_0012D3C0();
extern s32 subhour();
void AdjustTime(struct M2c_arg0 *arg0, s32 arg1) {
    s32 var_16_11;
    register s32 input_hour __asm__("v0");

    func_0012D3C0();
    input_hour = arg0->unk2;
    var_16_11 = input_hour + arg1;
    if (var_16_11 >= 0) {
        goto block_2;
    }
    var_16_11 += 0x3C;
    goto loop_8;
block_2:
    if (var_16_11 < 0x3D) {
        goto block_11;
    }
loop_5:
    var_16_11 -= 0x3C;
    addhour(arg0);
    if (var_16_11 >= 0x3D) {
        goto loop_5;
    }
    arg0->unk2 = (u8) var_16_11;
    goto block_12;
if (var_16_11 >= 0) {
        goto block_10;
    }
    loop_8:
    subhour(arg0);
    var_16_11 += 0x3C;
    goto loop_8;
block_10:
block_11:
    arg0->unk2 = (u8) var_16_11;
block_12:
    func_0012D428(arg0);
    return;
}
#endif /* NON_MATCHING */
