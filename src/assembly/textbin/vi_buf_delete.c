/* ROLE: recovered whole function `viBufDelete__FP5ViBuf`. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 70.9091%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/vi_buf_delete/FUN_0023c5b8.s", FUN_0023c5b8);
#else
#include "rnc/assembly_textbin_fun_0023c5b8_types.h"
#include "types.h"


extern s32 func_00118980();
extern s32 func_0023BBB0();
s32 FUN_0023c5b8(struct M2c_arg0 *arg0) {
    func_0023BBB0(5);
    *(s32 *)0x1000B420 = 0;
    *(s32 *)0x1000B410 = 0;
    *(s32 *)0x1000B430 = 0;
    func_00118980(arg0->unk40);
    return 1;
}
#endif /* NON_MATCHING */
