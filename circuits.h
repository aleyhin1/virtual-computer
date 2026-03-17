#ifndef CIRCUITS_H
#define CIRCUITS_H

#include "bits.h"

Bit36 bit36_and(Bit36 a, bool b);
Bit36 bit36_or(Bit36 a, Bit36 b);
bool bit2_multiplexer(Bit2 in, bool sel);
bool bit4_multiplexer(Bit4 in, Bit2 sel);
bool bit8_multiplexer(Bit8 in, Bit3 sel);
Bit2 bit1_decoder(bool sel);
Bit4 bit2_decoder(Bit2 sel);
Bit8 bit3_decoder(Bit3 sel);
Bit16 bit4_decoder(Bit4 sel);
Bit32 bit5_decoder(Bit5 sel);
Bit64 bit6_decoder(Bit6 sel);
Bit128 bit7_decoder(Bit7 sel);
Bit256 bit8_decoder(Bit8 sel);
Bit512 bit9_decoder(Bit9 sel);
bool bit1_comparator(bool a, bool b);
bool bit2_comparator(Bit2 a, Bit2 b);
bool bit4_comparator(Bit4 a, Bit4 b);
Bit2 bit2_shifter_1(Bit2 in, bool sel);
Bit4 bit4_shifter_1(Bit4 in, bool sel);
Bit2 bit1_half_adder(bool a, bool b);
Bit2 bit1_full_adder(bool a, bool b, bool carry);
Bit2 bit1_ALU(bool inva, bool a, bool ena, bool b, bool enb, bool carry, Bit2 sel);

#endif
