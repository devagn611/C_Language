#include <stdio.h>
#include <math.h>

int main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    int a1, a2, a3, num, n, i;

    printf("Armstrong Numbers between 0 TO 999 are : ");
    for (i = 0; i <= 999; i++)
    {
        a1 = i / 100;
        a3 = i % 10;
        num = i / 10;
        a2 = num % 10;
        // n = pow(a1, 3) + pow(a2, 3) + pow(a3, 3);
        n = a1 * a1 * a1 + a2 * a2 * a2 + a3 * a3 * a3;
        if (i == n)
            printf("%d ", n);
    }
    return 0;
}