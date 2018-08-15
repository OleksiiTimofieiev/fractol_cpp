#ifndef ZOOMLIST_H
#define ZOOMLIST_H

#include <vector>
#include <utility>

using namespace std;

class ZoomList
{
private:
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