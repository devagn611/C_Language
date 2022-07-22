#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    int num;
    printf("Enter a Number to check is it even or odd:-");
    scanf("%d", &num);
    if (num%2==0)
    {
        printf("Number is EVEN.");
    }
    else 
    {
        printf("Number is ODD.");
    }
    
    return 0;
}