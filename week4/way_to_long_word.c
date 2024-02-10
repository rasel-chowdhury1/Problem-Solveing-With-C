#include <stdio.h>
#include <string.h>
int main()
{
    char wtlw[100];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", &wtlw[i]);
    }
    int length = strlen(wtlw) - 1;
    if (wtlw[i] > 10)
    {
        printf("%c%d%c", wtlw[0], wtlw - 2, wtlw[i - 1]);
    }
    else
    {
        puts(wtlw);
    }
}