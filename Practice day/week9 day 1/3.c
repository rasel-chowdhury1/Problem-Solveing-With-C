#include <stdio.h>
void print_1toN(int n)
{
    if (n == 0)
        return;
    print_1toN(n - 1);
    printf("%d ", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_1toN(n);
}