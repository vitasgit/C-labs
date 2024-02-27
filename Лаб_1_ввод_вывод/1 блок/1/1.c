#include <stdio.h>

int main(void)
{   
    float a, b;
    float sum, difference, product, division;

    printf("Введите числа а и b: ");
    scanf("%f%f", &a, &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    division = a / b;

    printf("Сумма: %f\n", sum);
    printf("Разность: %f\n", difference);
    printf("Произведение: %f\n", product);
    printf("Отношение: %f\n", division);

    return 0;
}