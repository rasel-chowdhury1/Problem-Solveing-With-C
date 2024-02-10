#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[22];
    scanf("%s", s);
    int a, b, i, sum = 0, plus, mul;
    scanf("%d %d", &a, &b);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '+')
        {
            plus = a + b;
            sum += plus;
        }
        if (s[i] == '*')
        {
            mul = a * b;
            sum += mul;
        }
    }
    printf("%d", sum);
    return 0;
}
