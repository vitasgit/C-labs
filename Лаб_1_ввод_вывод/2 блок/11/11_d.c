#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{
    double x, y, z;
    double a, b;
    double alfa;

    printf("Введите x, y, z: ");
    scanf("%lf%lf%lf", &x, &y, &z);

    alfa = (x - 180./6.) * M_PI/180.;
    a = (2*cos(alfa)) / (0.5 + pow(sin(y), 2));
    b = 1 + (z*z / (3 + (z*z) / 5));
    
    printf("a = %lf\n", a);
    printf("b = %lf\n", b);
    
    return 0;
}
