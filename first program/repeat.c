#include <stdio.h>
int main()
{
    /*chek triangle:
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("This is equilateral");
    }
    else if (a == b || b == c || c == a)
    {
        printf("This is isosceles");
    }
    else
    {
        printf("this is scalene");
    }*/

    /*sum of two largest:

        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);
        int sum = a+b+c;
        if (a<b && a<c)
            printf("Sum of B and C: %d",sum - a);
        else if (b<a && b<c)
            printf("Sum of A and C: %d",sum - b);
        else
            printf("Sum of A and B: %d",sum -c); */

    /*int n, k, i, lastdigit;
    scanf("%d%d", &n, &k);
    for (i = 1; i <= k; i += 1)
    {
        lastdigit = n % 10;
        if (lastdigit != 0)
        {
            n -= 1;
        }
        else
        {
            n /= 10;
        }
    }
    printf("%d ", n);*/

    /*int n, k, i, sum, room, next_floor;
    scanf("%d%d", &n, &k);
    sum = 0;
    room = 101;
    next_floor = 2;
    for (i = 1; i <= (n * k); i++)
    {
        sum += room;
        room += 1;
        if (i % k == 0)
        {
            room = (100 * next_floor) + 1;
            next_floor += 1;
        }
    }
    printf("%d ", sum);*/

    /* int n,m;
     scanf("%d%d",&n,&m);
     if (m==1 && n==1)
     {
         printf("0");
     }
     else if (n>0 && m==1)
     {
         printf("%d",n-1);
     }
     else if (n==1 && m>0)
     {
         printf("%d",m-1);
     }
     else if (n>1 && m>1)
     {
         int type_domino = (m-1)*n;
         printf("%d",type_domino);
     }
     */

    // int n, pack, choc;
    // scanf("%d", &n);
    // choc = n;
    // pack = n;
    // for (pack = n; pack >= 4; pack)
    // {
    //     choc += pack / 4;
    //     pack = (pack / 4) + (pack % 4);
    // }
    // printf("%d", choc);
}