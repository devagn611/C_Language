#include <stdio.h>
#include <conio.h>

int main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    int choose;
    printf("Enter Choice:-");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Please make correct choice.");
        break;
    }
    return 0;
}
