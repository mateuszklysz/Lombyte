#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x54];
    s32 unk54;
};

extern s32 FUN_00225cd8();
s32 FUN_00221a88(struct M2c_arg0 *arg0) {
    arg0->unk54 = FUN_00225cd8(arg0->unk54);
    return 0;
}
