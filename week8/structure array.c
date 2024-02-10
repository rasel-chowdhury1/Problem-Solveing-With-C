#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    double mark;
};

void print_student(int n, struct Student s)
{
    printf("\n");
    printf("Info of %d student:\n", n);
    printf("Roll :%d\n", s.roll);
    printf("Name :%s\n", s.name);
    printf("Mark :%.2lf\n", s.mark);
    printf("\n");
}

int main()
{

    struct Student cls[5];

    for (int i = 1; i <= 5; i++)
    {
        printf("Input %d student:\n",i);
        scanf("%d", &cls[i].roll);
        scanf("%s", cls[i].name);
        scanf("%lf", &cls[i].mark);
    }
    // count sum:
    double summ = 0;
    for (int i = 1; i <= 5; i++)
    {
        // print odd roll:
        if (cls[i].roll % 2 == 0)
        {
            summ += cls[i].mark;
            print_student(i, cls[i]);
        }
    }
    printf("%.2lf\n", summ);
}
/*
478862
Sujan
80

493733
Seyam
50

478860
Arif
81

478861
shahadat
32

478852
Ratan
90
*/