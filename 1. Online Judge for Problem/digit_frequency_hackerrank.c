#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    int i, arr[10] = {0};
    scanf("%s", str);
    int len = strlen(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            arr[str[i] - 48]++;
        }
    }

    for (i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
