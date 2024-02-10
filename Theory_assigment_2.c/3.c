#include <stdio.h>
int check1(char a, char x[])
{
    int i;
    int len = strlen(x);
    for (i = 0; i < len; i++)
    {
        if (x[i] == a)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{

    char number_input[1000];
    scanf("%s", number_input);

    int check_1 = check1('1', number_input);
    int check_7 = check1('7', number_input);
    int check_9 = check1('9', number_input);

    if (check_1 == 1 && check_7 == 1 && check_9 == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}