#include <stdio.h>
#include <math.h>

int main()
{   
    double res;
    int i, n;

    printf("Введите n: ");
    scanf("%d", &n);

    res = 1.0;
    for (i = 1; i <= n * 10; i++) {
        res *= 1.0 + sin(i*0.1);
    }

    printf("Результат: %lf\n", res);

    res = (1 + sin(0.1))*(1 + sin(0.2))*(1 + sin(0.3))*(1 + sin(0.4))*(1 + sin(0.5))*(1 + sin(0.6))*(1 + sin(0.7))*(1 + sin(0.8))*(1 + sin(0.9))*(1 + sin(1));

    printf("Результат: %lf\n", res);
    printf("sin(5): %lf\n", sin(5));

    //adwadawd

    return 0;
}
