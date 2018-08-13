
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
            double xFractol = (x - WIDTH / 2) * 2.0 / WIDTH;
            double yFractol = (y - HEIGHT / 2) * 2.0 / HEIGHT;

            if (yFractol < min) min = yFractol;
            if (yFractol > max) max = yFractol;
        }
    }

    cout << min << ", " << max << endl;

    bitmap.write("test.bmp");

    return (0);
}
 