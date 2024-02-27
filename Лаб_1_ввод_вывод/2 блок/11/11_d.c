#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{
    double x, y, z;
    double a, b;

    printf("Введите x, y, z: ");
    scanf("%lf%lf%lf", &x, &y, &z);

    a = (2 * cos(x - M_PI/6)) / (0.5 + pow(sin(y), 2));
    b = 1 + (z*z / (3 + (z*z) / 5));
    
    printf("res = %lf\n", a);
    printf("res = %lf\n", b);
    
    return 0;
}
