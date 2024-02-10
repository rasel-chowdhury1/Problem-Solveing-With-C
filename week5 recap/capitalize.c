#include <stdio.h>
#include <string.h>
int main()
{
    char cap[1000];
    fgets(cap, sizeof(cap), stdin);

    int len = strlen(cap);
    int flag = 1;
    for (int i = 0; i < len; i++)
    {
        if (!(cap[i] >= 'a' && cap[i] <= 'z'))
        {
            flag = 1;
        }
        if ((cap[i] >= 'A' && cap[i] <= 'Z'))
        {
            flag = 0;
        }
    }
    

    printf("%s", cap);

    return 0;
}