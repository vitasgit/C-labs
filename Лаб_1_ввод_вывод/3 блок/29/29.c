#include <stdio.h>

int main(int argc, char **argv)
{   
    float x, x_2, y, y_2, xy, res1, res2;

    printf("Введите x, y: ");
    scanf("%f%f", &x, &y);

    x_2 = x*x;
    y_2 = y*y;
    xy = x*y;

    res1 = 3*x_2*y_2 - 2*x*y_2 - 7*x_2*y - 4*y_2 + 15*x*y + 2*x_2 - 3*x + 10*y + 6;
    res2 = x*(y*(3*x*y + 15 - 2*y - 5*x) - 3) - y*(4*y + 10) + 6;

    printf("res1 = %f\n", res1);
    printf("res2 = %f\n", res2);

	return 0;
}