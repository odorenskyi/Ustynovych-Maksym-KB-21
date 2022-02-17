#include <cmath>

double s_calculation(double x, double y, double z)
{
    double S;
    S =(abs(sqrt(abs(z-2*x))-x*sin(pow(x,2*z)*y)));
    return S;
}
