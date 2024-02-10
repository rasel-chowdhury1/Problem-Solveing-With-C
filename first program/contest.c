#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    if ((A == B && A == C && B == C && A !=0))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
