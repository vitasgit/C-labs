#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{
	double x, y, res, res2;
    
    scanf("%f%f", &x, &y);

    res = (fabs(x) - fabs(y)) / (1 + fabs(x*y));
    res2 = (x - y) / (1 + x*y);

    printf("с модулем: %f\n", res);
    printf("без модуля: %f\n", res2);

	return 0;
}