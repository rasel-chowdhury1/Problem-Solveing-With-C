#include <stdio.h>
#include <string.h>
#include <math.h>
int is_7present(int *ara, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        while (ara[i] != 0)
        {
            int flag = ara[i] % 10;
            if (flag == 7)
                count++;
            ara[i] /= 10;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    float half = n / 2.0;
    int cel_value = ceil(half);
    if (is_7present(&arr, n) >= cel_value)
        printf("Beautiful");
    else
        printf("Ugly");
    return 0;
}