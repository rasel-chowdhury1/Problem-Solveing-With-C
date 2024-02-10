#include <stdio.h>
int main()
{
    int test_case, i, num;
    scanf("%d", &test_case);
    while (test_case--)
    {
        int a, b, c, d;
        scanf("%d", &num);
        a = (num - 12) / 4;
        b = a + 2;
        c = a + 4;
        d = a + 6;
        printf("%d %d %d %d\n", a, b, c, d);
    }
    return 0;
}