#include "ZoomList.h"

ZoomList::ZoomList() {};
ZoomList::~ZoomList(){};

ZoomList::ZoomList(int width, int height) : _width(width), _height(height)
{

}

void ZoomList::add(const Zoom &zoom)
{
    zooms.push_back(zoom);

    _xCenter += (zoom._x - _width / 2) * _scale;
    _yCenter  += (zoom._y - _height / 2) * _scale;

    _scale *= _scale;
}

pair<double, double> doZoom(int x, int y)
{
    return pair<double,double>(0,0);
}