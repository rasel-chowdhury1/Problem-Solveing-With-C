#include <stdio.h>
int div_5(int ara[], int n);
int div_3(int ara[], int n);
int count(int ara[], int n);

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", count(arr, n));
}
int div_5(int ara[], int n)
{
    int i;
    int count = 0;
    for (i = 1; i <= n; i++)
    {
        if (ara[i] % 5 == 0)
        {
            count++;
        }
    }
    return count;
}
int div_3(int ara[], int n)
{
    int i;
    int count = 0;
    for (i = 1; i <= n; i++)
    {
        if (ara[i] % 3 == 0)
        {
            count++;
        }
    }
    return count;
}
int count(int ara[], int n)
{
    int i;
    int count = 0;
    for (i = 1; i <= n; i++)
    {
        if (ara[i] % 3 == 0 && ara[i] % 5 == 0)
        {
            count++;
        }
    }
    int check = div_5(ara, n) + div_3(ara, n) - count;

    if (check > 0)
        return check;
    else
        return -1;
}