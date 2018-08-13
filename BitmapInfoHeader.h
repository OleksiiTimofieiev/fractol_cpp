#ifndef BITMAPINFOHEADER_H
#define BITMAPINFOHEADER_H

#include <cstdint>

using namespace std;

#pragma pack(2)

struct BitmapInfoHeader
{
    int32_t     headerSize{40};
    int32_t     width;
    int32_t     heigh;
    int32_t     planes{1};
    int32_t     bitsPerPixel{24};
    int32_t     compression{0};
    int32_t     dataSize{0};
    int32_t     horizotalResolution{2400};
    int32_t     verticalResolution{2400};
    int32_t     colors{0};
    int32_t     imprtantColors{0};
};




#endif
