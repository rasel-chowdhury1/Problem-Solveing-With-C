#include <stdio.h>
int main()
{
    int i,n;
    int ara[200002];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int moves = 0;
    for(i=1;i<n;i++)
    {
        if(ara[i]<ara[i-1] && ara[i]>0)
        {
            moves+=(ara[i-1]-ara[i]);
            ara[i]=ara[i-1];
        }
    }
    printf("%d",moves);
}
