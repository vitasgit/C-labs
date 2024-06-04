#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) 
{   
    float x, y, z;
    float sum, prod;
    float eps = 0.000001;

    printf("Введите x, y, z: ");
    scanf("%f%f%f", &x, &y, &z);

    sum = (x + y + z) / 2;
    prod = (x * y * z) * 2;

    if ((fabs(x - y) < eps) || (fabs(x - z) < eps) || (fabs(y - z) < eps)) {
        printf("Числа не должны быть равны\n");
    }
    
    if (x < y && x < z) {
        x = sum;

        if (y > z) {
            y = prod;
        }
        else if ((z > y)) {
            z = prod;
        }
    }
    else if (y < x && y < z) {
        y = sum;

        if (x > z) {
            x = prod;
        }
        else if ((z > x)) {
            z = prod;
        }
    }
    else if (z < y && z < x) {
        z = sum;

        if (x > y) {
            x = prod;
        }
        else if ((y > x)) {
            y = prod;
        }
    }

    printf("%f %f %f\n", x, y, z);

	return 0;
}
