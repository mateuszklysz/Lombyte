#include "types.h"

extern u32 D_0012FC04[];
extern u32 D_00154E54[];
extern s32 RemoveDmacHandler();
extern s32 func_001190F8();

void sceSifExitCmd(void)
{
    func_001190F8(5);
    RemoveDmacHandler(5, D_00154E54[0]);
    D_0012FC04[0] = 0;
}
