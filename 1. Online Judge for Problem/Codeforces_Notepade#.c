#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, exist = 0;
        scanf("%d", &n);
        char s[200005];
        scanf("%s", s);
        for (int i = 0; i < n - 1; i++)
        {
            int found = 0;
            char a = s[i], b = s[i + 1];
            for (int j = i + 2; j < n - 1; j++)
            {
                if (s[j] == a && s[j + 1] == b)
                {
                    found = 1;
                    break;
                }
            }
            if (found)
            {
                exist = 1;
                break;
            }
        }
        if (exist)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}