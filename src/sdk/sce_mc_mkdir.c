/*
STATE: C_EXACT
SYMBOL: sceMcMkdir
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

typedef signed int s32;

extern s32 sceMcOpen(s32 port, s32 slot, const char *name, s32 flags);
extern s32 D_00132DA8 __attribute__((section(".data")));

s32 sceMcMkdir(s32 port, s32 slot, const char *name) {
    s32 result = sceMcOpen(port, slot, name, 0x40);

    if (result == 0) {
        D_00132DA8 = 0xB;
    }
    return result;
}
