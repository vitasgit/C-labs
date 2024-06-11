#include <stdio.h>

int main() 
{   
    double a, sum;
    int i;

    printf("Введите a: ");
    scanf("%lf", &a);

    sum = 0.0;
    for (i = 1; ; i++) {
        sum += 1.0 / i;
        
        if (sum > a) {
            printf("%lf\n", sum);
            break;
        }
    }

    return 0;
}
