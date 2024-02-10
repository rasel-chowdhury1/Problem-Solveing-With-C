#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int toss,j, i, n;
    scanf("%d", &toss);
    char string[50];
    for (i = 0; i < toss; i++)
    {
        int  Head = 0, taill = 0;
        scanf("%d", &n);
        scanf("%s",string);
        for (j = 0; j < n; j++)
        {
            if (string[j] == 'H')
            {
                Head++;
            }
            if (string[j] == 'T')
            {
                taill++;
            }
        }
        if (Head > taill)
        {
            printf("England\n");
        }
        else
        {
            printf("Pakistan\n");
        }
    }

    return 0;
}