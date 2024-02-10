#include <stdio.h>
int main()
{
    int n, i, j, temp, iteration;
    iteration = 5;
    int bubble[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    n = 11;
    for (j = 0; j < iteration; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (bubble[i] > bubble[i + 1])
            {
                temp = bubble[i];
                bubble[i] = bubble[i + 1];
                bubble[i + 1] = temp;
            }
        }
        for (i = 0; i < n; i++)
        {
            printf("%d ", bubble[i]);
        }
        printf("\n");
    }
}
