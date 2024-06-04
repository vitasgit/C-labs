#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) 
{   
    float x, y, z;
    float eps = 0.000001;

    printf("Введите x, y, z: ");
    scanf("%f%f%f", &x, &y, &z);
    
    if (x + y + z < 1) {
        if (x < y && x < z) {
            x = (y + z) / 2;
        }
        else if (y < x && y < z) {
            y = (x + z) / 2;
        }
        else if (z < x && z < y) {
            z = (x + y) / 2;
        }
    }
    else {
        if (x < y && x < z) {
            x = (y + z) / 2;
        }
        else if (y < x && y < z) {
            y = (x + z) / 2;
        }
    }

    if ((fabs(x - y) < eps) || (fabs(x - z) < eps) || (fabs(y - z) < eps)) {
        printf("Числа не являются попарно различными\n");
    }
    else {
        printf("%f %f %f\n", x, y, z);
    }
    

	return 0;
}
