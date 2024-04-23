#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{   
    float x, y;
    float max, min;

    printf("Введите x, y: ");
    scanf("%f%f", &x, &y );

    max = x;
    min = y;

    if (x < y)
    {
        max = y;
        min = x;
    }

    printf("max = %f\n", max);
    printf("min = %f\n", min);

	return 0;
}
