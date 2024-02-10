#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[101];
        scanf("%s", s);
        printf("%s", s);
        printf("%s\n", strrev(s));
    }
    return 0;
}