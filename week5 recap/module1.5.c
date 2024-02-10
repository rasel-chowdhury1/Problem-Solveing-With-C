#include <stdio.h>
int main()
{
    // Problem: 01-->

    int n, i;
    scanf("%d", &n);
    if (n > 0)
    {
        for (i = n; i >= (-n); i--)
        {
            printf("%d ", i);
        }
    }
    if (n < 0)
    {
        for (i = n; i <= (-n); i++)
        {
            printf("%d ", i);
        }
    }

    // Problem: 02-->
    /*
    int n, i, j;
    scanf("%d", &n);
    int stars = n;
    int space = n - 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (j = 0; j < stars; j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
    }
    */

    // Problem: 03-->
    /*
    int n, i, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        int last_digit = arr[i] % 10;
        sum += last_digit;
    }
    printf("Sum = %d", sum);
    */

    // Problem: 04-->
    /*
    char S[27];
    scanf("%s", S);
    for (int i = 0; i < S[i]; i++)
    {
        if (S[i] == S[i + 1])
        {
            continue;
        }
        else
        {
            printf("%c", S[i]);
        }
    }*/

    // Problem: 05-->
    /*
    int a, b;
    char operator;
    scanf("%c", &operator);
    scanf("%d %d", &a, &b);
    if (operator== '+')
        printf("%d\n", a + b);
    else if (operator== '-')
        printf("%d\n", a - b);
    else if (operator== '*')
        printf("%d\n", a * b);
    else if (operator== '/')
        printf("%d\n", a / b);
    */

    // Problem: 06-->
    /*
    int n;
    scanf("%d", &n);
    if (n % 400 == 0)
        printf("YES\n");
    else if (n % 100 == 0)
        printf("NO\n");
    else if (n % 4 == 0)
        printf("YES\n");
    else
        printf("NO\n");
    */
}