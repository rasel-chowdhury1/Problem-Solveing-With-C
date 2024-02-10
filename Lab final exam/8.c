#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &str[i]);
    }

    int large = 26;
    int freq[large + 1];

    for (int i = 0; i <= large; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        freq[(str[i] - 'a') + 1]++;
    }

    int uni = 0;
    for (int i = 0; i <= large; i++)
    {
        if (freq[i] == 1)
        {
            uni++;
        }
    }
    printf("%d\n", uni);

    return 0;
}
