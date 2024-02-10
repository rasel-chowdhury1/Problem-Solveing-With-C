#include <stdio.h>

void find_max_min(int n, int ara[], int *p, int *q)
{
    *p = ara[0]; // Max
    *q = ara[0]; // Min

    int i;
    for (i = 0; i < n; i++)
    {
        if (ara[i] > *p)
            *p = ara[i];
        if (ara[i] < *q)
            *q = ara[i];
    }
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
    int maxx, minn;
    find_max_min(n, arr, &maxx, &minn);

    printf("Max-->%d\nMin-->%d\n", maxx, minn);
}