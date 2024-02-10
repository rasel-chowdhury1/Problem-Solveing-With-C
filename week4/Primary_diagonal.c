#include <stdio.h>
int main()
{
    int row, col, i, j;
    scanf("%d %d", &row, &col);
    int p_dia[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &p_dia[i][j]);
        }
    }
    if (row == col)
    {
        int check_diagonal = 1;
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (p_dia[i][j] != 0)
                {
                    check_diagonal = 0;
                }
            }
        }
        if (check_diagonal == 1)
        {
            printf("Diagonal\n");
        }
        else
        {
            printf("Not Diagonal");
        }
    }
    else
    {
        printf("Not Diagonal\n");
    }
}