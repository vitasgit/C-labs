#include <stdio.h>

int main(int argc, char **argv)
{   
    float a, b, c;

    printf("Введите a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    if ((a < b) && (b < c))
    {
        printf("верно\n");
    }
    else {
        printf("неверно\n");
    }

	return 0;
}
