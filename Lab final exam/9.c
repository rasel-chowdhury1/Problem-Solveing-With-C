#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min(int x, int y)
{
    if (x > y)
        return x;
    return y;
}
int gcd(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
            ans = i;
    }
    return ans;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, j;
        scanf("%d", &n);
        int arr[1005];
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int count = 0;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (i != j)
                {
                    if (gcd(arr[i], arr[j]) == 1)
                    {
                        count++;
                    }
                }

               // printf("i->%d, j->%d, count->%d\n", i, j, count);
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
