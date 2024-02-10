#include <stdio.h>
struct manhattan
{
    int x;
    int y;
};
int manhattan_distance(struct manhattan p1, struct manhattan p2)
{
    int result = abs(p1.x - p2.x) + abs(p1.y - p2.y);
    return result;
};
int main()
{
    struct manhattan p1;
    struct manhattan p2;
    printf("Take input x1 and y1:\n");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Take input x2 and y2:\n");
    scanf("%d %d", &p2.x, &p2.y);
    int distance = manhattan_distance(p1, p2);
    printf("Manhattan distance = %d\n", distance);
}