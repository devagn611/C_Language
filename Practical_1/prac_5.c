#include <stdio.h>
#include <math.h>
#include <conio.h>


int main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    float radius, area;
    float PI = 3.141592653589793238;
    printf("Enter radius of circle\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of circle : %0.2f\n", area);
    return 0;
}
