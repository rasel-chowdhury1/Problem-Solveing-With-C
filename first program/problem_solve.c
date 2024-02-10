#include <stdio.h>
int main()
{
    int n,m,i,t_h;
    scanf("%d%d",&n,&m);
    if(n<m)
    {
        for(i = n; i <= m; i++)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(t_h = n; t_h >= n; t_h++)
        {
            i = t_h % 24;
            if(i != m)
            {
                printf("%d ",i);
            }
            else
            {
                break;
            }
        }
    }
}
