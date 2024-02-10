#include <stdio.h>
int main()
{
    int t, a, b, c, i;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a > b && c > b && c > a)
            printf("%d\n", a);
        else if (a > b && c > b && a > c)
            printf("%d\n", c);
        else if (a > b && b > c && a > c)
            printf("%d\n", b);
        else if (a < b && b < c && c > a)
            printf("%d\n", b);
        else if (a < b && b > c && c > a)
            printf("%d\n", c);
        else if (a < b && b > c && c < a)
            printf("%d\n",a);
    }
}