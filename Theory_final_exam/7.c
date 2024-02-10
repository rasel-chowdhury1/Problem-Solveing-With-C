#include <stdio.h>
int main()
{
    int N, M, i, j;
    scanf("%d %d", &N, &M);
    int matrix1[100][100];
    int matrix2[100][100];
    int add_matrix[100][100];

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            add_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%d ", add_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}