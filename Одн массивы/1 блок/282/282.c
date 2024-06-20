#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Введите число n: ");
    scanf("%d", &n);
    float nums[2 * n];
    float res[2 * n];

    for (i = 0; i < 2 * n; i++) {
        nums[i] = i + 1;
        printf("%f ", nums[i]);
    }
    printf("\n");

    j = 0;
    for (i = 0; i < n; i++) {
        res[j] = nums[i];
        res[j+1] = nums[2*n-i-1];
        j += 2;
    }

    printf("\nб) ");
    for (i = 0; i < 2 * n; i++) {
        printf("%f ", res[i]);
    }

    printf("\nв) ");
    for (i = 0; i < n; i++) {
        res[i] = nums[i] + nums[2*n-i-1];
        printf("%f ", res[i]);
    }
    printf("\n");

    return 0;
}
