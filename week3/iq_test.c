#include <stdio.h>
int main()
{
    int ara[101];
    int n,i,imposter;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int even_counter = 0, odd_counter = 0;
    for(i=1; i<=n; i++)
    {
        if(ara[i]%2==0)
            even_counter++;
        else
            odd_counter++;
    }
    if(even_counter==1)
    {
        for(i=1; i<=n; i++)
        {
            if(ara[i]%2==0)
                imposter = i;
        }
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            if(ara[i]%2!=0)
                imposter = i;
        }
    }
    printf("%d",imposter);
}

