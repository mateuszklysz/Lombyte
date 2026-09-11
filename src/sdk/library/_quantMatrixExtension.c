/*
STATE: C_EXACT
SYMBOL: _quantMatrixExtension
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x840];
    s32 unk840;
    s32 unk844;
};

extern u8 D_001538E8[];
extern u8 D_00153910[];
extern s32 _Error();
extern s32 _nextBit();
extern s32 _sendIpuCommand();
extern s32 _waitIpuIdle();
void _quantMatrixExtension(struct M2c_arg0 *arg0) {
    s32 temp_2_20;
    s32 temp_2_7;

    temp_2_7 = _nextBit(arg0, 1);
    arg0->unk840 = temp_2_7;
    if (temp_2_7 != 0) {
        _waitIpuIdle(arg0);
        _sendIpuCommand(arg0, 0x50000000);
        _waitIpuIdle(arg0);
    }
    temp_2_20 = _nextBit(arg0, 1);
    arg0->unk844 = temp_2_20;
    if (temp_2_20 != 0) {
        _waitIpuIdle(arg0);
        _sendIpuCommand(arg0, 0x58000000);
        _waitIpuIdle(arg0);
    }
    if (_nextBit(arg0, 1) != 0) {
        _Error(arg0, D_001538E8);
    }
    if (_nextBit(arg0, 1) != 0) {
        _Error(arg0, D_00153910);
    }
}
