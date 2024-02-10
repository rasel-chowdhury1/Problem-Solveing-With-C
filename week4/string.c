#include <stdio.h>
int main()
{
    char sen[1000];
    fgets(sen, sizeof(sen), stdin);

    int i = 0, count = 0;
    while (sen[i] != '\0')
    {
        if (sen[i] == 'a')
        {
            count++;
        }
        else if (sen[i] == 'e')
        {
            count++;
        }
        else if (sen[i] == 'i')
        {
            count++;
        }
        else if (sen[i] == 'o')
        {
            count++;
        }
        else if (sen[i] == 'u')
        {
            count++;
        }

        i++;
    }
    printf("No. of vowel = %d",count);
}