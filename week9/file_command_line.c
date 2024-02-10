//Terminal theke input: 
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        sum += a;
    }
    printf("sum -> %d", sum);
}

// < this symbol use for input
// > this for output show