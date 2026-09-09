/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 26.7000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012ed30/FUN_0012ed30.s", FUN_0012ed30);
#else
#include "types.h"
extern s32 func_0012E548();
void FUN_0012ed30(s32 arg0) {
u8 sp_slot[0x20];    func_0012E548(0x36, 4, sp_slot, arg0);
}
#endif /* NON_MATCHING */
