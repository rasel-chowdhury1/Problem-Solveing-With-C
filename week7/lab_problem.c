#include <stdio.h>

void hash(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("#");
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        hash(i);
    }
}