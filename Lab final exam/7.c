#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int w = 1; w <= t; w++)
    {

        int n, found;
        scanf("%d", &n);
        int arr[1005];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int s, flag = 0;
        scanf("%d", &s);
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == s)
            {
                found = i;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("Case %d: %d\n", w, found);
        }
        else if (flag == 0)
        {
            printf("Case %d: Not Found\n", w);
        }
    }

    return 0;
}
