#include <stdio.h>
int sum_LD(int arr[], int n)
{
    if (n == 0)
        return 0;
    int s = sum_LD(arr + 1, n - 1);

    return s + *(arr) % 10;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", sum_LD(arr, n));
}