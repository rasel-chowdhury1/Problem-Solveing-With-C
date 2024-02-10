#include <stdio.h>
#include <math.h>

float fOF_func(float x, float y);
int absulate(int x);
int main()
{

    int x, y;
    scanf("%d %d", &x, &y);

    float ans = fOF_func(x, y);

    printf("%f ", ans);

    return 0;
}

float fOF_func(float x, float y)
{
    float a = (absulate(x - 3) + (y + 4) * (y + 4));
    return sqrt(a);
}
int absulate(int x)
{
    if (x > 0)
        return x;

    return (-1) * x;
}