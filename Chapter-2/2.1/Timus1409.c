#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int a_prime = (b - 1);
    int b_prime = (a - 1);

    printf("%d %d", a_prime, b_prime);

    return 0;
}