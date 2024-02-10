#include <stdio.h>

void solve(void)
{
    int n, k;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        while (i % 3 == 0 || i % 10 == 3)
        {
            i++;
            n++;
        }
        k = i;
    }
    printf("%d\n", k);
}
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        solve();
    }
}