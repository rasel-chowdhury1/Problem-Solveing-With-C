#include <stdio.h>
#include <string.h>
void ascending_string(char *str, char *S)
{
    int n = 1000, i, j, len;
    int freq[n];
    len = strlen(str);
    for (int i = 0; i < n; i++)
    {
        freq[i] = 0;
    }
    for (i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }
    for (i = 0, j = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            while (freq[i] > 0)
            {
                S[j] = i;
                j++;
                freq[i]--;
            }
        }
    }
    S[j] = '\0';
}
int main()
{
    char s[50], a[50];
    scanf("%s", s);
    ascending_string(s, a);
    printf("%s", a);
    return 0;
}
