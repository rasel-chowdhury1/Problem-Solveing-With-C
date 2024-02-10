#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    int flag = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += i * flag;
        if (i % 3 == 0)
        {
            if (flag == 1)
                flag = -1;
            else if (flag == -1)
                flag = 1;
        }
    }
    printf("%d\n", sum);
    return 0;
}