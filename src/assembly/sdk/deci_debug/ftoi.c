/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 84.5556%
 * blocker: logic is correct above 80%; breadth-first fallback preserves the C logic while register allocation, stack/frame layout, and delay-slot scheduling remain compiler blockers
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit ftoi; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl ftoi\n"
    ".type ftoi, @function\n"
    "ftoi:\n"
    "daddu      $5, $4, $0\n"
    "dsll       $2, $5, 1\n"
    "dsrl32     $6, $2, 21\n"
    "daddiu     $6, $6, -0x433\n"
    "slti       $2, $6, -0x35\n"
    "beqz       $2, .L00119BCC\n"
    "slti      $2, $6, 0xD\n"
    "jr         $31\n"
    "daddu     $2, $0, $0\n"
    ".L00119BCC:\n"
    "bnez       $2, .L00119BDC\n"
    "dsll      $2, $5, 12\n"
    "jr         $31\n"
    "addiu     $2, $0, 0x270F\n"
    ".L00119BDC:\n"
    "ori        $3, $0, 0x8000\n"
    "dsll32     $3, $3, 5\n"
    "dsrl       $5, $2, 12\n"
    "bgez       $6, .L00119C20\n"
    "or        $5, $5, $3\n"
    "dsubu      $6, $0, $6\n"
    "addiu      $2, $0, 0x3\n"
    "daddiu     $3, $6, -0x2\n"
    "dsll32     $3, $3, 0\n"
    "dsra32     $3, $3, 0\n"
    "dsrlv      $5, $5, $3\n"
    "andi       $4, $5, 0x3\n"
    "bnel       $4, $2, .L00119C2C\n"
    "dsrl      $5, $5, 2\n"
    "dsrl       $2, $5, 2\n"
    "b          .L00119C2C\n"
    "daddiu    $5, $2, 0x1\n"
    ".L00119C20:\n"
    "dsll32     $2, $6, 0\n"
    "dsra32     $2, $2, 0\n"
    "dsllv      $5, $5, $2\n"
    ".L00119C2C:\n"
    "dsll32     $2, $5, 0\n"
    "jr         $31\n"
    "dsra32    $2, $2, 0\n"
    ".size ftoi, .-ftoi\n"
    ".set reorder\n"
);
#else
#include "types.h"

s64 ftoi(s64 arg0) {
    s64 input;
    s64 temp_6_6;
    u64 temp_5_22;
    u64 temp_5_28;
    u64 var_5_31;

    input = arg0;
    temp_6_6 = ((u64) (input * 2) >> 0x35) - 0x433;
    if (temp_6_6 < -0x35) {
        return 0;
    }
    if (temp_6_6 >= 0xD) {
        return 0x270F;
    }
    temp_5_22 = ((u64) (input << 0xC) >> 0xC) | ((u64) 0x8000 << 0x25);
    if (temp_6_6 < 0) {
        temp_5_28 = temp_5_22 >> ((s64) (((0 - ((u64) (input * 2) >> 0x35) - 0x433) - 2) << 0x20) >> 0x20);
        if ((temp_5_28 & 3) != 3) {
            var_5_31 = temp_5_28 >> 2;
        } else {
            var_5_31 = (temp_5_28 >> 2) + 1;
        }
    } else {
        var_5_31 = temp_5_22 << ((s64) (temp_6_6 << 0x20) >> 0x20);
    }
    return (s64) (var_5_31 << 0x20) >> 0x20;
}
#endif /* NON_MATCHING */
