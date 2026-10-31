#include "common.h"

/* --- declarations from other files (tools/split_text.py --refresh) --- */
/* --- end of declarations from other files --- */

/* localdecomp:start func_00438880 */
extern s32 D_001E00DC;
s32 func_00438880(s32 a) {
    if (a == 0xFF) return 0;
    return a >= D_001E00DC;
}
/* localdecomp:end func_00438880 */

INCLUDE_ASM("asm/veldin/nonmatchings/text", func_004388A0);

