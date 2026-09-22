#include "types.h"

extern s8 D_001330D8[];
extern u8 D_00153C00[];
extern u8 D_00153C10[];
extern u8 D_00153C28[];
extern s32 sceClose();
extern s32 sceOpen();
extern s32 scePrintf();
extern s32 sceRead();

s8 *GetRomName(void) {
    s32 file_descriptor;

    if (D_001330D8[0] == 0) {
        file_descriptor = sceOpen(D_00153C00, 1);
        if (file_descriptor == -1) {
            scePrintf(D_00153C10, D_001330D8);
        }
        if (sceRead(file_descriptor, D_001330D8, 0xE) == -1) {
            scePrintf(D_00153C28);
        }
        sceClose(file_descriptor);
    }
    return D_001330D8;
}
