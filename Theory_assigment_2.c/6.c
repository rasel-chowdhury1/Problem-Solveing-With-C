#include <stdio.h>

int fact(int n)
{
    int i, facto = 1;
    for (i = 1; i <= n; i++)
    {
        facto *= i;
    }
    return facto;
}
float calculateRatio(int a, int b)
{
    float f1, f2;

    f1 = (float)fact(a);
    f2 = (float)fact(b);

    return (f1 / f2);
}

int main()
{
    int n, x, y;
    scanf("%d", &n);
    scanf("%d %d", &x, &y);
    printf("%d", fact(n));
    printf("\n%.2f", calculateRatio(x, y));
    return 0;
}