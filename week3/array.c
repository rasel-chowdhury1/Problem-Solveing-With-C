#include <stdio.h>
int main()
{
    int n = 6;
    int ara[n];
    int min = ara[0];
    int i, secMin;

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0; i<n; i++)
    {
        if(ara[i]<min)
        {
            secMin = min;
            min = ara[i];
        }
        else if(ara[i]<secMin)
            secMin = ara[i];
    }

    printf("%d",secMin);
}
