#include <stdio.h>

int delim_konfety(int a)
{
    if (a == 1) {
        return 1;
    }

    return 1 + delim_konfety(a - (a / 2));

}

int main()
{
    int konfet;
    scanf("%d", &konfet);

    int detey = delim_konfety(konfet);
    printf("%d\n", detey);

    return 0;
}
