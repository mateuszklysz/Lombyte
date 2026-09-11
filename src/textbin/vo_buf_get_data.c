/*
STATE: C_EXACT
SYMBOL: voBufGetData__FP5VoBuf
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered whole function `voBufGetData__FP5VoBuf`. */

#include "types.h"
struct M2c_arg0 {
    s32 unk0;
    u8 pad_4[0x4];
    s32 unk8;
};

extern s32 FUN_0023d1f8();
s32 FUN_0023d288(struct M2c_arg0 *arg0) {
    if (FUN_0023d1f8() != 0) {
        return 0;
    }
    return arg0->unk0 + (arg0->unk8 * 0xD0000);
}

/* Recovered original symbol name. */
extern __typeof__(FUN_0023d288) voBufGetData__FP5VoBuf __attribute__((alias("FUN_0023d288")));
