#include <stdio.h>

int solve(int arr[], int i, int n)
{
    if (i == n)
        return 0;
    int s = solve(arr, i + 1, n);
    return s + arr[i];
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

    printf("%d", solve(arr, 0, n));
}