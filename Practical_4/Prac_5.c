#include <stdio.h>
#include <math.h>

int main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    int n, ans = 0, rem;
    printf("Enter a Number:");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        rem = n % 10;
        ans = ans * 10 + rem;
        n = n / 10;
    }

    // while (n != 0)
    // {
    //     rem= n % 10;
    //     ans = ans * 10 + rem;
    //     n = n/10;
    // }
    printf("%d", ans);
    return 0;
}
