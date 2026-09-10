/* ROLE: recovered function `voBufGetTag__FP5VoBuf` (movie/vobuf.cpp, 0x68 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 99.5200%
 * blocker: The SN branch is an order-only near-match: the two independent field loads are emitted in the opposite order, while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023d2d8/FUN_0023d2d8.s", FUN_0023d2d8);
#else
#include "rnc/assembly_textbin_fun_0023d2d8_types.h"
#include "types.h"


extern s32 func_0023D2C8();
s32 FUN_0023d2d8(struct M2c_arg0 *arg0) {
    s32 temp_3_16;

    if (func_0023D2C8() != 0) {
        return 0;
    }
    temp_3_16 = arg0->unk10;
    return arg0->unk4 + (((s32) ((arg0->unk8 - arg0->unkC) + temp_3_16) % temp_3_16) * 0x138C0);
}
#endif /* NON_MATCHING */
