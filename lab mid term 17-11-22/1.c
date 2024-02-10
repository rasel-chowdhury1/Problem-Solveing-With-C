#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i;
    char str[25];
    char arr[25];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf(" %s", str);
        int len = strlen(str);
        strcpy(arr, str);
        strrev(arr);
        int s = strcmp(str, arr);
        if (s == 0)
        {

            if (len > 7)
            {
                printf("Case #2: %c%d%c\n", str[0], len - 2, str[len - 1]);
            }
            else
            {
                printf("Case #3: %s\n", str);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome\n");
        }
    }

    return 0;
}
