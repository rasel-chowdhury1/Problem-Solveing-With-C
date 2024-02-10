#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int ara[1000], s_ara[1000];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int min, m_index;
    for (j = 0; j < n; j++)
    {
        min = ara[0];
        m_index = 0;
        for (i = 0; i < n; i++)
        {

            if (ara[i] < min)
            {
                min = ara[i];
                m_index = i;
            }
        }
        s_ara[j] = min;
        ara[m_index] = 9999;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", s_ara[i]);
    }
}