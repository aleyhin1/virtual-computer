#include "bits.h"
#include <stdio.h>

bool multiplexer_bits8(Bit8 in, Bit3 con)
{
    bool d0 = in.bit0 && !con.bit0 && !con.bit1 && !con.bit2;
    bool d1 = in.bit1 && con.bit0 && !con.bit1 && !con.bit2;
    bool d2 = in.bit2 && !con.bit0 && con.bit1 && !con.bit2;
    bool d3 = in.bit3 && con.bit0 && con.bit1 && !con.bit2;
    bool d4 = in.bit4 && !con.bit0 && !con.bit1 && con.bit2;
    bool d5 = in.bit5 && con.bit0 && !con.bit1 && con.bit2;
    bool d6 = in.bit6 && !con.bit0 && con.bit1 && con.bit2;
    bool d7 = in.bit7 && con.bit0 && con.bit1 && con.bit2;

    return d0 || d1 || d2 || d3 || d4 || d5 || d6 || d7;
}