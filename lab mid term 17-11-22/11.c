#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    while (n--)
    {
        int str[25];
        scanf(" %s", str);
        int count = 0;
        int line = 0;
        int len = strlen(str) - 1;
        while (str[line] != '\0')
        {
            if (str[line] != str[len])
            {
                count = 1;
                break;
            }
            line++;
            len--;
        }
        if (count == 0)
        {
            if (len > 7)
                printf("Case #2: %c%d%c\n", str[0], len - 2, str[len - 1]);
            else
                printf("Case #3: %s", str);
        }
        else       
            printf("Case #1: Not Pallindrome\n");        
    }

    return 0;
}
