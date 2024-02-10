#include <stdio.h>
int main()
{
    int N, M, i, j;
    scanf("%d %d", &N, &M);
    int transpose[100][100], Matrix[100][100];

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &Matrix[i][j]);
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            transpose[j][i] = Matrix[i][j];
        }
    }
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}