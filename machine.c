#include <stdio.h>
#include "circuits.h"

int main()
{
    Bit3 sel;
    sel.bit0 = 0;
    sel.bit1 = 1;
    sel.bit2 = 1;

    Bit8 out;
    out = decoder_bit8(sel);

    printf("%d\n", out.bit0);
    printf("%d\n", out.bit1);
    printf("%d\n", out.bit2);
    printf("%d\n", out.bit3);
    printf("%d\n", out.bit4);
    printf("%d\n", out.bit5);
    printf("%d\n", out.bit6);
    printf("%d\n", out.bit7);
    
    return 0;
}