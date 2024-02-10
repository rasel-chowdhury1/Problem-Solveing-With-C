#include <stdio.h>
int main()
{
    // Problem: 01-->
    /*char ascen[1000];
    scanf("%s", ascen);
    int n = strlen(ascen), largestElement = 26;

    int asc[largestElement + 1];

    for (int i = 0; i <= largestElement; i++)
    {
        asc[i] = 0;
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        asc[(ascen[i] - 'a') + 1]++;
    }
    for (int i = 1; i <= 26; i++)
    {
        if (asc[i] >= 1)
        {
            total++;
        }
    }
    int nxt = 0;
    while (nxt != total)
    {
        int max = -1, index = -1;
        char ch;
        for (int i = 1; i <= 26; i++)
        {
            if (asc[i] > max)
            {
                max = asc[i];
                ch = i + 96;
                index = i;
            }
        }
        for (int i = 0; i < max; i++)
        {
            printf("%c", ch);
        }

        asc[index] = 0;
        nxt++;
    }*/

    //Problem: 02-->
    char ch[100];
    scanf("%s", ch);
    int len = strlen(ch);
    int checker = 0;
    for (int i = 0; i < len; i++)
    {
        if (ch[i] != ch[len - i - 1])
        {
            checker = 1;
            break;
        }
    }
    if (checker)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    // Problem : 03 -->

    // char S3[30];
    // fgets(S3, sizeof(S3), stdin);
    // int i = 0, vow_counter = 0 , cons_coutner;
    // while (S3[i] != '\0')
    // {
    //     if (S3[i] == 'a' || S3[i] == 'e' || S3[i] == 'i' || S3[i] == 'o' || S3[i] == 'u')
    //     {
    //         vow_counter++;
    //     }
    //     else if (S3[i] >= 'a' && S3[i] <= 'z')
    //     {
    //         cons_coutner++;
    //     }

    //     i++;
    // }
    // printf("Vowel - %d\nConsonant - %d",vow_counter, cons_coutner);


    
}