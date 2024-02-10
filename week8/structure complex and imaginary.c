#include <stdio.h>
struct Comp
{
    double real;
    double img;
};

void print_comp(struct Comp c)
{
    printf("%.2lf + %.2lfi", c.real, c.img);
}

struct Comp add_comp(struct Comp a, struct Comp b)
{
    struct Comp ans;
    ans.real = a.real + b.real;
    ans.img = a.img + b.img;
    return ans;
};

struct Comp Multiply_comp(struct Comp a, struct Comp b)
{
    struct Comp ans;
    ans.real = a.real * b.real - a.img * b.img;
    ans.img = a.real * b.img + b.real * a.img;
    return ans;
};

int main()
{
    struct Comp p1;
    struct Comp p2;
    scanf("%lf %lf", &p1.real, &p1.img);
    scanf("%lf %lf", &p2.real, &p2.img);

    print_comp(Multiply_comp(p1, p2));
}