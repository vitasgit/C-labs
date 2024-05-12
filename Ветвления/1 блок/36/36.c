#include <stdio.h>

int main(int argc, char **argv)
{   
    float a, b, c;

    printf("Введите a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    if ((a < b) && (b < c))
    {
        printf("верно %f < %f < %f\n", a, b, c);
    }
    else {
        printf("неверно %f < %f < %f\n", a, b, c);
    }

    if ((a <= b) && (b <= c))
    {
        printf("верно %f <= %f <= %f\n", a, b, c);
    }
    else {
        printf("неверно %f <= %f <= %f\n", a, b, c);
    }

    if ((a >= b) && (b >= c))
    {
        printf("верно %f >= %f >= %f\n", a, b, c);
    }
    else {
        printf("неверно %f >= %f >= %f\n", a, b, c);
    }

	return 0;
}
