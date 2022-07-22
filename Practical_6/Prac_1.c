#include <stdio.h>

int main()
{
    int a[10],i;
    printf("Name:- Maniya Devagn\n");
    printf("Enrolment no.:-210210116004\n");
    printf("Enter 10 value to the array:-");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Entered value in reverse order:\n");
    for ( i = 9; i >= 0; i--)
    {
        printf("%d  ",a[i]);
    }
    
    
    return 0;
}
