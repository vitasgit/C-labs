#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{   
    float a, b, c;
    float p, s, h_a, h_b, h_c;

    printf("Введите стороны треугольника: ");
    scanf("%f%f%f", &a, &b, &c);

    p = 0.5*(a + b + c);
    s = sqrt(p*(p - a)*(p - b)*(p - c));

    h_a = (2*s) / a;
    h_b = (2*s) / b;
    h_c = (2*s) / c;

    printf("h_a = %f\n", h_a);
    printf("h_a = %f\n", h_b);
    printf("h_a = %f\n", h_c);

	return 0;
}