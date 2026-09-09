/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 90.0000%
 * blocker: Codex judged the logic correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl InitializeTransferCommand\n"
    ".type InitializeTransferCommand, @function\n"
    "InitializeTransferCommand:\n"
    "lui        $4, %hi(D_001D5BF0)\n"
    "addiu      $2, $0, 0x2D\n"
    "addiu      $3, $4, %lo(D_001D5BF0)\n"
    "sw         $2, %lo(D_001D5BF0)($4)\n"
    "addiu      $5, $0, 0x3\n"
    "sw         $0, 0x110($3)\n"
    "lui        $1, %hi(D_0015F604)\n"
    "sw         $5, %lo(D_0015F604)($1)\n"
    "sw         $0, 0xC($3)\n"
    "jr         $31\n"
    "sw        $0, 0x10($3)\n"
    ".size InitializeTransferCommand, .-InitializeTransferCommand\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_ee_initialize_transfer_command_types.h"
#include "types.h"


extern s32 D_0015F604;
extern struct M2c_D_001D5BF0 D_001D5BF0;
void InitializeTransferCommand(void) {
    D_001D5BF0.unkC = 0;
    D_001D5BF0.unk10 = 0;
    D_0015F604 = 3;
    D_001D5BF0.unk0 = 0x2D;
    D_001D5BF0.unk110 = 0;
}
#endif /* NON_MATCHING */
