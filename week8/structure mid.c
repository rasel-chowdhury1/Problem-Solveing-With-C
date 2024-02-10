#include <stdio.h>
struct mid_num
{
    float x;
    float y;
};

struct mid_num mid(struct mid_num a, struct mid_num b)
{
    struct mid_num mid_value;
    mid_value.x = (a.x + b.x) / 2;
    mid_value.y = (a.y + b.y) / 2;
    return mid_value;
};
int main()
{
    struct mid_num p1;
    struct mid_num p2;

    printf("Enter x1 and y2:\n");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter x2 and y2:\n");
    scanf("%f %f", &p2.x, &p2.y);
    struct mid_num p3;
    p3 = mid(p1, p2);

    printf("%0.2f %0.2f\n", p3.x, p3.y);
}