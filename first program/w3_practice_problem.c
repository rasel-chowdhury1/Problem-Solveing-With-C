#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int ara[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int target;
    int target_lock = 0;
    int not_unique = 0;
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n-1; j++)
        {
            if (target == ara[i] + ara[j])
            {
                target_lock++;
                if (target_lock == 1)
                {
                    printf("YES");
                }
                break;
            }
            else
            {
                not_unique++;
                if (not_unique == 1)
                {
                    printf("NO");
                }
                break;
            }
        }
    }
}