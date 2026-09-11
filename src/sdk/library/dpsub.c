/*
STATE: C_EXACT
SYMBOL: dpsub
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern s32 __pack_d();
extern s32 __unpack_d();
extern s32 _fpadd_parts();
struct M2c_DpsubWork {
    u8 pad_0[0x20];
    s32 unk20;
    s32 unk24;
    u8 pad_28[0x18];
    s32 unk40;
    u8 pad_44[0x1C];
    s64 unk60;
    s64 unk68;
};
void dpsub(s64 arg0, s64 arg1) {
    struct M2c_DpsubWork work;

    work.unk60 = arg0;
    work.unk68 = arg1;
    __unpack_d(&work.unk60, &work);
    __unpack_d(&work.unk68, &work.unk20);
    work.unk24 ^= 1;
    __pack_d(_fpadd_parts(&work, &work.unk20, &work.unk40));
}
