#include <stdio.h>


int main()
{
    int i,j;
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}
