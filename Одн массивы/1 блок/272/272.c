#include <stdio.h>

int main()
{   
    float rainfall[23] = {559, 501, 462, 533, 447, 535, 640, 456, 401, 314, 421, 335, 397, 529, 561, 473, 422, 357, 426, 362, 276, 383, 411};
    float deviation, average;
    float summ = 0.0;
    int i, year = 2000;

    for (i = 0; i < 23; i++) {
        summ += rainfall[i];
    }

    average = summ / 23;
    for (i = 0; i < 23; i++) {
        year += 1;
        deviation = rainfall[i] - average;
        printf("откл %d: %f\n", year, deviation);
    }

    printf("среднее: %f\n", average);
    
    return 0;
}
