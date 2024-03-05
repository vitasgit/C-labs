#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{
    double r1, r2, r3;
    double res1, res2;

    printf("Введите R1, R2, R3: ");
    scanf("%lf%lf%lf", &r1, &r2, &r3);

    res1 = 1 / (1/r1 + 1/r2 + 1/r3);
    res2 = r1 + r2 + r3;

    printf("параллельное R: %lf\n", res1);
    printf("последовательное R: %lf\n", res2);

	return 0;
}