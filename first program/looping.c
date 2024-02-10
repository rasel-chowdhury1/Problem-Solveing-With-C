#include <stdio.h>
int main()
{
    int n,i,sum;
    printf("Test Data: ");
    scanf("%d",&n);
    sum = 0;
    printf("The first %d natural number is:\n",n);

    for ( i =1; i<=n; i++)
    {
        printf("%d ",i);
        sum = sum + i;
    }
    printf("\nThe Sum of natural number upto %d terms : ",n);
    printf("%d",sum);

    return 0;
}
