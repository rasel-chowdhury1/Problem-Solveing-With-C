#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int ara[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (ara[i] == ara[j])
            {
                continue;
            }
            else if (ara[i] != ara[j])
            {
                printf("%d ", ara[i][j]);
            }
        }
    }
}