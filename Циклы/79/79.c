#include <stdio.h>
#include <math.h>

int main(int argc, char **argv, char **env) {
    int n, i;
    float sum, res;
    printf("Введите n: ");
    scanf("%d", &n);

    res = 0;
    sum = 0;

    for (i = 0.1; i <= n; i += 0.1) {
        sum += 1 + sinf(i);
        sum*=sum;
    }

    printf("Сумма = %f\n", sum);
    return 0;
}