#include <stdio.h>

void array_sort(int ara[], int n)
{
    int i, j, temp;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (ara[i] > ara[i + 1])
            {
                temp = ara[i];
                ara[i] = ara[i + 1];
                ara[i + 1] = temp;
            }
        }
    }
}

int median_value(int array[], int n)
{
    int median = 0;
    if (n % 2 == 0)
        median = (array[(n - 1) / 2] + array[n / 2]) / 2.0;
    else
        median = array[n / 2];

    return median;
}

int main()
{

    int arr[10000];
    int i, n;
    int median = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    array_sort(arr, n);
    median = median_value(arr, n);
    printf("%d", median);

    return 0;
}