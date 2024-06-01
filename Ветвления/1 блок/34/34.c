#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{   
    float x, y, z;
    float eps = 0.0000001;

    printf("Введите x, y, z: ");
    scanf("%f%f%f", &x, &y, &z);

    if ((fabs(x - y) < eps) && (fabs(y - z) < eps)) {
        printf("max(x,y,z): %f\n", x);
        printf("min(x,y,z): %f\n", x);
    }
    else if (fabs(x - y) < eps) {
        if (z < y) {
            printf("max(x,y): %f\n", x);
            printf("min(z): %f\n", z);
        }
        if (z > y) {
            printf("max(z): %f\n", z);
            printf("min(x, y): %f\n", x); 
        }
    }
    else if (fabs(x - z) < eps) {
        if (y < x) {
            printf("max(x,z): %f\n", x);
            printf("min(y): %f\n", y);
        }
        if (y > x) {
            printf("max(y): %f\n", y);
            printf("min(x, z): %f\n", x); 
        }
    }
    else if (fabs(y - z) < eps) {
        if (x < y) {
            printf("max(y,z): %f\n", y);
            printf("min(x): %f\n", x);
        }
        if (x > y) {
            printf("max(x): %f\n", x);
            printf("min(y, z): %f\n", y); 
        }
    }
    
	return 0;
}
