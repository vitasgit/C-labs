#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	float a, b;
	float c, s;
	float alfa, beta;
	
	scanf("%f%f", &a, &b);
	c = sqrt(a*a + b*b);
	s = (a*b)/2;
	alfa = tan(a/b);
	beta = tan(b/a);
	
	printf("Гипотенуза: %f\n", c);
	printf("Площадь: %f\n", s);
	printf("Угол альфа: %f\n", alfa);
	printf("Угол бета: %f\n", beta);
	
	return 0;
}


