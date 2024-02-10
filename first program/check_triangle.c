#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    if (a==b && b==c)
    {
        printf("This is an equilateral triangle");
    }
    else if ( a==b || a==c || b==c)
    {
        printf("This is an isosceles triangle");
    }
    else
    {
        printf("This is a scalene triangle");
    }
}