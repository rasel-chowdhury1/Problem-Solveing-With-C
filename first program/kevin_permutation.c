#include <stdio.h>
int main()
{
    int n,n1,n2,i;
    scanf("%d",&n);
    if(n%2==0)
    {
        n1 = n/2;
        n2 = n;
        for(i=1; i<=(n/2); i++)
        {
            printf("%d %d ",n1,n2);
            n1--;
            n2--;
        }
    }
    else
    {
        n1 =(n/2)+1;
        n2 =n;
        for(i=1; i<=(n/2); i++)
        {
            printf("%d %d ",n1,n2);
            n1--;
            n2--;
        }
        printf("1");
    }
}
