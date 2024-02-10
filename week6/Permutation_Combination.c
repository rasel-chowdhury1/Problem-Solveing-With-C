#include <stdio.h>
int factorial(int n);
int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    int nPr = factorial(n) / factorial(n - r);
    int nCr = factorial(n) / (factorial(n - r) * factorial(r));

    printf("nPr = %d\n", nPr);
    printf("nCr = %d\n", nCr);
    return 0;
}
int factorial(int n)
{
    int i;
    int fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
