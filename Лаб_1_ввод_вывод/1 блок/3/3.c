#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{
	float a, v, s, d;
	
	scanf("%f", &a);
	
	v = a*a*a;
	s = 4 * (a*a);
	d = a * sqrt(3);
	
	printf("v = %f\n", v);
	printf("s = %f\n", s);
	printf("d = %f\n", d);
	
	return 0;
}

