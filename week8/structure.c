#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    int age;
    float weight;
};

int main()
{
    // struct student s = {478862, "Sujan Sarkar", 20, 60.6};

    struct student s1 = {.name = "Sujan Sarkar", .roll = 478862, .age = 12, .weight = 61.2};

    printf("Roll: %d\nName: %s\nAge: %d\nWeight: %.2f", s1.roll, s1.name, s1.roll, s1.weight);
}