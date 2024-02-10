#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000005];
    scanf(" %s", str);
    int len = strlen(str);
    int count = 1;
    int maxx = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == str[i - 1])
            count++;
        else
            count = 1;
        if (count > maxx)
            maxx = count;
    }
    printf("%d", maxx);

    return 0;
}