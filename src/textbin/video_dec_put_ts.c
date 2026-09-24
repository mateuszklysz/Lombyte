#include "types.h"
struct TsEntry { s64 pts; s64 dts; s32 pos; s32 len; };
struct VideoDec { u8 pad0[0x48]; s32 base; };
extern s32 D_0016120C;
extern void func_0023C810(s32, struct TsEntry *);
void FUN_0023cc98(struct VideoDec *vd, s64 pts, s64 dts, s32 pos, s32 len) {
    struct TsEntry ts;

    ts.pts = pts;
    ts.dts = dts;
    ts.pos = pos - vd->base;
    ts.len = len;
    func_0023C810(D_0016120C + 0xD9090, &ts);
}

extern __typeof__(FUN_0023cc98) func_0023CC98 __attribute__((alias("FUN_0023cc98")));
