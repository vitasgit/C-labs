#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{   
    float a, b, c;
    float p, s, h_a, h_b, h_c;
    float m_a, m_b, m_c;
    float l_a, l_b, l_c;

    printf("Введите стороны треугольника: ");
    scanf("%f%f%f", &a, &b, &c);

    p = 0.5*(a + b + c);
    s = sqrt(p*(p - a)*(p - b)*(p - c));

    h_a = (2*s) / a;
    h_b = (2*s) / b;
    h_c = (2*s) / c;

    m_a = 0.5 * sqrt(2*(b*b + c*c) - a*a);
    m_b = 0.5 * sqrt(2*(a*a + c*c) - b*b);
    m_c = 0.5 * sqrt(2*(b*b + a*a) - c*c);

    l_a = sqrt(b*c *(b + c + a) * (b + c - a)) / (b + c);
    l_c = sqrt(b*a *(b + c + a) * (b + a - c)) / (b + a);
    l_b = sqrt(c*a *(b + c + a) * (a + c - b)) / (c + a);

    printf("h_a = %f\n", h_a);
    printf("h_a = %f\n", h_b);
    printf("h_a = %f\n\n", h_c);

    printf("m_a = %f\n", m_a);
    printf("m_b = %f\n", m_b);
    printf("m_c = %f\n\n", m_c);

    printf("l_a = %f\n", l_a);
    printf("l_b = %f\n", l_b);
    printf("l_c = %f\n\n", l_c);

	return 0;
}