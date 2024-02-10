#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int arg, bra;
    scanf("%d %d", &arg, &bra);

    if (arg == bra)
    {
        printf("Draw\n");
    }
    else if (arg > bra)
    {
        printf("Argentina\n");
    }
    else
    {
        printf("Brazil\n");
    }

    return 0;
}