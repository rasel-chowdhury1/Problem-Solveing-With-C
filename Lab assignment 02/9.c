#include <stdio.h>
int isPrimeNumber(int *ara, int n)
{
    int i, j;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        int flag = 0;
        for (j = 2; j < ara[i]; j++)
        {
            if (ara[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            count++;
        }
    }
    return count;
}
float is_even_avg(int *ara, int n)
{
    int i;
    int sum = 0;
    float even_count = 0;
    for (i = 0; i < n; i++)
    {
        if (ara[i] % 2 == 0)
        {
            sum += ara[i];
            even_count += 1;
        }
    }
    return sum / even_count;
}
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Prime numbers: %d\n", isPrimeNumber(&arr, n));
    printf("Average of all even integers: %.2f\n", is_even_avg(&arr, n));
    return 0;
}