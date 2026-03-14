#include <stdio.h>
#include "circuits.h"

int main()
{
    Bit2 sel;
    sel.bit0 = 0;
    sel.bit1 = 0;
    Bit2 out = bit1_ALU(0, 1, 1, 1, 1, 1, sel);

    printf("%d\n", out.bit0);
    printf("%d\n", out.bit1);
    
    return 0;
}