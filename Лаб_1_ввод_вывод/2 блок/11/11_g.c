#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{
    float a, b, x, y, z;

    printf("Введите x, y, z: ");
    scanf("%f%f%f", &y, &x, &x);

    a = y + (x / (y*y + fabs((x*x / (y + pow(x, 3) / 3)))));
    b = 1 + pow(tan(z/2), 2);

    printf("a = %f\n", a);
    printf("b = %f\n", b);
    
    return 0;
}
