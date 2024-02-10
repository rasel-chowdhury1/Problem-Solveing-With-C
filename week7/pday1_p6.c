#include <stdio.h>
int main()
{
    int a, b, c, *p;
    scanf("%d %d %d", &a, &b, &c);
    p = &a;
    *p += b;
    *p += c;
    printf("%d\n", a);
}