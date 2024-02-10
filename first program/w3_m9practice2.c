#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int query;
    scanf("%d",&query);
    int index, add_value;
    for(j =0; j<query ; j++)
    {
        scanf("%d %d",&index,&add_value);
        arr[index]=arr[index]+add_value;
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }    
}