#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char **argv)
{   
    float x, y, z;
    float max, min;
    float epsilon = 0.00001;
    bool isEqual = false;

    printf("Введите x, y, z: ");
    scanf("%f%f%f", &x, &y, &z);

    max = x;
    min = z;

    if (max < y) max = y;
    if (max < z) max = z;

    if (min > x) min = x;
    if (min > y) min = y;

    if (fabs(max - x) + fabs(max - y) + fabs(max - z) < epsilon) {
        printf("max(x, y, z): %f\n", x);
        isEqual = true;
    }
    else if (fabs(max - x) < epsilon) {
        if (fabs(max - y) < epsilon) {
            printf("max(x, y): %f\n", x);
        }
        else if (fabs(max - z) < epsilon) {
             printf("max(x, z): %f\n", x);
        }
        else {
            printf("max(x): %f\n", x);
        }
    }
    else if (fabs(max - y) < epsilon) {
        if (fabs(max - z) < epsilon) {
            printf("max(y, z): %f\n", y);
        }
        else {
            printf("max(y): %f\n", y);
        }
    }
    else {
        printf("max(z): %f\n", z);
    }

    if (isEqual == false) {
        if (fabs(min - x) < epsilon) {
            if (fabs(min - y) < epsilon) {
                printf("min(x, y): %f\n", x);
            }
            else if (fabs(min - z) < epsilon) {
                 printf("min(x, z): %f\n", x);
            }
            else {
                printf("min(x): %f\n", x);
            }
        }
        else if (fabs(min - y) < epsilon) {
            if (fabs(min - z) < epsilon) {
                printf("min(y, z): %f\n", y);
            }
            else {
                printf("min(y): %f\n", y);
            }
        }
        else {
            printf("min(z): %f\n", z);
        }
    }
	return 0;
}
