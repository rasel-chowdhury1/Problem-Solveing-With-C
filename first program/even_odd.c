#include <stdio.h>
int main()
{
    long long int n, k, i, z, a;
    scanf("%lli %lli", &n, &k);
    a = (n + 1) / 2;
    if (a >= k)
    {
        for (i = 1; i <= n; i += 2)
        {
            z = (2 * k) - 1;
        }
        printf("%lli ", z);
    }
    else
    {
        for (i = 2; i <= n; i += 2)
        {
            z = (k - (n + 1) / 2) * 2;
        }
        printf("%lli ", z);
    }
}
