#include <stdio.h>

int main(int argc, char **argv)
{   
    double a, a_2, a_5, a_17;

    printf("Введите a: ");
    scanf("%lf", &a);

    a_2 = a * a;
    a_5 = a_2 * a_2 * a;
    a_17 = a_5 * a_5 * a_5 * a_2;

    printf("a_2 = %lf\n", a_2);
    printf("a_5 = %lf\n", a_5);
    printf("a_17 = %lf\n", a_17);

	return 0;
}