#include <stdio.h>
#include <string.h>

int str_num(char str[1000])
{
    int cnt = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
        cnt += (str[i] - 'a') + 1;
    return cnt;
}
int is_pow_2(int n)
{
    int count = 0;
    while (n != 1)
    {
        if (n % 2 != 0)
            return 0;
        count++;
        n = n / 2;
    }
    return count;
}
int main()
{
    char str[1000];
    scanf("%s", str);
    if (is_pow_2(str_num(str)) == 0)
        printf("No\n");
    else if (is_pow_2(str_num(str)) > 0)
        printf("Yes\n2^%d", is_pow_2(str_num(str)));
}
