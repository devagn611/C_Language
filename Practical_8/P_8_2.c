#include <stdio.h>

int sum(int);

int main()
{
    int n, ans, s, a;
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
    printf("enter a 5 digit number:-");
    scanf("%d", &n);
    ans = sum(n);
    printf("sum of 5 digit num is: %d", ans);
}

int sum(int n)
{
    
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10 + sum(n / 10));
    }
}