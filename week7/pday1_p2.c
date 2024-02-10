#include <stdio.h>
 
int sort(int n, int a[])
{
    int i = 0, j = 0, temp = 0;
 
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}
int maxx(int n, int a[], int k)
{
    return a[n - k];
}
int minn(int k, int a[])
{
    return a[k - 1];
}
 
int main()
{
    int t, i;
    scanf("%d", &t);
    int arr[t];
    // Array input-->
    for (i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    // k-th position-->
    int k;
    scanf("%d", &k);
    sort(t, arr);
    // Printing k-th maxx and min value:
    printf("%dth largest element = %d\n", k, maxx(t, arr, k));
    printf("%dth smallest element = %d\n", k, minn(k, arr));
}
