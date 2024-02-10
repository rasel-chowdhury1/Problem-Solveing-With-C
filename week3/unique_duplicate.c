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
            largest=ara[i];
        }
    }
    int arr[largest+1];
    for(i=0; i<largest; i++)
    {
        arr[i]=0;
    }
    for(i=0; i<n; i++)
    {
        arr[ara[i]]+=1;
    }
    int unique = 0, duplicate =0;
    for(i=0; i<=largest; i++)
    {
        if(arr[i]==1)
        {
            unique+=1;
        }
        else if(arr[i]>1)
        {
            duplicate+=1;
        }
    }
    printf("Total duplicate number found = %d\n",duplicate);
    printf("Total unique number found = %d\n",unique);
}
