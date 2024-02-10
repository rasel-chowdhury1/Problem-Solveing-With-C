#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int *p = &a;
    int *q = &b;
    float average;
    int *x = &average;
    *x = *p + *q;
    average = *x / 2.0;
    printf("%.3f", average);
}