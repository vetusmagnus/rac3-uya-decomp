#include "common.h"

/* --- declarations from other files (tools/split_text.py --refresh) --- */
/* --- end of declarations from other files --- */

INCLUDE_ASM("asm/veldin/nonmatchings/text", func_00322E68);

INCLUDE_ASM("asm/veldin/nonmatchings/text", func_00323518);

INCLUDE_ASM("asm/veldin/nonmatchings/text", func_00323768);

INCLUDE_ASM("asm/veldin/nonmatchings/text", func_00323A38);

LINKER_REMNANT("asm/veldin/remnants", func_00323C60);

/* localdecomp:start func_00323C78 */
extern u8 D_002AF318[];

void *func_00323C78(s32 arg0, s32 arg1, s32 *arg2) {
    switch (arg1) {
    case 0:
        *arg2 = 0x6C;
        return D_002AF318;
    }
    return 0;
}
/* localdecomp:end func_00323C78 */

INCLUDE_ASM("asm/veldin/nonmatchings/text", func_00323C98);

