#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{   
    float x, y;
    float max, min;

    printf("Введите x, y: ");
    scanf("%f%f", &x, &y );

    if (x > y)
    {
        printf("max(x): %f\n", x);
        printf("min(y): %f\n", y);
    }

    else if (x < y)
    {
        printf("max(y) = %f\n", y);
        printf("min(x) = %f\n", x);
    }

    else {
        printf("max(x) = %f\n", x);
        printf("max(y) = %f\n", y);
    }

	return 0;
}
