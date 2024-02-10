#include <stdio.h>
int main()
{
    int row, col, i, j;
    scanf("%d %d", &row, &col);
    int sca_dia[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &sca_dia[i][j]);
        }
    }
    if (row == col)
    {
        int check_dia = 1, x = sca_dia[0][0];
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (i == j)
                {
                    if (sca_dia[i][j] != x)
                    {
                        check_dia = 0;                       
                    }
                    continue;
                }
                if (sca_dia[i][j] != 0)
                {
                    check_dia = 0;
                }
            }
        }
        if (check_dia == 1)
        {
            printf("Scalar\n");
        }
        else
        {
            printf("Not Scalar\n");
        }
    }
    else
    {
        printf("Not Scalar\n");
    }
}