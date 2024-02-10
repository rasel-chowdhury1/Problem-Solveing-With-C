#include <stdio.h>

void swap(int *x, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(x + i));
    }
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    swap(arr, n);
    // printf("%d %d", n, i);
}