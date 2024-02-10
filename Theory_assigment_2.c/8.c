#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char s[50000];
    int deci[5000];
    scanf("%s", s);
    scanf("%d", &n);
    int i = 0;
    int len = strlen(s);

    while (s[i] != '\0')
    {
        deci[i] = s[i] - '\0';
        deci[i] = deci[i] - 96;
        deci[i] += n;
        if (deci[i] > 26)
        {
            deci[i] = deci[i] - 26;
        }

        s[i] = deci[i];
        s[i] += 96;
        printf("%c", s[i]);
        i++;
    }

    return 0;
}
