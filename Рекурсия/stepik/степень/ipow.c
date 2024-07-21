#include <stdio.h>

long long int ipow(long long int a, unsigned int n, unsigned int *depth)
{
    long long int res;

    if (n == 0) {
        *depth = 1;
        return 1;
    }
    if (n == 1) {
        *depth = 1;
        return a;
    }

    if (n % 2 == 0) {
        res = ipow(a*a, n/2, depth);
    }
    else {
        res = a * ipow(a, n-1, depth);
    }

    *depth += 1;

    return res;
}

int main()
{
    long long int a, res;
    unsigned int n;
    unsigned int depth;

    scanf("%lli%u", &a, &n);

    res = ipow(a, n, &depth);
    printf("%lli %u\n", res, depth);

    return 0;
}
