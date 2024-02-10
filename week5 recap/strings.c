#include <stdio.h>
#include <string.h>
int main()
{
    char petya[101];
    fgets(petya, sizeof(petya), stdin);

    int len = strlen(petya);

    for (int i = 0; i < len-1; i++)
    {
        if (petya[i] >= 'A' && petya[i] <= 'Z')
        {
            petya[i] += 32;
        }

        if (!(petya[i] == 'a' || petya[i] == 'e' || petya[i] == 'i' || petya[i] == 'o' || petya[i] == 'u'))
        {
            printf(".%c", petya[i]);
        }
    }
    return 0;
}