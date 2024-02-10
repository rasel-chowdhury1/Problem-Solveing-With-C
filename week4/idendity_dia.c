#include <stdio.h>
int main()
{
    int row, col, i, j;
    scanf("%d %d", &row, &col);
    int iden_dia[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &iden_dia[i][j]);
        }
    }
    if (row == col)
    {
        int check_dia = 1, x = iden_dia[0][0];
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (i == j)
                {
                    if (iden_dia[i][j] != 1)
                    {
                        check_dia = 0;                       
                    }
                    continue;
                }
                if (iden_dia[i][j] != 0)
                {
                    check_dia = 0;
                }
            }
        }
        if (check_dia == 1)
        {
            printf("Idendity\n");
        }
        else
        {
            printf("Not Idendity\n");
        }
    }
    else
    {
        printf("Not Idendity\n");
    }
}