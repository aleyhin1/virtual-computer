#ifndef BITS_H
#define BITS_H

#include <stdbool.h>

typedef struct
{
    bool bit0, bit1;
} Bit2;

typedef struct
{
    bool bit0, bit1, bit2;
} Bit3;

typedef struct
{
    bool bit0, bit1, bit2, bit3;
} Bit4;

typedef struct
{
    bool bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7;
} Bit8;

typedef struct
{
    bool bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, bit9, bit10, bit11, bit12, bit13, bit14, bit15;
} Bit16;

typedef struct
{
    bool bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, bit9, bit10, bit11, bit12, bit13, bit14, bit15;
    bool bit16, bit17, bit18, bit19, bit20, bit21, bit22, bit23, bit24, bit25, bit26, bit27, bit28, bit29, bit30, bit31;
} Bit32;

#endif