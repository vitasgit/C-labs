#include <stdio.h>

int main(int argc, char **argv)
{   
    double a, a_2, a_4, a_5, a_10, a_15, a_17;

    printf("Введите a: ");
    scanf("%lf", &a);

    a_2 = a * a;
    a_4 = a_2 * a_2;
    a_5 = a_4 * a;
    a_10 = a_5 * a_5;
    a_15 = a_10 * a_5;
    a_17 = a_15 * a_2;

    printf("a_2 = %lf\n", a_2);
    printf("a_5 = %lf\n", a_5);
    printf("a_17 = %lf\n", a_17);

	return 0;
}