#include <stdio.h>
int main()
{
    //problem: 1^2-2^2+3^2-4^4+----;
    int n, i, sum, e = 0, o = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            e += pow(i, 2);
        }
        if (i % 2 != 0)
        {
            o += pow(i, 2);
        }
        sum = o - e;
    }
    printf("%d",sum);
}