#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) 
{   
    double res, s;
    int i, n;

    printf("Введите n: ");
    scanf("%d", &n);
	
	s = 0.0;
	res = 0.0;
    for (i = 1; i <= n; i++) {
        s += sin(i);
        res += 1.0 / s;
    }

    printf("%lf\n", res);

    res = (1 / sin(1)) + (1 / (sin(1) + sin(2))) + (1 / (sin(1) + sin(2) + sin(3)));
	printf("%lf\n", res);

    return 0;
}
