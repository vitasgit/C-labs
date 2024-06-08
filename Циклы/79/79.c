#include <stdio.h>
#include <math.h>

int main() 
{   
    double res;
    int i, n;

    printf("Введите n: ");
    scanf("%d", &n);

    res = 1.;
    for (i = 1; i <= n*10; i++) {
        res *= 1.0 + sin(i*0.1);
    }

    printf("Результат: %lf\n", res);

    return 0;
}
