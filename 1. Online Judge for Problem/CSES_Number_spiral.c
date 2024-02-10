#include <stdio.h>
int main()
{
    long long int t, row, col, x;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld %lld", &row, &col);
        if (row > col)
        {
            if (row % 2 == 0)
            {
                x = (row * row) - (col - 1);
                printf("%lld\n", x);
            }
            else
            {
                x = ((row - 1) * (row - 1)) + col;
                printf("%lld\n", x);
            }
        }
        else
        {
            if (col % 2 == 0)
            {
                x = ((col - 1) * (col - 1)) + row;
                printf("%lld\n", x);
            }
            else
            {
                x = (col * col) - (row - 1);
                printf("%lld\n", x);
            }
        }
    }
}
