#include "types.h"
extern s32 FUN_00201ba8();
extern s32 FUN_00201f88();
void refresh_point_light(s32 arg0) __asm__("FUN_00201f58");

void refresh_point_light(s32 arg0) {
    FUN_00201f88();
    FUN_00201ba8(arg0);
}
