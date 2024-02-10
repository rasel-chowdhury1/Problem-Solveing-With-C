#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void input(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void asc(int a[], int n)
{
    int temp;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void desc(int b[], int n)
{
    int temp;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (b[i] < b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
}

void output(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[105], b[105], dif[105];
    input(a, n);
    input(b, n);
    asc(a, n);
    desc(b, n);
    for (int i = 1; i <= n; i++)
    {
        dif[i] = a[i] - b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", dif[i]);
    }
    return 0;
}
