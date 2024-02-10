#include <stdio.h>
int main()
{
    int player1, player2, player3, player4, group1, group2, winner1, winner2;
    scanf("%d%d%d%d",&player1,&player2,&player3,&player4);
    if(player1>player2)
    {
        group1 = player1;
        winner1 = player2;
    }
    else
    {
        group1 = player2;
        winner1 = player1;
    }
    if(player3>player4)
    {
        group2 = player3;
        winner2 = player4;
    }
    else
    {
        group2 = player4;
        winner2 = player3;
    }
    if(group1<winner2)
        printf("No");
    else
    {
        if(group2<winner1)
            printf("No");
        else
            printf("Yes");
    }
}
