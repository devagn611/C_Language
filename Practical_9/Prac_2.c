#include <stdio.h>
int main()
{
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
    int m[10], *a;
    printf("Enter the Array Element:-");
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &m[i]);
    }
    a = &m[0];
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", *(a + i));
    }
    
    return 0;
}

