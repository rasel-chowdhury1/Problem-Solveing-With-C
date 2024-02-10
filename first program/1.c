#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    printf("Enter the value of C: ");
    scanf("%d",&c);

    if(a>b && a>c)
        printf("A is bigger");
    else if(b>a && b>c)
        printf("B is bigger");
    else if(c>a && c>b)
        printf("C is bigger");
    else if(a==b && b>c)
        printf("A and B both are bigger");
    else if(b==c && c>a)
        printf("B and C both are bigger");
    else if(c==a && a>b)
        printf("A and C both are bigger");
    else
        printf("They are equal");

    return 0;
}
