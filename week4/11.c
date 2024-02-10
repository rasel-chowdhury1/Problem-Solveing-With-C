#include<stdio.h>
int main()
{
    int m,x1=-1,y1=-1,x2=-1,y2=-1;
    scanf("%d",&m);
 
    int row[9],col[9],rowPos[9],colPos[9];
    for(int i=0; i<=8; i++)
    {
        row[i]=0;
        col[i]=0;
        rowPos[i]=0;
        colPos[i]=0;
    }
    for(int i=1; i<=m; i++)
    {
        int x,y;
        scanf("%d",&x);
        scanf("%d",&y);
        if(row[x]>=1 && x1==-1)
        {
            x1,x2,y1,y2;
            x1=x;
            y1=rowPos[x];
            x2=x;
            y2=y;
            printf("Safe rooks - %d\n",m-2);
            printf("%d %d\n",x1,y1);
            printf("%d %d\n",x2,y2);
        }
        if(col[y]>=1 && x1==-1)
        {
            x1,x2,y1,y2;
            x1=colPos[y];
            y1=y;
            x2=x;
            y2=y;
            printf("Safe rooks - %d\n",m-2);
            printf("%d %d\n",x1,y1);
            printf("%d %d\n",x2,y2);
        }
        row[x]++;
        col[y]++;
        rowPos[x]=y;
        colPos[y]=x;
    }
 
 
    /*
    For column
    4
    2 2
    3 3
    4 1
    1 3
    */
    return 0;
}
 