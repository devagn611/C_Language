#include <stdio.h>

int main()
{
    printf("My name is Maniya Devagn. \nMy Enrolment Number is 210210116004.\n");
    int a = 0, b = 1, c = 0, n;
    printf("Enter Number:");
    scanf("%d", &n);
    printf("%d %d ", a, b);

    while (c <= n)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        c++;
    }

    // for (int i = 0; i < n; i++){
    //     printf("%d ", a);
    // c = a + b;
    // a = b;
    // b = c;
    // }

    return 0;
}
