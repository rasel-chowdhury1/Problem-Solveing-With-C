#include <stdio.h>
#include <string.h>
int main()
{
    int t_case;
    scanf("%d", &t_case);
    while (t_case--)
    {
        char str[20];
        scanf("%s", str);
        int l = 0;
        int h = strlen(str) - 1;
        int count = 0;
        while (str[l] != '\0')
        {
            if (str[l] != str[h])
            {
                count = 1;
                break;
            }
            l++;
            h--;
        }
        if (count == 0)
        {
            int len = (strlen(str));
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