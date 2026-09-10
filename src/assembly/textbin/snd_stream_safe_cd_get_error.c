/* ROLE: recovered whole function `snd_StreamSafeCdGetError` (snd989). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 72.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/snd_stream_safe_cd_get_error/FUN_0012eef0.s", FUN_0012eef0);
#else
#include "rnc/assembly_textbin_fun_0012eef0_types.h"
#include "types.h"


extern struct M2c_D_00137B00 D_00137B00;
extern s32 D_0015EC8C;
extern s32 func_00121630();
s32 FUN_0012eef0(s32 arg0) {
    if (D_0015EC8C != 0) {
        return D_00137B00.unk10;
    }
    return func_00121630();
}
#endif /* NON_MATCHING */
