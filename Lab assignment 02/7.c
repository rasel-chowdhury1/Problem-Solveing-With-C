#include <stdio.h>
void swap(int *ara, int n, int q)
{
    int L, R, i, temp;
    while (q--)
    {
        scanf("%d %d", &L, &R);
        for (i = 1; i <= n; i++)
        {
            if (i == L)
            {
                temp = *(ara + L);
                *(ara + L) = *(ara + R);
                *(ara + R) = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d ", *(ara + i));
    }
}
int main()
{
    int N, i, temp;
    scanf("%d", &N);
    int arr[1005];
    for (i = 1; i <= N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int Q;
    scanf("%d", &Q);
    swap(arr, N, Q);
    return 0;
}