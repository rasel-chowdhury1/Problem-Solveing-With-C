#include <stdio.h>

int checking(int t, int k, int a[])
{
    int i, count = 0;
    for (i = 0; i < t; i++)
    {

        if (a[i] == k)
            continue;
        else
            count++;
    }
    return count;
}
int main()
{
    int test_case, i;
    scanf("%d", &test_case);
    int arr[test_case];

    for (i = 0; i < test_case; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);

    printf("%d", checking(test_case, k, arr));
}
