#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ara[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int unique = ara[0];
    for (i = 1; i <= n; i++)
    {
        if (unique == ara[i+1])
        {
            printf("YES");
            break;
        }
        else if (unique != ara[i+1])
        {
            printf("NO");
            break;
        }
    }
    
}
