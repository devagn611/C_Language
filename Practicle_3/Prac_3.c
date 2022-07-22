#include <stdio.h>
#include <conio.h>

int main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    int num, count1=0,count2=0,ans;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a Number:");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("EVEN\n");
            count1++;
        }
        else
        {
            printf("Odd\n");
            count2++;
        }
    }

    
    printf("Odd: %d\n", count2);
    printf("Even: %d", count1);
    

    return 0;
}
