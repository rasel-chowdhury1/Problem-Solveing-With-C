#include <stdio.h>
int main()
{
    int n, k, i, z, a;
    scanf("%d %d", &n, &k);
    a = n / 2;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    if (a >= k)
    {
        for (i = 2; i <= n; i += 2)
        {
            z = k * 2;
        }
        printf("\nThe %dth element in this sequence is %d. ", k, z);
    }
    else
    {
        for (i = 1; i <= n; i += 2)
        {
            z = ((k - a) * 2) - 1;
        }
        printf("\nThe %dth element in this sequence is %d. ", k, z);
    }
    return 0;
}