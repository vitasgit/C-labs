#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{   
    float alfa, beta, gamma, r;
    float a, b, c;

    printf("Введите углы альфа, бета, гамма и r: ");
    scanf("%f%f%f%f", &alfa, &beta, &gamma, &r);

	alfa = (alfa * M_PI) / 180;
	beta = (beta * M_PI) / 180;
	gamma = (gamma * M_PI) / 180;

    a = 2 * r * sin(alfa);
    b = 2 * r * sin(beta);
    c = 2 * r * sin(gamma);

    printf("стороны треугольника: %f, %f, %f\n", a, b, c);

	return 0;
}