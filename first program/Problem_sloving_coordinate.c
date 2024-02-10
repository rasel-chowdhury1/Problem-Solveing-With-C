#include <stdio.h>
int main()
{
    int X, Y;
    printf("Test Data: ");
    scanf("%d %d", &X, &Y);

    if (X == 0 && Y == 0)
    {
        printf("The coordinate point (%d, %d) lies at the Origin.", X, Y);
    }
    else if (X > 0 && Y > 0)
    {
        printf("The coordinate point (%d, %d) lies in the First quadrant.", X, Y);
    }

    else if (X < 0 && Y > 0)
    {
        printf("The coordinate point (%d, %d) lies in the Second quadrant.", X, Y);
    }
    else if (X < 0 && Y < 0)
    {
        printf("The coordinate point (%d, %d) lies in the Third quadrant.", X, Y);
    }
    else
    {
        printf("The coordinate point (%d, %d) lies in the Fourth quadrant.", X, Y);
    }
}