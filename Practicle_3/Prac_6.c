#include <stdio.h>
#include <conio.h>

int main()
{
    printf("My name is Maniya Devagn. \n My Enrolment number is 210210116004.\n");
    int num, i;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("1");
    for (i = 2; i <= num; i++)
    {
        printf(" + 1/%d", i);
    }
    return 0;
   
}
