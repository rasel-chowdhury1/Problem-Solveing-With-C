#include<stdio.h>
int main()
{
    int a,b,c,d,n1,n2,first,sec;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b)
    {
        n1=a;
        first=b;
    }
    else
    {
        n1=b;
        first=a;
    }
    if(c>d)
    {
        n2=c;
        sec=d;
    }
    else
    {
        n2=d;
        sec=c;
    }
    if(n1<sec)
        printf("NO");
    else
    {
        if(n2<first)
            printf("NO");
        else
            printf("YES");
    }
    return 0;
}