#include <stdio.h>

char grade(int n)
{
    if (n <= 100 && n >= 80)
        return 'A';
    else if (n <= 79 && n >= 60)
        return 'B';
    else if (n <= 59 && n >= 40)
        return 'C';
    else if (n <= 39 && n >= 0)
        return 'F';
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%C", grade(n));
    return 0;
}