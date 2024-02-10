#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);

    int p_count = 1, m_count = 1;
    for (i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
        {
            m_count++;
        }
        else
        {
            if (m_count > p_count)
            {
                p_count = m_count;
            }
            m_count = 1;
        }
    }
    printf("%d", p_count);

    return 0;
}
