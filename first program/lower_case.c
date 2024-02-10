#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    if (N == 0)
    {
        printf("zero\n");
    }

    else if(N > 0 && N == 1)
    {
        printf("one");
    }

    else if (N > 1 && N == 2)
    {
        printf("two");
    }
    else if (N > 1 && N == 3)
    {
        printf("three");
    }
    else if (N > 1 && N == 4)
    {
        printf("four");
    }
    else if (N > 1 && N == 5)
    {
        printf("five");
    }
    else if (N > 1 && N == 6)
    {
        printf("six");
    }
    else if (N > 1 && N == 7)
    {
        printf("seven");
    }
    else if (N > 1 && N == 8)
    {
        printf("eight");
    }
    else if (N > 1 && N == 9)
    {
        printf("nine");
    }
    else
    {
        if (N < 0 && N != 0)
        {
            printf("Negative");
        }
        else
        {
            printf("Greater than 9");
        }
    }

    return 0;
}
