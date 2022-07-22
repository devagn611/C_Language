#include <stdio.h>
#include <conio.h>
void main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    int a, b, c;
    printf("Enter a Number to get maxium of three:-\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && b > c)
    {
        printf("%d is maximum of three.",a);
    }
    else if (b > a && b > c)
    {
        printf("%d is maximum of three",b);
    }
    else
    {
        printf("%d is maxium of three.",c);
        
    }
}