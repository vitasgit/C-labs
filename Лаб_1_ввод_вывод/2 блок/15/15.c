#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{
    float c, a, b, r1, r2;

    printf("Введите с и a(гип и катет): ");
    scanf("%f%f", &c, &a);

    b = sqrt(c*c - a*a);
    r1 = 0.5*(a + b - c);
    r2 = 0.5*c;

    printf("Второй катет: %f\n", b);
    printf("r вписанной: %f\n", r1);
    printf("r описанной: %f\n", r2);
    
    return 0;
}
