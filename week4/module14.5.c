#include <stdio.h>
#include <string.h>
int main()
{
    int m, i;
    scanf("%d", &m);
    char ch[1000];
    char s[100];
    for (i = 0; i < m; i++)
    {
        scanf("%s", ch);
        if (ch[i] != '\0')
        {
            s[i] = ch[i];
            s[i]++;
        }
    }
    puts(s);
}