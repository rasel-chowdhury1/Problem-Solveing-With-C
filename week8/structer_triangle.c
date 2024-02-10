#include <stdio.h>

struct Point
{
    float x;
    float y;
};

struct triangle
{
    struct Point A;
    struct Point B;
    struct Point C;
};

struct Point centroid(struct triangle t)
{
   struct Point ans;
   ans.x = (t.A.x+t.B.x+t.C.x)/3;
   ans.y = (t.A.y+t.B.y+t.C.y)/3;
   return ans;
};


int main()
{
    struct Point p1;
    struct Point p2;
    struct Point p3;

    scanf("%f %f",&p1.x,&p1.y);
    scanf("%f %f",&p2.x,&p2.y);
    scanf("%f %f",&p3.x,&p3.y);

    struct triangle t = {p1,p2,p3};

    struct Point center = centroid(t);

    printf("The centroid is = (%.2f, %.2f)\n",center.x,center.y);
}