#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int first = 0, sec = 1, counter = 0;
    while (counter < n)
    {
        int fibo;
        if (counter <= 1)
        {
            fibo = counter;
        }
        else
        {
            fibo = first + sec;
            first = sec;
            sec = fibo;
        }
        printf("%d ", fibo);
        counter++;
    }
    return 0;
}