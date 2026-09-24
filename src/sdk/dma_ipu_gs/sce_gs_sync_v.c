#include "types.h"
typedef struct {
    s16 sceGsInterMode;
    s16 sceGsOutMode;
    s16 sceGsFFMode;
    s16 sceGsVersion;
    volatile s32 (*sceGsVSCfunc)(s32);
    s32 sceGsVSCid;
} sceGsGParam;

extern sceGsGParam *GetCoreDataTable(void);
extern s32 VSync(void);
extern s64 VSync2(void);

s32 sceGsSyncV(s32 mode) {
    sceGsGParam *gp;
    s64 field;

    gp = GetCoreDataTable();
    if (gp->sceGsVSCfunc == 0) {
        VSync();
        if (gp->sceGsInterMode == 1) {
            return (*(volatile u64 *)0x12001000 >> 13) & 1;
        }
    } else {
        field = (VSync2() >> 13) & 1;
        if (gp->sceGsInterMode == 1) {
            return field;
        }
    }
    return 1;
}
