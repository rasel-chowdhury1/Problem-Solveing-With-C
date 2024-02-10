#include <stdio.h>
#include <string.h>
int main()
{
    char a[100] = "International Cricket Council";
    char b[100];
    int len = strlen(a);
    int i, j;
    for (j = 0, i = len - 1; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    printf("%s", b);
}