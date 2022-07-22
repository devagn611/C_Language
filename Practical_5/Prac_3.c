#include <stdio.h>

int main()
{
    int i, j, k;
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
   for ( i = 1; i <=5; i++)
   {
        for ( k = 0; k <=i; k++)
        {
            printf(" ");
        }
        for ( j = 5; j >=i; j--)
        {
            printf("*");
        }
        printf("\n");
   }
   

    return 0;
}
