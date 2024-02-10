#include <stdio.h>
#include <stdbool.h>

void Tictactoebox(int arr[][4], int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[i][j] == -1)
            {
                printf(" ");
            }
            if (arr[i][j] == 1)
            {
                printf("X");
            }
            if (arr[i][j] == 2)
            {
                printf("O");
            }

            if (j < n)
            {
                printf("\t|\t");
            }
        }
        if (i < n)
        {
            printf("\n_________________________________");
        }
        printf("\n\n");
    }
}

int checkWin(int arr[][4], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (arr[i][1] == arr[i][2] && arr[i][2] == arr[i][3] && arr[i][1] != -1)
        {
            return arr[i][1];
        }
    }
    for (int j = 1; j <= n; j++)
    {
        if (arr[1][j] == arr[2][j] && arr[2][j] == arr[3][j] && arr[1][j] != -1)
        {
            return arr[1][j];
        }
    }
    if (arr[1][1] == arr[2][2] && arr[2][2] == arr[3][3] && arr[1][1] != -1)
    {
        return arr[1][1];
    }
    if (arr[1][3] == arr[2][2] && arr[2][2] == arr[3][1] && arr[1][3] != -1)
    {
        return arr[1][3];
    }
    return -1;
}

void whoWinprint(int arr[][4], int n, int who)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (arr[i][j] == who)
            {
                if (arr[i][j] == 1)
                {
                    if (arr[i][1] == arr[i][2] && arr[i][2] == arr[i][3] && arr[i][1])
                    {
                        printf("X");
                    }
                    else if (arr[1][j] == arr[2][j] && arr[2][j] == arr[3][j] && arr[1][j])
                    {
                        printf("X");
                    }
                    else if (arr[1][1] == arr[2][2] && arr[2][2] == arr[3][3] && arr[1][1])
                    {
                        printf("X");
                    }
                    else if (arr[1][3] == arr[2][2] && arr[2][2] == arr[3][1] && arr[1][3])
                    {
                        printf("X");
                    }
                }
                else
                {
                    if (arr[i][1] == arr[i][2] && arr[i][2] == arr[i][3] && arr[i][1])
                    {
                        printf("O");
                    }
                    else if (arr[1][j] == arr[2][j] && arr[2][j] == arr[3][j] && arr[1][j])
                    {
                        printf("O");
                    }
                    else if (arr[1][1] == arr[2][2] && arr[2][2] == arr[3][3] && arr[1][1])
                    {
                        printf("O");
                    }
                    else if (arr[1][3] == arr[2][2] && arr[2][2] == arr[3][1] && arr[1][3])
                    {
                        printf("O");
                    }
                }
            }
            else
            {
                printf(" ");
            }

            if (j < n)
            {
                printf("\t|\t");
            }
        }
        if (i < n)
        {
            printf("\n---------------------------------");
        }
        printf("\n");
    }
}
int main()
{
    int n = 3;
    int arr[4][4];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr[i][j] = -1;
        }
    }
    bool Player1 = true;
    bool Player2 = false;

    while (true)
    {
        Tictactoebox(arr, n);
        if (Player1)
        {
            int r, c;
        tryagain:
            printf("Player 1 Turn (X), Enter your Row and Column: ");
            scanf("%d %d", &r, &c);
            if (arr[r][c] != -1)
            {
                printf("There is an another player's cell.\n");
                goto tryagain;
            }

            arr[r][c] = 1;

            Player1 = false;
            Player2 = true;
        }
        else
        {
            int r, c;
        please_tryagain:
            printf("Player 2 Turn (O), Enter your Row and Column: ");
            scanf("%d %d", &r, &c);
            if (arr[r][c] != -1)
            {
                printf("There is an another player's cell.\n");
                goto please_tryagain;
            }
            arr[r][c] = 2;
            Player2 = false;
            Player1 = true;
        }
        if (checkWin(arr, n) == 1)
        {
            whoWinprint(arr, n, 1);
            printf("Congratulations, Player 1 Won!\n");
            break;
        }
        else if (checkWin(arr, n) == 2)
        {
            whoWinprint(arr, n, 2);
            printf("Congratulations, Player 2 Won!\n");
            break;
        }
    }
}