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
    bool bit0, bit1, bit2, bit3, bit4;
} Bit5;

typedef struct
{
    bool bit0, bit1, bit2, bit3, bit4, bit5;
} Bit6;

typedef struct
{
    bool bit0, bit1, bit2, bit3, bit4, bit5, bit6;
} Bit7;

typedef struct
{
    bool bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7;
} Bit8;

typedef struct
{
    bool bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8;
} Bit9;

typedef struct
{
    bool bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, bit9, bit10, bit11, bit12, bit13, bit14, bit15;
} Bit16;

typedef struct
{
    bool bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, bit9, bit10, bit11, bit12, bit13, bit14, bit15;
    bool bit16, bit17, bit18, bit19, bit20, bit21, bit22, bit23, bit24, bit25, bit26, bit27, bit28, bit29, bit30, bit31;
} Bit32;

typedef struct
{
    bool bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, bit9, bit10, bit11, bit12, bit13, bit14, bit15;
    bool bit16, bit17, bit18, bit19, bit20, bit21, bit22, bit23, bit24, bit25, bit26, bit27, bit28, bit29, bit30, bit31;
    bool bit32, bit33, bit34, bit35;
} Bit36;

typedef struct
{
    bool bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, bit9, bit10, bit11, bit12, bit13, bit14, bit15;
    bool bit16, bit17, bit18, bit19, bit20, bit21, bit22, bit23, bit24, bit25, bit26, bit27, bit28, bit29, bit30, bit31;
    bool bit32, bit33, bit34, bit35, bit36, bit37, bit38, bit39, bit40, bit41, bit42, bit43, bit44, bit45, bit46, bit47;
    bool bit48, bit49, bit50, bit51, bit52, bit53, bit54, bit55, bit56, bit57, bit58, bit59, bit60, bit61, bit62, bit63;
} Bit64;

typedef struct
{
    bool bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, bit9, bit10, bit11, bit12, bit13, bit14, bit15;
    bool bit16, bit17, bit18, bit19, bit20, bit21, bit22, bit23, bit24, bit25, bit26, bit27, bit28, bit29, bit30, bit31;
    bool bit32, bit33, bit34, bit35, bit36, bit37, bit38, bit39, bit40, bit41, bit42, bit43, bit44, bit45, bit46, bit47;
    bool bit48, bit49, bit50, bit51, bit52, bit53, bit54, bit55, bit56, bit57, bit58, bit59, bit60, bit61, bit62, bit63;
    bool bit64, bit65, bit66, bit67, bit68, bit69, bit70, bit71, bit72, bit73, bit74, bit75, bit76, bit77, bit78, bit79;
    bool bit80, bit81, bit82, bit83, bit84, bit85, bit86, bit87, bit88, bit89, bit90, bit91, bit92, bit93, bit94, bit95;
    bool bit96, bit97, bit98, bit99, bit100, bit101, bit102, bit103, bit104, bit105, bit106, bit107, bit108, bit109, bit110, bit111;
    bool bit112, bit113, bit114, bit115, bit116, bit117, bit118, bit119, bit120, bit121, bit122, bit123, bit124, bit125, bit126, bit127;
} Bit128;

typedef struct
{
    bool bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, bit9, bit10, bit11, bit12, bit13, bit14, bit15;
    bool bit16, bit17, bit18, bit19, bit20, bit21, bit22, bit23, bit24, bit25, bit26, bit27, bit28, bit29, bit30, bit31;
    bool bit32, bit33, bit34, bit35, bit36, bit37, bit38, bit39, bit40, bit41, bit42, bit43, bit44, bit45, bit46, bit47;
    bool bit48, bit49, bit50, bit51, bit52, bit53, bit54, bit55, bit56, bit57, bit58, bit59, bit60, bit61, bit62, bit63;
    bool bit64, bit65, bit66, bit67, bit68, bit69, bit70, bit71, bit72, bit73, bit74, bit75, bit76, bit77, bit78, bit79;
    bool bit80, bit81, bit82, bit83, bit84, bit85, bit86, bit87, bit88, bit89, bit90, bit91, bit92, bit93, bit94, bit95;
    bool bit96, bit97, bit98, bit99, bit100, bit101, bit102, bit103, bit104, bit105, bit106, bit107, bit108, bit109, bit110, bit111;
    bool bit112, bit113, bit114, bit115, bit116, bit117, bit118, bit119, bit120, bit121, bit122, bit123, bit124, bit125, bit126, bit127;
    bool bit128, bit129, bit130, bit131, bit132, bit133, bit134, bit135, bit136, bit137, bit138, bit139, bit140, bit141, bit142, bit143;
    bool bit144, bit145, bit146, bit147, bit148, bit149, bit150, bit151, bit152, bit153, bit154, bit155, bit156, bit157, bit158, bit159;
    bool bit160, bit161, bit162, bit163, bit164, bit165, bit166, bit167, bit168, bit169, bit170, bit171, bit172, bit173, bit174, bit175;
    bool bit176, bit177, bit178, bit179, bit180, bit181, bit182, bit183, bit184, bit185, bit186, bit187, bit188, bit189, bit190, bit191;
    bool bit192, bit193, bit194, bit195, bit196, bit197, bit198, bit199, bit200, bit201, bit202, bit203, bit204, bit205, bit206, bit207;
    bool bit208, bit209, bit210, bit211, bit212, bit213, bit214, bit215, bit216, bit217, bit218, bit219, bit220, bit221, bit222, bit223;
    bool bit224, bit225, bit226, bit227, bit228, bit229, bit230, bit231, bit232, bit233, bit234, bit235, bit236, bit237, bit238, bit239;
    bool bit240, bit241, bit242, bit243, bit244, bit245, bit246, bit247, bit248, bit249, bit250, bit251, bit252, bit253, bit254, bit255;
} Bit256;

typedef struct
{
    bool bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, bit9, bit10, bit11, bit12, bit13, bit14, bit15;
    bool bit16, bit17, bit18, bit19, bit20, bit21, bit22, bit23, bit24, bit25, bit26, bit27, bit28, bit29, bit30, bit31;
    bool bit32, bit33, bit34, bit35, bit36, bit37, bit38, bit39, bit40, bit41, bit42, bit43, bit44, bit45, bit46, bit47;
    bool bit48, bit49, bit50, bit51, bit52, bit53, bit54, bit55, bit56, bit57, bit58, bit59, bit60, bit61, bit62, bit63;
    bool bit64, bit65, bit66, bit67, bit68, bit69, bit70, bit71, bit72, bit73, bit74, bit75, bit76, bit77, bit78, bit79;
    bool bit80, bit81, bit82, bit83, bit84, bit85, bit86, bit87, bit88, bit89, bit90, bit91, bit92, bit93, bit94, bit95;
    bool bit96, bit97, bit98, bit99, bit100, bit101, bit102, bit103, bit104, bit105, bit106, bit107, bit108, bit109, bit110, bit111;
    bool bit112, bit113, bit114, bit115, bit116, bit117, bit118, bit119, bit120, bit121, bit122, bit123, bit124, bit125, bit126, bit127;
    bool bit128, bit129, bit130, bit131, bit132, bit133, bit134, bit135, bit136, bit137, bit138, bit139, bit140, bit141, bit142, bit143;
    bool bit144, bit145, bit146, bit147, bit148, bit149, bit150, bit151, bit152, bit153, bit154, bit155, bit156, bit157, bit158, bit159;
    bool bit160, bit161, bit162, bit163, bit164, bit165, bit166, bit167, bit168, bit169, bit170, bit171, bit172, bit173, bit174, bit175;
    bool bit176, bit177, bit178, bit179, bit180, bit181, bit182, bit183, bit184, bit185, bit186, bit187, bit188, bit189, bit190, bit191;
    bool bit192, bit193, bit194, bit195, bit196, bit197, bit198, bit199, bit200, bit201, bit202, bit203, bit204, bit205, bit206, bit207;
    bool bit208, bit209, bit210, bit211, bit212, bit213, bit214, bit215, bit216, bit217, bit218, bit219, bit220, bit221, bit222, bit223;
    bool bit224, bit225, bit226, bit227, bit228, bit229, bit230, bit231, bit232, bit233, bit234, bit235, bit236, bit237, bit238, bit239;
    bool bit240, bit241, bit242, bit243, bit244, bit245, bit246, bit247, bit248, bit249, bit250, bit251, bit252, bit253, bit254, bit255;
    bool bit256, bit257, bit258, bit259, bit260, bit261, bit262, bit263, bit264, bit265, bit266, bit267, bit268, bit269, bit270, bit271;
    bool bit272, bit273, bit274, bit275, bit276, bit277, bit278, bit279, bit280, bit281, bit282, bit283, bit284, bit285, bit286, bit287;
    bool bit288, bit289, bit290, bit291, bit292, bit293, bit294, bit295, bit296, bit297, bit298, bit299, bit300, bit301, bit302, bit303;
    bool bit304, bit305, bit306, bit307, bit308, bit309, bit310, bit311, bit312, bit313, bit314, bit315, bit316, bit317, bit318, bit319;
    bool bit320, bit321, bit322, bit323, bit324, bit325, bit326, bit327, bit328, bit329, bit330, bit331, bit332, bit333, bit334, bit335;
    bool bit336, bit337, bit338, bit339, bit340, bit341, bit342, bit343, bit344, bit345, bit346, bit347, bit348, bit349, bit350, bit351;
    bool bit352, bit353, bit354, bit355, bit356, bit357, bit358, bit359, bit360, bit361, bit362, bit363, bit364, bit365, bit366, bit367;
    bool bit368, bit369, bit370, bit371, bit372, bit373, bit374, bit375, bit376, bit377, bit378, bit379, bit380, bit381, bit382, bit383;
    bool bit384, bit385, bit386, bit387, bit388, bit389, bit390, bit391, bit392, bit393, bit394, bit395, bit396, bit397, bit398, bit399;
    bool bit400, bit401, bit402, bit403, bit404, bit405, bit406, bit407, bit408, bit409, bit410, bit411, bit412, bit413, bit414, bit415;
    bool bit416, bit417, bit418, bit419, bit420, bit421, bit422, bit423, bit424, bit425, bit426, bit427, bit428, bit429, bit430, bit431;
    bool bit432, bit433, bit434, bit435, bit436, bit437, bit438, bit439, bit440, bit441, bit442, bit443, bit444, bit445, bit446, bit447;
    bool bit448, bit449, bit450, bit451, bit452, bit453, bit454, bit455, bit456, bit457, bit458, bit459, bit460, bit461, bit462, bit463;
    bool bit464, bit465, bit466, bit467, bit468, bit469, bit470, bit471, bit472, bit473, bit474, bit475, bit476, bit477, bit478, bit479;
    bool bit480, bit481, bit482, bit483, bit484, bit485, bit486, bit487, bit488, bit489, bit490, bit491, bit492, bit493, bit494, bit495;
    bool bit496, bit497, bit498, bit499, bit500, bit501, bit502, bit503, bit504, bit505, bit506, bit507, bit508, bit509, bit510, bit511;
} Bit512;

#endif
