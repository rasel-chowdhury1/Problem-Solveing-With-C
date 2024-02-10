#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int ara[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int _short;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ara[i] > ara[j])
            {
                _short = ara[i];
                ara[i] = ara[j];
                ara[j] = _short;
            }
        }
    }

    int small = ara[0];
    for (i = 0; i < n; i++)
    {
        if (ara[i] < small)
        {
            small = ara[i];
        }
    }
    int k;
    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        small = ara[i];
    }
    printf("%d", small);
}