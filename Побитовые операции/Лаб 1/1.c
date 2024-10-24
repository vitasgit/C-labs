#include <stdio.h>
#include <limits.h>

int main()
{
    char x = -127;

    signed char sx;
    int inc_count = 0;
    int dec_count = 0;

    unsigned char ux;
    int inc_ucount = 0;
    int dec_ucount = 0;

    sx = x;
    while (sx < SCHAR_MAX) {
        sx++;
        inc_count++;
    }
    inc_count++;

    sx = x;
    while (sx > SCHAR_MIN) {
        sx--;
        dec_count++;
    }
    dec_count++;

    ux = (unsigned char)x;
    while (ux < UCHAR_MAX) {
        ux++;
        inc_ucount++;
    }
    inc_ucount++;

    ux = (unsigned char)x;
    while (ux > 0) {
        ux--;
        dec_ucount++;
    }
    dec_ucount++;

    printf("inc for sx: %d\n", inc_count);
    printf("dec for sx: %d\n", dec_count);

    printf("\n");
    printf("inc for ux: %d\n", inc_ucount);
    printf("dec for ux: %d\n", dec_ucount);

    return 0;
}