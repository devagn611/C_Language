#include <stdio.h>

int main()
{
    int i,j,c='A';
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j<=i; j++)
        {
            printf("%c",c);
        }c++;
        printf("\n");
    }
    
    return 0;
}