#include <stdio.h>
#include <conio.h>


int main()
{
    printf("My name is Maniya Devagn. \n My Enrolment number is 210210116004.\n");
    int n,sum=0;    
   
    for (int i = 100; i <= 200; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d ", i);
            sum+=i;
        }
    }
    printf("\nThe Sum of Number divisiable by 5 is %d",sum);
    return 0;
}