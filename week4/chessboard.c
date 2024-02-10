#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int chess[5][5];

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            chess[i][j] = 0;
        }
    }
    for (i = 1; i <= n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        chess[x][y] = 1;
    }
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            if (chess[i][j] == 0)
            {                
                printf("%d %d\n", i, j);               
            }
        }
    }
}