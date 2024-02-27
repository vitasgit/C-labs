#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{   
    float x1, y1, x2, y2, x3, y3;
    float a, b, c, p;

    printf("Введите x1, y1: ");
    scanf("%f%f", &x1, &y1);

    printf("Введите x2, y2: ");
    scanf("%f%f", &x2, &y2);

    printf("Введите x3, y3: ");
    scanf("%f%f", &x3, &y3);

    a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    b = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
    c = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));

    p = (a + b + c);

    printf("p = %f\n", p);

	return 0;
}