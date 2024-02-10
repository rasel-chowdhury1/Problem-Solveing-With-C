#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int num[1000];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int value, position = -1;
    scanf("%d", &value);
    for (i = 0; i < n; i++)
    {
        if (value == num[i])
        {
            position = i + 1;
            break;
        }
    }
    if (position == -1)
    {
        printf("Item is not found.");
    }
    else
    {
        printf("Item is found at position %d", position);
    }
}