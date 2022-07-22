#include <stdio.h>

int main()
{
    int i, j;
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
    for (i = 0; i <= 5; i++)
    {
        for (int k = 1; k <= 5-i; k++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
         
        printf("\n");
    }

    return 0;
}
