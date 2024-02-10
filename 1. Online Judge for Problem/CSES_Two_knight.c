#include <stdio.h>
#include <math.h>
int main()
{
    long long int n, ans;
    scanf("%d", &n);

    printf("%d",pow(n,2));

    // for (int i = 1; i <= n; i++)
    // {
    //     ans = ((i * i) * (i * i - 1)) / 2;
    //     ans -= (4 * (i - 1) * (i - 2));
    //     printf("%lld\n", ans);
    // }
}