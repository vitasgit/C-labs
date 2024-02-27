#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{   
    double x1, y1, x2, y2, x3, y3;
    double a, b, c, p, s;

    printf("Введите x1, y1: ");
    scanf("%lf%lf", &x1, &y1);

    printf("Введите x2, y2: ");
    scanf("%lf%lf", &x2, &y2);

    printf("Введите x3, y3: ");
    scanf("%lf%lf", &x3, &y3);

    a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    b = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
    c = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));

    p = 0.5*(a + b + c);
    s = sqrt(p*(p - a)*(p - b)*(p - c));

    printf("s = %lf\n", s);

	return 0;
}