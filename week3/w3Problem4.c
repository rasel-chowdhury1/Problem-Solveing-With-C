#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int ara[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d-", ara[i]);
        for (j = 1; j <= n; j++)
        {
            if (ara[i] != ara[j])
            {
                printf("%d ", ara[j]);
            }
        }
        printf("\n");
    }
}
