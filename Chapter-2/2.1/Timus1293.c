#include <stdio.h>

int main()
{
    int n, a, b;

    scanf("%d%d%d", &n, &a, &b);

    int res = 2 * n * a * b;

    printf("%d", res);

    return 0;
}