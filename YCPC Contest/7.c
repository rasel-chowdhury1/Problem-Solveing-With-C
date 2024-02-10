#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1)
            {
                printf("%d", j);
            }
            else if (j == 1)
            {
                printf("%d", i);
            }
            else if (i == n)
            {
                printf("%d", n - j + 1);
            }
            else if (j == n)
            {
                printf("%d", n - i + 1);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
