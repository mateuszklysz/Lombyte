/*
STATE: C_NON_MATCHING
SYMBOL: viBufStopDMA__FP5ViBuf
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `viBufStopDMA__FP5ViBuf`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/vi_buf_stop_dma/FUN_0023c170.s", FUN_0023c170);
#else
#include "rnc/assembly_textbin_fun_0023c170_types.h"
#include "types.h"


extern s32 func_00118990();
extern s32 func_001189B0();
extern s32 func_0023BB40();
extern s32 func_0023BBB0();
s32 FUN_0023c170(struct M2c_arg0 *arg0) {
    volatile u32 *m2c_mmio = (volatile u32 *)0x10002010;
    func_001189B0(arg0->unk40);
    arg0->unk44 = 0;
    func_0023BBB0(5);
    arg0->unk1C = (s32) *(s32 *)0x1000B410;
    arg0->unk20 = (s32) *(s32 *)0x1000B430;
    arg0->unk24 = (s32) *(s32 *)0x1000B420;
    arg0->unk28 = (s32) *(s32 *)0x1000B400;
    if (*m2c_mmio & 0xF0) {
        do {

        } while (*m2c_mmio & 0xF0);
    }
    func_0023BB40(0, 0x1000B420, 0x1000B400, 0x1000B430);
    arg0->unk2C = (s32) *(s32 *)0x1000B010;
    arg0->unk30 = (s32) *(s32 *)0x1000B020;
    arg0->unk34 = (s32) *(s32 *)0x1000B000;
    arg0->unk38 = (s32) *(s32 *)0x10002020;
    arg0->unk3C = (s32) *m2c_mmio;
    func_00118990(arg0->unk40, 0x10002010, 0x1000B000, 0x10002020, 0x1000B020);
    return 1;
}
#endif /* NON_MATCHING */
