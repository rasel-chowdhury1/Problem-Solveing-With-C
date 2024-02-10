#include <stdio.h>
void pass_reference(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void pass_value(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    pass_value(a, b);
    printf("%d %d\n", a, b);
    return 0;
}