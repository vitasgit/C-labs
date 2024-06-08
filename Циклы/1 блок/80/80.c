#include <stdio.h>
#include <math.h>

int main() 
{   
    double x, res, a;
    int i, j, n, znak, fact;

    printf("Введите x: ");
    scanf("%lf", &x);

    printf("Введите n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("n должно быть нечётным\n");
        return 0;
    }

    res = 0.0;
    znak = 1;
    for (i = 1; i <= n; i += 2) {
        
        fact = 1;
        for (j = 1; j <= i; j++) {
            fact *= j;
        }

        a = znak * pow(x, i) / fact;
        res += a;
        znak *= -1;
    }

    printf("Результат: %lf\n", res);

    return 0;
}
