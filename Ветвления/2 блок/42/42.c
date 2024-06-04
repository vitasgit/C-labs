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
        if () {
            
        }
        x = sum;
    }

    if (y < x && y < z) {
        y = sum;
    }

    if (z < y && z < x) {
        z = sum;
    }

    if (x > y && x > z) {
        x = prod;
    }

    if (y > x && y > z) {
        y = prod;
    }

    if (z > y && z > x) {
        z = prod;
    }

    printf("%f %f %f\n", x, y, z);



	return 0;
}
