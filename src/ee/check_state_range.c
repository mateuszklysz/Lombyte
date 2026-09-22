#include "types.h"
extern s64 CallGlobalStateResource(s32 resource, s32 first, s32 second);
s64 CheckStateRange(s32 arg0) {
    return (s64)(s32)(CallGlobalStateResource(arg0, 0, 0xA) << 32 >> 32);
}
