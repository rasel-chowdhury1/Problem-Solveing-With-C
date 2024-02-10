#include <stdio.h>
int main()
{
    int row, col, i, j, k, sum = 0;
    scanf("%d %d", &row, &col);
    int A[row][col], B[row][col], Mul[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            for (k = 0; k < col; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }
            Mul[i][j] = sum;
            sum = 0;
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", Mul[i][j]);
        }
        printf("\n");
    }
}