#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) 
{   
    double res, s;
    int i, j, n;

    printf("Введите n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        s += sin((double)i);
        res += 1 / s;

    }

    printf("%lf\n", res);

    return 0;
}
