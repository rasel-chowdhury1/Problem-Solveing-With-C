#include<stdio.h>
int main()
{
    int a;
    int Age;
    printf("Enter your number: ");
    scanf("%d%d",&a,&Age);

    int x;
    x = a%Age;
    printf("The process is %d",x);
    return 0;
}
