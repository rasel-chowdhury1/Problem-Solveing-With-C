#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t, n, a[102], large;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        large = a[0];
        for (int j = 1; j < n; j++)
        {

            if (a[j] > large)
            {
                large = a[j];
            }
        }
        printf("%d\n", large);
    }

    return 0;
}
