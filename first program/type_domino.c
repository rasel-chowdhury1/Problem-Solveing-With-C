#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the value of Row: ");
    scanf("%d", &n);
    printf("Enter the value of Column: ");
    scanf("%d", &m);
    
    if (m==1 && n==1)
    {
        printf("0");
    }
    else if (m==1 && n>1)
    {
        printf("%d",n-m);
    }
    else if (m>1 && n==1)
    {
        printf("%d",m-n);
    }
    else if (m>1 && n>1)
    {
        int domino = (m-1)*n;
        printf("%d",domino);
    }
    
    
    
}