#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _getAllRefs; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/_getAllRefs/_getAllRefs.s", _getAllRefs);
#else

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef volatile s8 vs8;
typedef volatile u8 vu8;
typedef volatile s16 vs16;
typedef volatile u16 vu16;
typedef volatile s32 vs32;
typedef volatile u32 vu32;
typedef volatile s64 vs64;
typedef volatile u64 vu64;
typedef float f32;
typedef double f64;
typedef s32 b32;
struct M2c_arg0
{
  u8 pad_0[0x120];
  s32 unk120;
  u8 pad_124[0x2C];
  s32 unk150;
  u8 pad_154[0x20];
  s32 unk174;
  u8 pad_178[0x40];
  s32 unk1B8;
  s32 unk1BC;
  u8 pad_1C0[0x8];
  s32 unk1C8;
  s32 unk1CC;
  u8 pad_1D0[0x8];
  s32 unk1D8;
  s32 unk1DC;
  u8 pad_1E0[0x630];
  s32 unk810;
};
struct M2c_arg5
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
  s32 unkC;
  s32 unk10;
  s32 unk14;
  s32 unk18;
  s32 unk1C;
};
struct M2c_arg6
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
  s32 unkC;
};
extern u8 D_00153710[];
extern u8 D_00153730[];
extern u8 D_00153750[];
extern s32 _Error1();
extern s32 _dualPrimeVector();
extern s32 _getRef0();
/* _getAllRefs: 8-argument SDK entry point.
 *
 * Reconstructed from the retail oracle (expected/asm/.../_getAllRefs.s):
 *   frame 0xF0, two 4-word stack arrays (sp20 = _dualPrimeVector out buffer at
 *   0x20, sp30 = the 4-entry select table at 0x30), arg3 spill slot at 0x40,
 *   12-argument _getRef0 (8 register + 4 stack) and 5-argument _dualPrimeVector.
 *
 * Retail semantics recovered from the delay-slot/branch structure:
 *   - the *(arg0 + unk810*0x140 + 0x6BC) reset runs whenever (arg3 & 8) == 0,
 *     independently of unk150; the big block runs when (arg3 & 8) || unk150==2;
 *   - flags/var_16 tracks "the main block ran" and is the 12th _getRef0 arg in
 *     the (arg3 & 4) block;
 *   - the (arg3 & 4) block tests arg4 == 1 then arg4 == 3 (NOT arg4 == 2);
 *   - the 3 _getRef0 tail sites merge onto one call block at .L00125C00.
 */
void _getAllRefs(struct M2c_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, struct M2c_arg5 *arg5, struct M2c_arg6 *arg6, s32 arg7)
{
  s32 sp20[4];
  s32 sp30[4];
  s32 sp40;
  s32 var_16;
  s32 isTwo;
  s32 f;
  s32 v;
  s32 f2;
  s32 f2b;

  var_16 = 0;
  if ((arg3 & 8) == 0)
  {
    *((s32 *)((u8 *)arg0 + (arg0->unk810 * 0x140) + 0x6BC)) = 0;
  }
  sp40 = arg3;
  if ((arg3 & 8) || (arg0->unk150 == 2))
  {
    if (arg0->unk174 == 3)
    {
      if ((arg4 == 2) || ((arg3 & 8) == 0))
      {
        _getRef0(arg0, arg0->unk1B8, 0, 0, 0, 0x10, arg1, arg2, arg5->unk0, arg5->unk4, 0, 0);
      }
      else if (arg4 == 1)
      {
        _getRef0(arg0, arg0->unk1B8, arg6->unk0, 0, 0, 8, arg1, arg2, arg5->unk0, arg5->unk4 >> 1, arg4, 0);
        _getRef0(arg0, arg0->unk1B8, arg6->unk8, 1, 0, 8, arg1, arg2, arg5->unk10, arg5->unk14 >> 1, arg4, 0);
      }
      else if (arg4 == arg0->unk174)
      {
        _dualPrimeVector(arg0, sp20, arg7, arg5->unk0, arg5->unk4 >> 1);
        _getRef0(arg0, arg0->unk1B8, 0, 0, 0, 8, arg1, arg2, arg5->unk0, arg5->unk4 >> 1, 1, 0);
        _getRef0(arg0, arg0->unk1B8, 1, 0, 0, 8, arg1, arg2, sp20[0], sp20[1], 1, 1);
        _getRef0(arg0, arg0->unk1B8, 1, 1, 0, 8, arg1, arg2, arg5->unk0, arg5->unk4 >> 1, 1, 0);
        _getRef0(arg0, arg0->unk1B8, 0, 1, 0, 8, arg1, arg2, sp20[2], sp20[3], 1, 1);
      }
      else
      {
        _Error1(arg0, D_00153710, arg4);
      }
    }
    else
    {
      isTwo = (arg0->unk174 == 2);
      sp30[0] = arg0->unk1C8;
      sp30[1] = arg0->unk1D8;
      sp30[2] = arg0->unk1CC;
      sp30[3] = arg0->unk1DC;
      f = 0;
      if ((arg0->unk150 == 2) && (arg0->unk120 != 0))
      {
        f = (isTwo != arg6->unk0);
      }
      if ((arg4 == 1) || ((arg3 & 8) == 0))
      {
        _getRef0(arg0, *(s32 *)((u8 *)sp30 + (arg6->unk0 * 4) + (f * 8)), 0, 0, 0, 0x10, arg1, arg2, arg5->unk0, arg5->unk4, 0, 0);
      }
      else if (arg4 == 2)
      {
        _getRef0(arg0, *(s32 *)((u8 *)sp30 + (arg6->unk0 * 4) + (f * 8)), 0, 0, 0, 8, arg1, arg2, arg5->unk0, arg5->unk4, 0, 0);
        f = 0;
        if ((arg0->unk150 == arg4) && (arg0->unk120 != 0))
        {
          f = 0;
          if ((isTwo ^ arg6->unk8) != 0)
          {
            f = 1;
          }
        }
        _getRef0(arg0, *(s32 *)((u8 *)sp30 + (arg6->unk8 * 4) + (f * 8)), 0, 0, 8, 8, arg1, arg2, arg5->unk10, arg5->unk14, 0, 0);
      }
      else if (arg4 == 3)
      {
        f = 0;
        if (arg0->unk120 != 0)
        {
          f = 1;
        }
        _dualPrimeVector(arg0, sp20, arg7, arg5->unk0, arg5->unk4);
        _getRef0(arg0, sp30[isTwo], 0, 0, 0, 0x10, arg1, arg2, arg5->unk0, arg5->unk4, 0, 0);
        f2 = f * 2;
        f2b = f2 + 1;
        if (isTwo)
        {
          f2b = f2;
        }
        _getRef0(arg0, sp30[f2b], 0, 0, 0, 0x10, arg1, arg2, sp20[0], sp20[1], 0, 1);
      }
      else
      {
        _Error1(arg0, D_00153730, arg4);
      }
    }
    var_16 = 1;
  }
  if (sp40 & 4)
  {
    if (arg0->unk174 == 3)
    {
      if (arg4 == 2)
      {
        _getRef0(arg0, arg0->unk1BC, 0, 0, 0, 0x10, arg1, arg2, arg5->unk8, arg5->unkC, 0, var_16);
      }
      else
      {
        _getRef0(arg0, arg0->unk1BC, arg6->unk4, 0, 0, 8, arg1, arg2, arg5->unk8, arg5->unkC >> 1, 1, var_16);
        _getRef0(arg0, arg0->unk1BC, arg6->unkC, 1, 0, 8, arg1, arg2, arg5->unk18, arg5->unk1C >> 1, 1, var_16);
      }
    }
    else if (arg4 == 1)
    {
      v = arg6->unk4 ? arg0->unk1DC : arg0->unk1CC;
      _getRef0(arg0, v, 0, 0, 0, 0x10, arg1, arg2, arg5->unk8, arg5->unkC, 0, var_16);
    }
    else if (arg4 == 3)
    {
      v = arg6->unk4 ? arg0->unk1DC : arg0->unk1CC;
      _getRef0(arg0, v, 0, 0, 0, 8, arg1, arg2, arg5->unk8, arg5->unkC, 0, var_16);
      v = arg6->unkC ? arg0->unk1DC : arg0->unk1CC;
      _getRef0(arg0, v, 0, 0, 8, 8, arg1, arg2, arg5->unk18, arg5->unk1C, 0, var_16);
    }
    else
    {
      _Error1(arg0, D_00153750, arg4);
    }
  }
}
#endif /* NON_MATCHING */
