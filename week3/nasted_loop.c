#include <stdio.h>
int main()
{
    int i,j,n;
    float sum,avg,x;
    sum =0.0;
    for(i=1;i<=5;i++)
    {
        printf("Enter marks of %dth student: ",i);
        for(j=1;j<=3;j++)
        {
            scanf("%f",&x);
            sum+=x;
        }
    }
    avg = sum/3;
    printf("Average: %f\n",avg);

}
