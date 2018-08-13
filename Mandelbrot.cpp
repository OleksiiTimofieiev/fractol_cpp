#include <complex>
#include "Mandelbrot.h"

using namespace std;

Mandelbrot::Mandelbrot(){}
Mandelbrot::~Mandelbrot(){}

int Mandelbrot::getIterations(double x, double y)
{
    complex<double> z = 0;
    complex<double> c(x,y);

    int iterations = 0;

    while (iterations < MAX_ITERATIONS)
    {
        z = z * z + c; // mandelbrot set;

        if(abs(z) > 2) // magnitude of the complex number;
            break;

        iterations++;
    }
    

     return iterations;
}