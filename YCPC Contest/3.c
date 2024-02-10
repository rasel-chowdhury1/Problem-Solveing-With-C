#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int i = 0;
    long long int x;

    while (n--)
    {
        scanf("%d", &x);
        if (sqrt(x)!=1)
        {
            x += 1;
        }

        printf("%d", x);
    }

    return 0;
}