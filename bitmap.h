#ifndef BITMAP_H
#define BITMAP_H

#include <string>
#include <cstdint>

using namespace std;

class Bitmap
{
private:
    int     _width{0};
    int     _height{0};
    
public:
    Bitmap(int width, int height);
    bool write(string filename);
    void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
    virtual ~Bitmap();
};



#endif
