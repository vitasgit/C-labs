#include <stdio.h>

int main(int argc, char **argv)
{   
    float x, y, z;
    float max, min;

    printf("Введите x, y, z: ");
    scanf("%f%f%f", &x, &y, &z);

    max = x;
    min = z;

    if (max < y) max = y;
    if (max < z) max = z;

    if (min > x) min = x;
    if (min > y) min = y;

    printf("max = %f\n", max);
    printf("min = %f\n", min);

	return 0;
}
