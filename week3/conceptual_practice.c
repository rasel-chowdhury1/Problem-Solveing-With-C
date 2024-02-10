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
    int largest = ara[0];
    for(i=0; i<n; i++)
    {
        if(ara[i]>largest)
        {
            largest = ara[i];
        }
    }
    int arr[largest+1];
    for(i=0; i<=largest; i++)
    {
        arr[i]=0;
    }
    for(i=0; i<n; i++)
    {
        arr[ara[i]]+=1;
    }
    int find_large;
    scanf("%d",&find_large);
    int count = 0;
    for(i=largest; i>=1; i--)
    {
        if(arr[i]==1)
        {
            count+=1;
        }
        if(count==find_large)
        {
            printf("%dth largest value is %d",find_large,i);
            break;
        }
    }
}


