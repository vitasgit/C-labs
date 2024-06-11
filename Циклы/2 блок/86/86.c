#include <stdio.h>

int main()
{ 
    int n, tmp, a, s, count, znak;

    printf("Введите число n: ");
    scanf("%d", &n); 

    tmp = n;
    count = 0;
    while (tmp != 0) {   
        count = count + 1;
        tmp = tmp / 10;
    }

    if (count % 2 == 0) {
        znak = -1;
    }
    else {
        znak = 1; 
    }

    s = 0;
    while (n != 0) {
        a = n % 10;
        s += a * znak;
        znak = -1 * znak;
        n = n / 10;
    }

    printf("res = %d\n", s);

    return 0;
}
