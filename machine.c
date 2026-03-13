#include <stdio.h>
#include "circuits.h"

int main()
{
    Bit8 D;
    D.bit0 = 1;
    D.bit1 = 0;
    D.bit2 = 1;
    D.bit3 = 1;
    D.bit4 = 0;
    D.bit5 = 0;
    D.bit6 = 1;
    D.bit7 = 0;

    Bit3 C;
    C.bit0 = 0;
    C.bit1 = 0;
    C.bit2 = 0;

    bool R = multiplexer_bits8(D, C);

    printf("%d\n", R);
    
    return 0;
}