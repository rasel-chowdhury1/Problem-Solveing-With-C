#include <stdio.h>
void descending(char str[], int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (str[i] < str[j])
            {
                char temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }
    printf("%s", str);
}
int main()
{
    char S[1000];
    int len;
    scanf("%s", S);
    len = strlen(S);
    descending(S, len);
}