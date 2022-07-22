#include <stdio.h>

int findlen(char d[], int n);
int main()
{
    char d[20];
    int c, a;
    printf("\n Name - Maniya Devagn");
    printf("\n Enrollment number - 210210116004");
    printf("\n");
    printf("Enter a string:-");
    scanf("%s", d);
    c = findlen(d, 20);
    printf("The length of the string is: %d", c);
    return 0;
}
int findlen(char d[], int n)
{
    int c = 0;
    while (d[c] != '\0')
    {
        c++;
    }
    return c;
}