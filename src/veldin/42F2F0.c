#include "common.h"

/* --- declarations from other files (tools/split_text.py --refresh) --- */
/* --- end of declarations from other files --- */

/* localdecomp:start func_0042F2F0 */
typedef struct { u8 pad[0x164]; s32 a; s32 b; } S_42F2F0;
extern S_42F2F0 D_00142430;
extern s32 D_001D4CE8;
void func_0042F2F0(void) {
    S_42F2F0 *p = &D_00142430;
    D_001D4CE8 = 6;
    p->a = -1;
    p->b = -1;
}
/* localdecomp:end func_0042F2F0 */

