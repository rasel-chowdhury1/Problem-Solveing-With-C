#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int t, n, i, j;
    int a[102];
    int checker1;
    float checker;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int count = 0;
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i]);
            checker = sqrt((double)a[i]);
            checker1 = checker;
            if (checker == checker1)
            {
                count++;
            }
        }
        if (count > 0)
        {
            printf("%d\n", count);
        }
        else
        {
            printf("-1\n");
        }
    }
}