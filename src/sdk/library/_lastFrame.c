/*
STATE: C_EXACT
SYMBOL: _lastFrame
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: cc_ee_gcc_patched v3 -O2 -g2 -mastra-sd-saves -mastra-cse-argdup -mastra-call-args-reverse -fno-expensive-optimizations -fno-schedule-insns
DECISION: promoted
BLOCKER: none
*/

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
struct M2c_arg0
{
  u8 pad_0[0x118];
  s32 unk118;
  u8 pad_11C[0x4];
  s32 unk120;
  u8 pad_124[0x50];
  s32 unk174;
  u8 pad_178[0x44];
  s32 unk1BC;
  u8 pad_1C0[0xC];
  s32 unk1CC;
  s32 unk1D0;
  s32 unk1D4;
  s32 unk1D8;
  s32 unk1DC;
};
extern u8 D_00153AB8[];
extern s32 _Error();
extern s32 _dispRefImage();
extern s32 _dispRefImageField();
void _lastFrame(struct M2c_arg0 *arg0)
{
  register s32 count asm("a2");
  s32 next;
  count = arg0->unk118;
  if (arg0->unk120 != 0)
  {
    _Error(arg0, D_00153AB8, count);
  }
  else
  {
    next = count - 1;
    if (arg0->unk174 == 3)
    {
      _dispRefImage(arg0, arg0->unk1BC, count - 1, count - 1);
    }
    else
    {
      _dispRefImageField(arg0, arg0->unk1CC, arg0->unk1DC, count - 1);
    }
  }
  arg0->unk120 = 0;
}
