
#include <iostream>

#include "Bitmap.h"


using namespace std;

int main(void)
{
    int const WIDTH = 800;
    int const HEIGHT = 600;
    double min = 999999;
    double max = -999999;

    Bitmap bitmap(WIDTH, HEIGHT);

    for(int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            double xFractol = 0;
            double yFractol = 0;

            if (xFractol < min) min = xFractol;
            if (xFractol > max) max = xFractol;
        }
    }

    cout << min << ',' << max << endl;

    bitmap.write("test.bmp");

    return (0);
}
 