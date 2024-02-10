#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n <= 9)
        {
            printf("%d\n", n);
        }
        else
        {
            int res = 9, count = 1, value = 10;
            for (int i = 10; i <= n; i += value)
            {
                if (count == 10)
                {
                    value *= 10;
                    count = 1;
                }
                res++;
                count++;
            }
            printf("%d\n", res);
        }
    }
}