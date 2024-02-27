#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{   
    float a, b, c;
    float l_a, l_b, l_c;

    printf("Введите стороны треугольника: ");
    scanf("%f%f%f", &a, &b, &c);

    l_a = sqrt(b*c *(b + c + a) * (b + c - a)) / (b + c);
    l_c = sqrt(b*a *(b + c + a) * (b + a - c)) / (b + a);
    l_b = sqrt(c*a *(b + c + a) * (a + c - b)) / (c + a);
    
    printf("l_a = %f\n", l_a);
    printf("l_b = %f\n", l_b);
    printf("l_c = %f\n", l_c);

	return 0;
}