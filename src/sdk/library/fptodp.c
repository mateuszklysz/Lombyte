#include "types.h"

typedef struct FloatParts {
    s32 category;
    s32 sign;
    s32 exponent;
    u32 mantissa;
} FloatParts;

extern void UnpackFloat(const f32 *input_value, FloatParts *parts)
    __asm__("__unpack_f");
extern u64 MakeDoublePacket(s32 category, s32 sign, s32 exponent,
                            u64 mantissa) __asm__("__make_dp");

u64 ConvertFloatToPackedDouble(f32 input_value) __asm__("fptodp");

u64 ConvertFloatToPackedDouble(f32 input_value)
{
    FloatParts parts;

    UnpackFloat(&input_value, &parts);
    return MakeDoublePacket(parts.category, parts.sign, parts.exponent,
                            ((u64)parts.mantissa << 32) >> 2);
}
