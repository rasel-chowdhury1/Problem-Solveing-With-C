#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ara[n];
    ara[0] = 0;
    ara[1] = 1;
    for (i = 2; i < n; i++)
    {
        ara[i] = ara[i - 1] + ara[i - 2];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }
}