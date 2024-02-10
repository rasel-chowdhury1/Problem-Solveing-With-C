#include <stdio.h>
int main()
{
    int n, sum = 0, i, digit;
    scanf("%d", &n);
    i = 0;
    while (n != 0)
    {
        digit = n % 10;
        sum += digit;
        n = n / 10;
        i++;
    }
    printf("%d", sum);
}