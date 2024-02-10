#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t, n, c, i, j, sum;
    int a[10001];
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &c);
        sum = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i]);
            sum += 2 * a[i];
        }
        if (sum >= c)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }

    return 0;
}