#include <stdio.h>
int main()
{
    int n, i, j, sumd1 = 0, sumd2 = 0, sumRow, sumCol, flag = 0;
    n = 3;
    int matrix[3][3];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                sumd1 += matrix[i][j];
            }
            if (i + j == n - 1)
            {
                sumd2 += matrix[i][j];
            }
        }
    }

    if (sumd1 != sumd2)
    {
        flag = 1;
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            sumCol = 0;
            sumRow = 0;
            for (j = 0; j < n; j++)
            {
                sumCol += matrix[j][i];
                sumRow += matrix[i][j];
            }
            if (sumCol != sumd1)
            {
                flag = 1;
            }
            else if (sumRow != sumd1)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
    }
    if (flag == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}