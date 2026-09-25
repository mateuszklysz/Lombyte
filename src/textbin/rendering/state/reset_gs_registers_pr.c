#include "types.h"
#define GS_REG(a) (*(volatile u64 *)(a))
extern u64 D_00151788[3];
void FUN_001f3958(void) {
    GS_REG(0x120000E0) = 0;
    GS_REG(0x12000000) = 0xFFA1;
    GS_REG(0x12000020) = D_00151788[0];
    GS_REG(0x12000070) = D_00151788[1];
    GS_REG(0x12000090) = D_00151788[1];
    GS_REG(0x12000080) = D_00151788[2];
    GS_REG(0x120000A0) = D_00151788[2];
    GS_REG(0x120000D0) = 0;
}

extern __typeof__(FUN_001f3958) func_001F3958 __attribute__((alias("FUN_001f3958")));
