#ifndef BITMAPINFOHEADER_H
#define BITMAPINFOHEADER_H

#include <cstdint>

using   namespace std;

#pragma pack(2)

struct BitmapInfoHeader
{
    int32_t     headerSize{40};
    int32_t     width;
    int32_t     heigh;
    int16_t     planes{1};
    int16_t     bitsPerPixel{24}; // 3 * 8 -> RGB
    int32_t     compression{0}; // not used;
    int32_t     dataSize{0};
    int32_t     horizontalResolution{2400};
    int32_t     verticalResolution{2400};
    int32_t     colors{0};
    int32_t     importantColors{0};
};

#endif
