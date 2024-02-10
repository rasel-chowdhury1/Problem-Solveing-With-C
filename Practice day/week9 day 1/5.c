#include <stdio.h>
int n_sum(int n)
{
    if (n == 0)
        return 0;
    int s = n_sum(n - 1);
    return s + n;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", n_sum(n));
}