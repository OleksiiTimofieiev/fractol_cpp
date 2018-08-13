
#include <iostream>
#include <cstdint>

#include "Bitmap.h"
#include "Mandelbrot.h"

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
            double xFractol = (x - WIDTH / 2 - 200) * 2.0 / HEIGHT;
            double yFractol = (y - HEIGHT / 2) * 2.0 / HEIGHT;

            int iterations = Mandelbrot::getIterations(xFractol, yFractol);

            uint8_t color = (uint8_t)(256 * (double)iterations / Mandelbrot::MAX_ITERATIONS); // to get floation point division;

            color = color * color * color; //more "corona";

            bitmap.setPixel(x, y, 0, color, 0);

            if (color < min) min = color;
            if (color > max) max = color;
        }
    }

    cout << min << ", " << max << endl;

    bitmap.write("test.bmp");

    return (0);
}
 