#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{
	float a1, a2, r1, r2, p1, p2;
    int n;

    printf("Введите n сторон: ");
    scanf("%d", &n);

    printf("Введите r описанной окр: ");
    scanf("%f", &r1);
    
    printf("Введите r вписанной окр: ");
    scanf("%f", &r2);

    a1 = 2 * r1 * sinf(M_PI/n);
    a2 = 2 * r2 * tanf(M_PI/n);
    p1 = n * a1;
    p2 = n * a2;

    printf("P вписанного = %f\n", p1);
    printf("P описанного = %f\n", p2);

	return 0;
}