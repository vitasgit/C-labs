#include <stdio.h>
#include <math.h>

int main(int argc, char **argv, char **env) 
{   
    double x, a, res, fact;
    int i,j, n;

    printf("введите x: ");
    scanf("%lf", &x);

    printf("введите n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("число n должно быть нечётным");
        return 0;
    }
    
    res = 0.0;
	for (i = 1; i <= n; i += 2) {

		fact = 1;
		for (j = 1; j <= i; j++) {
			fact *= j;
		}

		a = pow(x, i) / fact;

		if ((i / 2) % 2 == 1) {
			a *= -1;
		}

		res += a;
	}

    printf("res: %lf\n", res);

    res = 2 - (pow(2, 3) / (1*2*3)) + (pow(2, 5) / (1*2*3*4*5)) - (pow(2, 7) / (1*2*3*4*5*6*7));
    printf("res: %lf\n", res);

    return 0;
}
