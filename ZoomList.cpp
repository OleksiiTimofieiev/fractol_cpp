#include "ZoomList.h"

ZoomList::Zoomlist(int width, int height) : _width(width, _height(height))
{

}

void ZoomList::add(const Zoom &zoom)
{
    zooms.push_back(zoom);
}

pair<double, double> doZoom(int x, int y)
{
    
}