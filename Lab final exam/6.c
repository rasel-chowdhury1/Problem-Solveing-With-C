#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int low, high, i, flag;
        scanf("%d %d", &low, &high);
        while (low <= high)
        {
            flag = 0;

            if (low == 1)
            {
                flag = 0;
            }

            for (i = 2; i <= low / 2; ++i)
            {

                if (low % i == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
                printf("%d ", low);
            ++low;
            
        }
        printf("\n");
    }

    return 0;
}
