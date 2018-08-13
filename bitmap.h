#ifndef BITMAP_H
#define BITMAP_H

#include <string>

using namespace std;

class Bitmap
{
private:
    int     _width{0};
    int     _height{0};
    
public:
    Bitmap(int width, int height);
    bool write(string filename);
    virtual ~Bitmap();
};



#endif
