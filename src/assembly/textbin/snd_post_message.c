/* ROLE: recovered whole function `snd_PostMessage` (snd989). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 50.2143%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/snd_post_message/FUN_0012e9a0.s", FUN_0012e9a0);
#else
#include "types.h"
extern u8 D_0015ECA0[];
extern s32 D_0015ECC0;
extern s32 func_0012DC80();
void FUN_0012e9a0(void) {
    s32 *temp_4_11;

    temp_4_11 = *((D_0015ECC0 * 4) + D_0015ECA0);
    *temp_4_11 += 1;
    func_0012DC80(temp_4_11);
}
#endif /* NON_MATCHING */
