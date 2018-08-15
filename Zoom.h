#ifndef ZOOM_H
#define ZOOM_H

struct Zoom
{
    int _x{0};
    int _y{0};
    double _scale{0.0};
    
    Zoom(int x, int y, int scale) : _x(x), _y(y), _scale(scale) {};
};

#endif