#include <stdio.h>
void twice_fun(char a[], int l)
{
    for (int i = 0; i < l; i++)
    {
        if ((i + 1) % 2 == 0)
            printf("%c%c", a[i], a[i]);
        else
            printf("%c", a[i]);
    }
}
int main()
{
    char S[200];
    scanf("%s", &S);
    int len = strlen(S);
    twice_fun(S, len);
    return 0;
}