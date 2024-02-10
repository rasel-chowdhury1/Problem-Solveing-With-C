#include <stdio.h>
int main()
{
    // secMin:
    // int n = 6;
    // int ara[n];
    // int min = ara[0];
    // int secmin;
    // int i;

    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &ara[i]);
    // }
    // for (i = 0; i < n; i++)
    // {
    //     if (ara[i] < min)
    //     {
    //         secmin = min;
    //         min = ara[i];
    //     }
    //     else if (ara[i] < secmin)
    //     {
    //         secmin = ara[i];
    //     }
    // }
    // printf("%d", secmin);

    // number of even & odd:
    // int n, i;
    // int ara[100];
    // scanf("%d", &n);
    // int even_counter = 0, odd_counter = 0;
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &ara[i]);
    //     if (ara[i] % 2 == 0)
    //         even_counter++;
    //     else
    //         odd_counter++;
    // }
    // printf("No. of evens= %d\n", even_counter);
    // printf("No. of odds = %d", odd_counter);

    // int n,x,i;
    // int ara[200001];
    // scanf("%d",&n);
    // for ( i = 1; i <n; i++)
    // {
    //     scanf("%d",&x);
    //     ara[x]= 1;
    //     if (ara[i]==0)
    //     {
    //         printf("%d ",i);
    //         break;
    //     }

    // }

    int n, x, i;

    int ara[200001];
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        scanf("%d", &x);
        ara[x] = 1;
    }
    for ( i = 1; i <= n; i++)
    {
        if (ara[i]==0)
        {
            printf("%d",i);
            break;
        }
        
    }
    
}
