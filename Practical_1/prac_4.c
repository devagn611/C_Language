#include <stdio.h>
#include <math.h>

int main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    float Cent,fahr;
    printf("Enter value of Fahrenheit:-");
    scanf("%f",&fahr);
    Cent = (5.0/9.0)*(fahr-32);
    printf("%.2f C",Cent);
    return 0;
}