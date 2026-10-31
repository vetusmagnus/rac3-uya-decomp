#include "common.h"

/* --- declarations from other files (tools/split_text.py --refresh) --- */
extern void func_0047B558(void);
/* --- end of declarations from other files --- */

/* localdecomp:start func_0047B428 */
extern void func_0047B450(void);
extern void func_0047B458(void);
void func_0047B428(void) {
    func_0047B450();
    func_0047B458();
}
/* localdecomp:end func_0047B428 */

INCLUDE_ASM("asm/veldin/nonmatchings/text", func_0047B450);

INCLUDE_ASM("asm/veldin/nonmatchings/text", func_0047B458);

INCLUDE_ASM("asm/veldin/nonmatchings/text", func_0047B460);

INCLUDE_ASM("asm/veldin/nonmatchings/text", func_0047B550);

INCLUDE_ASM("asm/veldin/nonmatchings/text", func_0047B558);
