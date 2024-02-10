#include <stdio.h>
int even_odd_sum(int ara[], int n)
{
    int e_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (ara[i] % 2 == 0)
        {
            if (i % 2 == 0)
            {
                e_sum += ara[i] + i;
            }
        }
        else if (ara[i] % 2 != 0)
        {

            if (i % 2 != 0)
            {
                e_sum += ara[i] + i;
            }
        }
    }
    return e_sum;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[1001];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d",even_odd_sum(arr,n));
    return 0;
}