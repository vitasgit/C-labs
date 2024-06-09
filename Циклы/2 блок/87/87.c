#include <stdio.h>

int main() 
{   
    int i, n, m, sum;    

    printf("Введите n, m: ");
    scanf("%d%d", &n, &m);

    sum = 0;
    for (i = 0; i < m; i++) {
        sum += n % 10;
        n /= 10;
    }

    printf("sum = %d\n", sum);

    return 0;
}