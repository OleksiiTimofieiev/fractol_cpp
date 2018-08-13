#ifndef ZOOMLIST_H
#define ZOOMLIST_H

class ZoomList
{
private:
    int _width{0};
    int _height{0};
public:
  ZoomList();
  ZoomList(int width, int height);
  ~ZoomList();
};

#endif