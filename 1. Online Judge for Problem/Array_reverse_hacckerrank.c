#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[1005];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = n; i >= 1; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}