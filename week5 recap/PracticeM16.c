#include <stdio.h>
int main()
{
    // Problem: 01
    /*int numerator, denominator;
    scanf("%d %d", &numerator, &denominator);

    if (numerator != 0)
    {
        int quotient = numerator / denominator;
        int reminder = numerator % denominator;
        printf("quotient = %d, reminder = %d", quotient, reminder);
    }*/

    // int n1, n2;
    // printf("Input 1st number(positive or negative): ");
    // scanf("%d", &n1);
    // printf("Input 2nd number(positive or negative): ");
    // scanf("%d", &n2);
    // printf("The absolute value of 1st number is :%u\nThe absolute value of 2nd number is :%u", n1, n2);

    // float h,w,d;
    // scanf("%f %f",&h,&w);
    // d = 2*(h+w);
    // printf("%f",d);

    int hours, minutes;
    scanf("%d %d",&hours,&minutes);

    int h_to_min = 60*hours;
    int sum = minutes+h_to_min;
    printf("%d",sum);

}