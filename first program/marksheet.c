#include <stdio.h>
#include <string.h>
int main()
{
    int roll, phy, chem, ca, total;
    float per;
    char nm[20], div[10];
    printf("Roll No : ");
    scanf("%d", &roll);
    printf("Name of Student : ");
    scanf("%s", nm);
    printf("Marks in Physics: ");
    scanf("%d", &phy);
    printf("Marks in Chemistry: ");
    scanf("%d", &chem);
    printf("Marks in Computer Application: ");
    scanf("%d", &ca);
    total = phy + chem + ca;
    printf("Total Marks = %d\n", total);

    per = total / 3.0;
    if (per >= 60)
    {
        strcpy(div, "First");
    }
    else if (per < 60 && per >= 48)
    {
        strcpy(div, "Second");
    }
    else
    {
        strcpy(div, "Fail");
    }
    printf("Percentage: %5.2f\n", per);
    printf("Division = %s",div);
}