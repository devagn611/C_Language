#include <stdio.h>

int main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    int n;    
    printf("Enter a number:");
    scanf("%d", &n);

    for (int i = 17; i <= 45; i++)
    {
        if (i % n == 0)
        {
            printf("%d ", i);

        }
    }

    return 0;
}
