#include <stdio.h>
/*void pos_neg(int n)
{
    Problem :01
    int i;
    if (n > 0)
    {
        for (i = n; i >= -n; i--)
            printf("%d ", i);
    }
    else
    {
        for (i = n; i <= -n; i++)
            printf("%d ", i);
    }
}*/
/*void pattern(int n)
{
    Problem :02
    int i;
    int star = n;
    int space = 0;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
        star--;
        space++;
    }
}*/
/*
int fir_last(int n)
{
    problem :03
    int arr[n];
    int sum = 0;
    int first = 0;
    int ssum, i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        int last = arr[i] % 10;
        int fast = arr[i] / 1000;
        first += fast;
        sum += last;
        ssum = (sum + first);
    }
    return ssum;
}*/

int main()
{
    int n, i;
    scanf("%d", &n);
    
}
