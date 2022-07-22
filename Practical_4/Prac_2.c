#include <stdio.h>
#include <conio.h>

int main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    int n, flag;
    printf("Enter any Number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("The entered %d is not a Prime Number.\n",i);
        }
        else
        {
            printf("The entered %d is a Prime Number.\n",i);
        }
    }
    return 0;
}
