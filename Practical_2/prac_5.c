#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    float b;
    int a, count = 1;
    L:
    printf("Enter a number:- ");
    scanf("%d", &a);
    b = sqrt(a);
    printf("The square root of %d is:- %.3f\n", a, b);
    a++;
    count++;
    if (count <= 5)
    {
        goto L;
    }
    return 0;
}
