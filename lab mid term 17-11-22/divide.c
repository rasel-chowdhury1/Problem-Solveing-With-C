#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    long long int n, div;
    scanf("%lld", &n);
    if (n % 3 != 0)
    {
        printf("-1");
    }
    else
    {
        div = n / 3;
        printf("%lld", div);
    }

    return 0;
}
