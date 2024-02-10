#include <stdio.h>
int main()
{
    int i, j, x, y;
    int ara[5][5];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &ara[i][j]);
            if (ara[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    int ans, col, row;
    if (x > 2)
        row = x - 2;
    else
        row = 2 - x;
    if (y > 2)
        col = y - 2;
    else
        col = 2 - y;

    ans = row + col;
    printf("%d ", ans);
}