#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, last;
        char ch[200005];
        scanf("%d", &n);
        int index = 0;
        for (int i = 0; n > 0; i++)
        {
            last = n % 10;
            ch[i] = last + 64;
            n = n / 10;
            index++;
        }
        ch[index] = '\0';
        printf("%s\n", ch);
    }
    return 0;
}