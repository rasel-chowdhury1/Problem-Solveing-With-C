#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int step = n/5 + (n%5!=0);
    /*if (n%5==0)
        step = n/5;
    else
        step = n/5 + 1;*/
    printf("%d",step);
    return 0;
}
