#include <stdio.h>
int main()
{
    int math, phy, chem, sub, math_phy;
    printf("Input the marks obtained in Math: ");
    scanf("%d", &math);
    printf("Input the marks obtained in Phy: ");
    scanf("%d", &phy);
    printf("Input the marks obtained in Chem: ");
    scanf("%d", &chem);
    sub = math + phy + chem;
    printf("Input the marks obtained in Three Subsjects: %d\n", sub);
    math_phy = math + phy;
    printf("Input the marks obtained in Math and Physics: %d\n", math_phy);

    if (math >= 65)
    {
        if (phy >= 55)
        {
            if (chem >= 50)
            {
                if (sub >= 190 && math_phy >= 140)
                {
                    printf("The candidate is eligible for Addmission.\n");
                }
                else
                {
                    printf("The candidate is not eligible for Admission.\n");
                }
            }
            else
            {
                printf("The candidate is not eligible for Admission.\n");
            }
        }
        else
        {
            printf("The candidate is not eligible for Admission.\n");
        }
    }
    else
    {
        printf("The candidate is not eligible for Admission.\n");
    }
}