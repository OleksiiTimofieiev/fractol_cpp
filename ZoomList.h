#ifndef ZOOMLIST_H
#define ZOOMLIST_H

#include <vector>
#include <utility>

#include "Zoom.h"

using namespace std;

class ZoomList
{
private:
    double _xCenter{0};
    double _yCenter{0};
    double _scale{0};

    int _width{0};
    int _height{0};
    std::vector<Zoom> zooms;
public:
    ZoomList();
    ZoomList(int width, int height);
    ~ZoomList();

    void add(const Zoom & zoom);
    pair <double,double> doZoom(int x, int y);
};

#endif