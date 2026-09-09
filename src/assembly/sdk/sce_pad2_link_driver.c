/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 89.2857%
 * blocker: Codex judged the logic correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit scePad2LinkDriver; symbolic expected assembly retained pending source recovery. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl scePad2LinkDriver\n"
    ".type scePad2LinkDriver, @function\n"
    "scePad2LinkDriver:\n"
    "addiu      $29, $29, -0x20\n"
    "sd         $16, 0x0($29)\n"
    "sd         $31, 0x10($29)\n"
    "jal        func_001247E0\n"
    "daddu     $16, $4, $0\n"
    "daddu      $7, $2, $0\n"
    "bltz       $7, .L00124F24\n"
    "addiu     $4, $0, 0x330\n"
    "lui        $3, %hi(D_0015B540)\n"
    "mult       $4, $16, $4\n"
    "addiu      $3, $3, %lo(D_0015B540)\n"
    "addiu      $6, $0, 0x1\n"
    "daddu      $2, $7, $0\n"
    "addu       $5, $3, $4\n"
    "daddu      $3, $5, $0\n"
    "sw         $7, 0x8($5)\n"
    "sw         $6, 0x4($3)\n"
    ".L00124F24:\n"
    "ld         $31, 0x10($29)\n"
    "ld         $16, 0x0($29)\n"
    "jr         $31\n"
    "addiu     $29, $29, 0x20\n"
    ".size scePad2LinkDriver, .-scePad2LinkDriver\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_sdk_sce_pad2_link_driver_types.h"
#include "types.h"


extern u8 D_0015B540[];
extern s32 sceDbcGetDepNumber();
s32 scePad2LinkDriver(s32 arg0) {
    register s32 temp_2_6 __asm__("a3");
    register s32 stride __asm__("a0");
    register s32 one __asm__("a2");
    register u8 *base __asm__("v1");
    register volatile struct M2c_temp_5_16 *temp_5_16 __asm__("a1");

    temp_2_6 = sceDbcGetDepNumber();
    if (temp_2_6 >= 0) {
        stride = 0x330;
        base = D_0015B540;
        temp_5_16 = base + (arg0 * stride);
        temp_5_16->unk8 = temp_2_6;
        one = 1;
        temp_5_16->unk4 = one;
    }
    return temp_2_6;
}
#endif /* NON_MATCHING */
