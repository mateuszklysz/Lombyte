/*
STATE: C_EXACT
SYMBOL: _request_bind
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

/*
AUTO-DIAGNOSIS
symbol: _request_bind
unit: assembly/sdk/sif_rpc/request_bind
code_percent: 100.0000
function_percent: 100.0000
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "176", "object": "request_bind.c.o", "text_size": "176"}
current: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "176", "object": "candidate.o", "text_size": "176"}
diff: {"code_gap_percent": 0.0, "current_instruction_mismatch_count": 0, "data_gap_percent": 0.0, "function_gap_percent": 0.0, "instruction_mismatches": [], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 0}
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
  u8 pad_0[0x14];
  s32 unk14;
  u8 pad_18[0x4];
  s32 unk1C;
  s32 unk20;
};
struct M2c_temp_2_10
{
  u8 pad_0[0x14];
  s32 unk14;
  u8 pad_18[0x4];
  s32 unk1C;
  s32 unk20;
  s32 unk24;
  s32 unk28;
  s32 unk2C;
};
struct M2c_temp_2_21
{
  u8 pad_0[0x8];
  s32 unk8;
  u8 pad_C[0x8];
  s32 unk14;
};
extern s32 GetRpcPacket();
extern s32 SearchSvdata();
extern void isceSifSendCmd();
void _request_bind(struct M2c_arg0 *arg0, s32 arg1)
{
  struct M2c_temp_2_10 *temp_2_10;
  s32 new_var;
  struct M2c_temp_2_21 *temp_2_21;
  temp_2_10 = GetRpcPacket(arg1);
  new_var = (s32) arg0->unk14;
  temp_2_10->unk1C = (s32) arg0->unk1C;
  temp_2_10->unk14 = new_var;
  temp_2_10->unk20 = 0x80000009;
  temp_2_21 = SearchSvdata(arg0->unk20, arg1);
  if (temp_2_21 == 0)
  {
    temp_2_10->unk24 = 0;
    temp_2_10->unk28 = 0;
    temp_2_10->unk2C = 0;
  }
  else
  {
    temp_2_10->unk24 = temp_2_21;
    temp_2_10->unk28 = (s32) temp_2_21->unk8;
    temp_2_10->unk2C = (s32) temp_2_21->unk14;
  }
  isceSifSendCmd(0x80000008, temp_2_10, 0x40, 0, 0, 0);
}
