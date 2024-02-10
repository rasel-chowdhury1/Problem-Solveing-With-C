#include <stdio.h>
int solve_power(int n, int m)
{
    if (m == 0)
        return 1;
    int power = solve_power(n, m - 1);
    return power * n;
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", solve_power(n, m));
}