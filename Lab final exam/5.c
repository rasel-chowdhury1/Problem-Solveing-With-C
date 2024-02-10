#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, s;
    scanf("%d %d", &n, &s);
    int dif_s_bte_n = s - n;
    int ans = dif_s_bte_n / 2;
    printf("%d\n", ans);
    return 0;
}
