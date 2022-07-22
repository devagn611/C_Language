#include <stdio.h>
#include <conio.h>

int main()
{
    printf("My name is Maniya Devagn. \n My Enrolment number is 210210116004.\n");
    int n, ans=0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i+=2)
    {
        ans += i;
    }
    printf("The Sum of 1 to %d is: %d", n, ans);
    return 0;
}
