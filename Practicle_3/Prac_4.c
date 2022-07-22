#include <stdio.h>
#include <conio.h>

int main()
{
    printf("My name is Maniya Devagn. \n My Enrolment number is 210210116004.");
    int n, ans=0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        ans += i;
    }
    printf("The Sum of 1 to %d is: %d", n, ans);
    return 0;
}
