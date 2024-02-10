#include <stdio.h>
int main()
{
    long long int n;
    scanf("%d",&n);
    while(n>1)
    {
        printf("%d ",n);
        if(n%2==0)
        {
            n/=2;
        }
        else
        {
            n=3*n+1;
        }
        //printf("%d ",n);
    }
    printf("%d ",n);


    return 0;
}
