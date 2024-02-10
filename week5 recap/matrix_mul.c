#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], MUL[10][10];
    int row, col, row1, col1;
    int i, j, k, sum = 0;

    scanf("%d %d", &row, &col);
    scanf("%d %d", &row1, &col1);

    while (col != row1)
    {
        printf("First column and Second row is not match! Try Again!!\n ");
        return 0;
    }

    // A[i][j] input:
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // B[i][j] input:
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix mul:
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col1; j++)
        {
            for (k = 0; k < col; k++)
            {
                sum += A[i][k] * B[k][j];
            }
            MUL[i][j] = sum;
            sum = 0;
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("%d ", MUL[i][j]);
        }
        printf("\n");
    }
}