#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _setDefaultQM; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/setdefaultqm/_setDefaultQM.s", _setDefaultQM);
#else
#include "types.h"

struct M2c_arg0 {
    u8 pad_0[0x858];
    void *cbData;
};

extern s32 DIntr();
extern void EnableInterrupts();
extern void _dispatchMpegCallback();
extern void _sendIpuCommand();
extern void _waitIpuIdle();

typedef struct {
    s32 type;
    u8 pad[0x1C];
} MpegCbArg;

void _setDefaultQM(struct M2c_arg0 *arg0, s32 arg1, s32 arg2) {
    s32 intr;
    MpegCbArg cb;

    cb.type = 2;
    _dispatchMpegCallback(arg0->cbData, &cb);
    _waitIpuIdle(arg0);
    *(volatile s32 *)0x10002000 = 0;
    _waitIpuIdle(arg0);
    intr = DIntr();
    *(volatile s32 *)0x1000B410 = arg2 & 0x0FFFFFFF;
    *(volatile s32 *)0x1000B420 = 4;
    *(volatile s32 *)0x1000B400 = 0x101;
    if (intr != 0) {
        EnableInterrupts();
    }
    _sendIpuCommand(arg0, arg1);
    _waitIpuIdle(arg0);
    cb.type = 3;
    _dispatchMpegCallback(arg0->cbData, &cb);
}
#endif /* NON_MATCHING */
