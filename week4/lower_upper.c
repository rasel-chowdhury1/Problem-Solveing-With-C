#include <stdio.h>
int main()
{
    char upper[1000];
    fgets(upper, sizeof(upper), stdin);

    int i;
    for (i = 0; upper[i] != '\0'; i++)
    {
        if (upper[i] >= 'A' && upper[i] <= 'Z')
        {
            upper[i] += 32;
        }
        puts(upper);
    }
}