#include <stdio.h>
int solve(long long int i, long long int n)
{
    if (i > n)
        return 0;
    long long int s = solve(i + 1, n);
    return s + i;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    printf("%lld", solve(1, n));
}