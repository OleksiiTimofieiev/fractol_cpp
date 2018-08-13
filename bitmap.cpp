#include "bitmap.h"

Bitmap::Bitmap(int width, int height) : _width(width), _height(height){};

Bitmap::~Bitmap() {};

bool Bitmap::write(string filename)
{
    return false;
}

void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue)
{
    
}
