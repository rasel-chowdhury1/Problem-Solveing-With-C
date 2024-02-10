#include<stdio.h>
int main()
{
    int i,j,n,sub;
    float x,avg,sum;
    scanf("%d",&n);
    scanf("%d",&sub);
    for ( i = 0; i < n; i++)
    {
        printf("Enter marks of %dth std: ",i);
        sum=0.0;
        for ( j = 0; j < sub; j++)
        {
            scanf("%f",&x);
            sum= sum+x;
        }
        avg = sum/sub;
        printf("Average= %.2f\n",avg);
    }
    
}
