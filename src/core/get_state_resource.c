/*
STATE: C_EXACT
SYMBOL: GetStateResource
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Return the shared state resource storage. */
extern char GlobalStateResource[0x100] __asm__("D_00152370");

int *GetStateResource(void *state_resource) __asm__("func_001144D8");

int *GetStateResource(void *state_resource) {
    return (int *)GlobalStateResource;
}
