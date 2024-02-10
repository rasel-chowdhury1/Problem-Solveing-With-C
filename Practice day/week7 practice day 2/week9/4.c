#include <stdio.h>
void print_Nto1(int n)
{
    if (n == 0)
        return;
    printf("%d ", n);
    print_Nto1(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_Nto1(n);
}