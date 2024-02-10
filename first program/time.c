#include <stdio.h>
int main()
{
    int start, end;
    scanf("%d %d", &start, &end);

    while (start != end)
    {
        if (start >= 24)
        {
            start = start % 24;
        }
        printf("%d ",start);
        start++;
        if (start == end)
        {
            printf("%d ", start);
        }
    }

   
}