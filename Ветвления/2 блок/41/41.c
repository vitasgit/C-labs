#include <stdio.h>

int main(int argc, char **argv) 
{   
    float a, b, c;

    printf("Введите a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a > 1 && a < 3) {
        printf("%f ∊ (1;3)\n", a);
    }
    else if (a < 1 || a > 3) {
        if (a < 1) {
            printf("a = %f < 1\n", a);
        }
        else {
            printf("a = %f > 3\n", a);
        }
    }

    if (b > 1 && b < 3) {
        printf("b = %f ∊ (1;3)\n", b);
    }
    else if (b < 1 || b > 3) {
        if (b < 1) {
            printf("b = %f < 1\n", b);
        }
        else {
            printf("b = %f > 3\n", b);
        }
    }

    if (c > 1 && c < 3) {
        printf("c = %f ∊ (1;3)\n", c);
    }
    else if (c < 1 || c > 3) {
        if (c < 1) {
            printf("c = %f < 1\n", c);
        }
        else {
            printf("c = %f > 3\n", c);
        }
    }

	return 0;
}
