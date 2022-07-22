//  to print multiplication table
#include <stdio.h>
#include <conio.h>

int main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    int num, mul;
    printf("Enter any Number:");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        mul = num * i;
        printf("%d x %d = %d\n",num,i,mul);
    }

    return 0;
}
