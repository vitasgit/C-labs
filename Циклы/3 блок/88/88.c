#include <stdio.h>

int main() 
{   
    int n, res;

    printf("Введите n: ");
    scanf("%d", &n);

    res = 0;
    while (n > 0) {
        res *= 10;
        res += n % 10;
        n /= 10;
    }

    printf("res = %d\n", res);

    return 0;
}