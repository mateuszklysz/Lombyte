#include "types.h"
extern u8 D_0023D080[];
extern u8 D_0023D0A8[];
extern u8 D_0023D0E0[];
extern u8 D_0023D110[];
extern u8 D_0023D140[];
extern s32 sceMpegCreate();
extern s32 AddMpegCallback();
extern s32 func_0023BC48();
extern s32 func_0023CC30();
s32 FUN_0023cac8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    sceMpegCreate(arg0);
    AddMpegCallback(arg0, 0, D_0023D080, 0);
    AddMpegCallback(arg0, 1, D_0023D0A8, 0);
    AddMpegCallback(arg0, 2, D_0023D0E0, 0);
    AddMpegCallback(arg0, 3, D_0023D110, 0);
    AddMpegCallback(arg0, 5, D_0023D140, 0);
    func_0023CC30(arg0);
    func_0023BC48(arg0 + 0x48, arg3, arg4, arg5, arg6, arg7);
    return 1;
}
