#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int row, col, i, j;
    scanf("%d %d", &row, &col);
    int arr[100][100];

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (arr[i][j] == i && arr[i][j] == j)
            {
                arr[i][j] += 3;
            }
            else if (arr[i][j] == i)
            {
                arr[i][j] += 2;
            }
            else if (arr[i][j] == j)
            {
                arr[i][j] += 1;
            }
        }
    }

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
