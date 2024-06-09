#include <stdio.h>

int main() {
    int i, j, n, s, p;

    printf("Введите n: ");
    scanf("%d", &n);

    s = 0;
    for (i = 1; i <= n; i++) {
        p = 1;

        for (j = i; j <= 2 * i; j++) {
            p = p * j;
        }

        s = s + p;
    }

    printf("res: %d\n", s);

    return 0;
}
