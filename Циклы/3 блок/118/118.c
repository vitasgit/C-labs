#include <stdio.h>

int main() {
    int i, znak;
    double res, res2;

    // слева направо
    res = 1.0;
    znak = -1;
    for (i = 2; i <= 10000; i++) {
        res += znak * (1.0 / i);
        znak *= -1;
    }
    printf("a) %.15lf\n", res);

    // вычисляются отдельно слева направо
    res = 0.0;
    for (i = 1; i <= 9999; i += 2) {
        res += (1.0 / i);
    }
    res2 = 0.5;
    for (i = 4; i <= 10000; i += 2) {
        res2 += (1.0 / i);
    }
    res = res - res2;
    printf("б) %.15lf\n", res);

    //справа налево
    res = -1.0 / 10000;
    znak = 1;
    for (i = 9999; i >= 1; i--) {
        res += znak * (1.0 / i);
        znak *= -1;
    }
    printf("в) %.15lf\n", res);

    // вычисляются отдельно справа налево
    res = 1.0 / 9999;
    for (i = 9997; i >= 1; i -= 2) {
        res += (1.0 / i);
    }
    res2 = 1.0 / 10000;
    for (i = 9998; i >= 0.5; i -= 2) {
        res2 += (1.0 / i);
    }
    res = res - res2;
    printf("г) %.15lf\n", res);

    return 0;
}
