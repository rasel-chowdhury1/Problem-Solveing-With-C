#include <stdio.h>
int main()
{
    int n, i, x;
    scanf("%d", &n);
    x = 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            x++;
            break;
        }
    }

    if (x == 0 && n != 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Composite");
    }

    return 0;
}
