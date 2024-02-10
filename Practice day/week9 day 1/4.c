#include <stdio.h>
void print_Nto1(int n)
{
    if(n==0)return;
    print_Nto1(n-1);
    printf("%d ",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    print_Nto1(n);
}