#include <stdio.h>
#include <math.h> 

int main(int argc, char **argv)
{   
    float a, b, c;
    float m_a, m_b, m_c;

    printf("Введите стороны треугольника: ");
    scanf("%f%f%f", &a, &b, &c);

    m_a = 0.5 * sqrt(2*(b*b + c*c) - a*a);
    m_b = 0.5 * sqrt(2*(a*a + c*c) - b*b);
    m_c = 0.5 * sqrt(2*(b*b + a*a) - c*c);

    printf("m_a = %f\n", m_a);
    printf("m_b = %f\n", m_b);
    printf("m_c = %f\n", m_c);

	return 0;
}