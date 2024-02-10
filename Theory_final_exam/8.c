#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    int marks; // it can be float.
};
void displaying(struct Student s)
{
    printf("Name: %s\nRoll number: %d\nMarks: %d", s.name, s.roll, s.marks);
}
int main()
{
    struct Student stu;
    printf("Enter Information:\n");
    printf("Enter name: ");
    scanf(" %s", &stu.name);

    printf("Enter roll number: ");
    scanf("%d", &stu.roll);

    printf("Enter marks: ");
    scanf("%d", &stu.marks);

    printf("Displaying Information:\n");
    displaying(stu);

    return 0;
}