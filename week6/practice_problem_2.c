#include <stdio.h>
#include <string.h>
int isPrimeNumber(int num);

int is_binary_or_not(char ch[])
{
    // Problem: 01-->
    int len = strlen(ch);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (ch[i] == '1' || ch[i] == '0')
            count++;
        else
            return 0;
    }
    return 1;
}

int main()
{
    // Problem: 01-->
    /*char str[27];
    scanf("%s", str);

    if (is_binary_or_not(str) == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }*/

    // Problem: 02-->
    /*int i, j, n;
    int counter = 2;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            while (!isPrimeNumber(counter))
            {
                counter++;
            }
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }*/

    //Problem: 03-->
    
    /*char str1[50000];
    int n, i, j = 0;
    scanf("%d", &n);
    for (int p = 0; p < n; p++)
    {
        char str2[500000];
        scanf("%s", str2);

        int len = strlen(str2);

        for (int i = 0; i <= len; i++)
        {
            str1[j] = str2[i];
            j++;
            if (str2[i] == '\0')
            {
                str1[j - 1] = ' ';
                str1[j] = '\0';
            }
        }
    }
    printf("%s", str1);*/

    //Problem: 04-->
}

int isPrimeNumber(int num)
{
    // Problem: 02-->
    int i, isPrime = 1;
    for (i = 2; i <= (num / 2); i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1 || num == 2)
        return 1;
    return 0;
}