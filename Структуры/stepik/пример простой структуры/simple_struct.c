struct Time {
    int h;
    int m;
};

#include <stdio.h>

int main()
{
    struct Time t;
    scanf("%d:%d", &t.h, &t.m);
    printf("%02d:%02d\n", t.h, t.m);
    return 0;
}
