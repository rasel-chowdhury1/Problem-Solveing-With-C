#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t, maiden = 0;
    scanf("%d", &t);
    int run[100][100];

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &run[i][j]);
        }
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            maiden += run[i][j];
        }
        if (maiden != 0)
        {
            printf("NO\n");
        }
        if (maiden == 0)
        {
            printf("YES\n");
        }
        maiden = 0;
    }

    return 0;
}