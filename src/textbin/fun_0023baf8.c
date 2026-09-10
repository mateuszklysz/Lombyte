/* ROLE: recovered function `getFIFOindex__FP5ViBufPv` starts here; this unit covers only its beginning. */
#include "types.h"
struct M2c_arg0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

u32 FUN_0023baf8(struct M2c_arg0 *arg0, s32 arg1) {
    if (arg1 != (((arg0->unk8 * 0x10) + arg0->unk4 + 0x10) & 0x0FFFFFFF)) {
        return (u32) (arg1 - arg0->unk0) >> 0xB;
    }
    return 0U;
}
