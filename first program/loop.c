#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    scanf("%d",&n);
    printf("The first %d natural number is:\n",n);
    for(n=1; n<=7; n++)
    {
        printf("%d ",n);
        sum = sum + n;
    }
    printf("\nThe Sum of Natural Number upto %d terms : %d",n,sum);

    return 0;
}
