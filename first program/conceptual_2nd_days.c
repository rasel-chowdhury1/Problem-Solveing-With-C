#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    printf("Enter the value of C: ");
    scanf("%d", &c);

    int sum = a + b + c;

    if (a < b && a < c)
    {
        printf("sum of B and C: %d", sum - a);
    }
    else if (b < c && b < a)
    {
        printf("sum of A and C: %d", sum - b);
    }
    else
    {
        printf("sum of A and B: %d", sum - c);
    }
}
