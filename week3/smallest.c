#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int smallest = ara[0];
    for(i=0; i<n; i++)
    {
        if(ara[i]>smallest)
        {
            smallest = ara[i];
        }
    }
    int arr[smallest+1];
    for(i=0; i<=smallest; i++)
    {
        arr[i]=0;
    }
    for(i=0; i<n; i++)
    {
        arr[ara[i]]+=1;
    }
    int secMin = 0;
    for(i=0; i<=smallest; i++)
    {
        if(arr[i]==1)
        {
            secMin+=1;
        }
        if(secMin==2)
        {
            printf("Sec min: %d\n",i);
            break;
        }
    }
}


