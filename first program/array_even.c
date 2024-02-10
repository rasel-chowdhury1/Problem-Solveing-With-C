#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ara[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int sum = 0;
    for (i = 0; i < n; i++)
    {

        if (ara[i] % 2 == 1)
        {
            sum += ara[i];
        }
    }
    if (sum % 2 == 0)
    {
        printf("YES");
    }
    else if (sum % 2 != 0)
    {
        printf("NO");
    }
}
