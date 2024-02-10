#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int arg, bra, i, j;
    scanf("%d %d", &arg, &bra);

    if (arg == bra)
    {

        char arge[5], braz[5];
        scanf("%s", arge);
        scanf("%s", braz);
        int a_counter = 0;
        int b_counter = 0;
        for (i = 0, j = 0; arge[i] != '\0', braz[j] != '\0'; i++, j++)
        {
            if (arge[i] == '1')
            {
                a_counter++;
            }
            if (braz[j] == '1')
            {
                b_counter++;
            }
        }

        if (a_counter > b_counter)
        {
            printf("Argentina\n");
        }
        else if (b_counter > a_counter)
        {
            printf("Brazil\n");
        }
        else if (a_counter == b_counter)
        {
            char arge[5], braz[5];
            scanf("%s", arge);
            scanf("%s", braz);
            int a_counter = 0;
            int b_counter = 0;
            for (i = 0, j = 0; arge[i] != '\0', braz[j] != '\0'; i++, j++)
            {
                if (arge[i] == '1')
                {
                    a_counter++;
                }
                if (braz[j] == '1')
                {
                    b_counter++;
                }
            }
            if (a_counter > b_counter)
            {
                printf("Argentina\n");
            }
            else if (b_counter > a_counter)
            {
                printf("Brazil\n");
            }
            else if (a_counter == b_counter)
            {
                char arge[5], braz[5];
                scanf("%s", arge);
                scanf("%s", braz);
                int a_counter = 0;
                int b_counter = 0;
                for (i = 0, j = 0; arge[i] != '\0', braz[j] != '\0'; i++, j++)
                {
                    if (arge[i] == '1')
                    {
                        a_counter++;
                    }
                    if (braz[j] == '1')
                    {
                        b_counter++;
                    }
                }
                if (a_counter > b_counter)
                {
                    printf("Argentina\n");
                }
                else if (b_counter > a_counter)
                {
                    printf("Brazil\n");
                }
                else if (a_counter == b_counter)
                {
                    char arge[5], braz[5];
                    scanf("%s", arge);
                    scanf("%s", braz);
                    int a_counter = 0;
                    int b_counter = 0;
                    for (i = 0, j = 0; arge[i] != '\0', braz[j] != '\0'; i++, j++)
                    {
                        if (arge[i] == '1')
                        {
                            a_counter++;
                        }
                        if (braz[j] == '1')
                        {
                            b_counter++;
                        }
                    }
                    if (a_counter > b_counter)
                    {
                        printf("Argentina\n");
                    }
                    else if (b_counter > a_counter)
                    {
                        printf("Brazil\n");
                    }
                    else if (a_counter == b_counter)
                    {
                        char arge[5], braz[5];
                        scanf("%s", arge);
                        scanf("%s", braz);
                        int a_counter = 0;
                        int b_counter = 0;
                        for (i = 0, j = 0; arge[i] != '\0', braz[j] != '\0'; i++, j++)
                        {
                            if (arge[i] == '1')
                            {
                                a_counter++;
                            }
                            if (braz[j] == '1')
                            {
                                b_counter++;
                            }
                        }
                        if (a_counter > b_counter)
                        {
                            printf("Argentina\n");
                        }
                        else if (b_counter > a_counter)
                        {
                            printf("Brazil\n");
                        }
                    }
                }
            }
        }
    }

    else if (arg > bra)
    {
        printf("Argentina\n");
    }
    else if (bra > arg)
    {
        printf("Brazil\n");
    }

    return 0;
}