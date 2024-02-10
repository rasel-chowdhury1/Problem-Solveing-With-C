#include <stdio.h>
int main()
{
    int x,a,b,s;
    printf("Enter an Input: ");
    scanf("%d %d %d",&x,&a, &b);

    if(x%2==0)
    {
        s = a+b;
        printf("Sum =%d",s);
    }
    else
    {
        s = a-b;
        printf("Sub =%d",s);
    }
    return 0;
}
