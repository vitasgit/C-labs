#include <stdio.h>

int nod(int a, int b)
{
    if (a % b == 0) {
        return b;
    }

    return nod(b, a % b);

}

int main()
{
    int a, b;
    int res;
    scanf("%d%d", &a, &b);

    res = nod(a, b);
    printf("%d\n", res);

    return 0;
}
