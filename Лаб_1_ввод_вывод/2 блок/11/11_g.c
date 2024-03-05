#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{
    double a, b, x, y, z;

    printf("Введите x, y, z: ");
    scanf("%lf%lf%lf", &x, &y, &z);

    a = y + (x / (y*y + fabs((x*x / (y + x*x*x / 3)))));
    b = 1 + pow(tan(z/2), 2);

    printf("a = %f\n", a);
    printf("b = %f\n", b);
    
    return 0;
}
