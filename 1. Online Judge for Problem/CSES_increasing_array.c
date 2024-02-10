#include <stdio.h>
#include <string.h>

int main()
{
    long long int n;
    int i; 
    int arr[200002];
    scanf("%lld", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long int moves = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < arr[i - 1] && arr[i] > 0)
        {
            moves += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    printf("%lld", moves);

    return 0;
}