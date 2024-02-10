#include <stdio.h>
int main()
{
    char s[100];
    int i, flag = 1, sum = 0, n = 1;
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        s[i] = s[i] - 96;
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        sum += s[i];
    }

    while (sum != 1)
    {

        if (sum % 2 != 0)
        {
            flag = 0;
        }
        sum = sum / 2;
        flag = 1;
    }
    if (flag == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}