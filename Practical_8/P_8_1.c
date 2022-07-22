#include <stdio.h>
#include <string.h>

int main()
{
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
    char d[30];

    int i;
    printf("enter a word-");
    scanf("%s", d);

    printf("reverse string - %s", strrev(d));
    return 0;
}
