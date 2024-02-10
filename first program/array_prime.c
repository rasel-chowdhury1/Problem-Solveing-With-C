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
    int check = 0;
    int prime[10], range = 0;
    int prime_count = 0;
    for (i = 0; i < n; i++)
    {
        check = 0;
        for (j = 2; j < ara[i]; j++)
        {

            if (ara[i] % j == 0)
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            prime[range] = ara[i];
            prime_count++;
            range++;
        }
    }
    printf(" %d\n",prime_count);
    for (i = 0; i < range; i++)
    {
        printf("%d ", prime[i]);
    }
}
