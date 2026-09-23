#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002269c0/FUN_002269c0.s", FUN_002269c0);
#else
#include "types.h"
struct M2c_D_0013D290
{
  u8 pad_0[0x14];
  s32 unk14;
  u8 pad_18[0xA8];
  s32 unkC0;
  u8 pad_C4[0x18];
  s32 unkDC;
  s32 unkE0;
  u8 pad_E4[0x8];
  s32 unkEC;
  u8 pad_F0[0x4];
  s32 unkF4;
};
extern struct M2c_D_0013D290 D_0013D290;
extern u8 D_00141EC0[];
extern s32 D_0015ED84;
extern u8 D_0015EE98[];
extern void func_00207B08();
extern void func_00208770();
extern void func_0020ABB0();
extern void sceCdReadClock();
extern void sceScfGetLocalTimefromRTC();
void FUN_002269c0(s32 arg0, s32 arg1)
{
  volatile unsigned char new_var2;
  s32 *new_var;
  new_var2 = arg1;
  sceCdReadClock(D_0015EE98);
  sceScfGetLocalTimefromRTC(D_0015EE98);
  func_00208770();
  new_var = &D_0013D290.unkDC;
  func_00207B08(((*((s32 *) 0x15ED84)) << 0xB) + D_00141EC0);
  func_0020ABB0(arg0);
  D_0013D290.unkF4 = 1;
  D_0013D290.unkEC = arg0;
  D_0013D290.unk14 = new_var2;
  D_0013D290.unkC0 = 0;
  if ((*new_var) < 0)
  {
    D_0013D290.unkE0 = 0;
    D_0013D290.unkDC = 0x13;
  }
}
#endif /* NON_MATCHING */
