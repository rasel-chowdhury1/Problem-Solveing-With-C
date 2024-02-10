#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, t, i, count, coun;
    char s[1005];
    scanf("%d", &t);

    while (t--)
    {
        i = 0;
        count = 0;
        coun = 0;
        scanf("%d", &n);
        scanf("%s", &s[i]);
        for (i = 0; i < n; i++)
        {
            if (s[i] == '1' && s[i + 1] == '0')
            {
                count++;
            }
            if (s[i] == '0' && s[i + 1] == '1')
            {
                coun++;
            }
        }
        int sum = count + coun;
        printf("%d\n", sum);
    }

    return 0;
}
