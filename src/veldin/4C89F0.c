#include "common.h"

/* --- declarations from other files (tools/split_text.py --refresh) --- */
/* --- end of declarations from other files --- */

LINKER_REMNANT("asm/veldin/remnants", func_004C89F0);

INCLUDE_ASM("asm/veldin/nonmatchings/text", func_004C8A00);

INCLUDE_ASM("asm/veldin/nonmatchings/text", func_004C8A20);

/* localdecomp:start func_004C8A40 */
extern s32 D_001DB178;
extern void func_004C87A0();
void func_004C8A40(void **p) {
    *p = &D_001DB178;
    func_004C87A0(p);
}
/* localdecomp:end func_004C8A40 */

