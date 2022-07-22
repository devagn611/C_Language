#include <stdio.h>

int rev(int *a, int *b);
int main()
{
    int n, i, b, c, a;
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
    printf("enter the size of an array:-");
    scanf("%d", &n);
    printf("enter the array element:-\n");
    int num[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i<n/2; i++)
    {
        rev(&num[i],&num[n-i-1]);
    }
    for (i =0; i <n; i++)
    {
        printf("\t%d", num[i] );
    }
    return 0;
}
int rev(int *a, int *b)
{
   
    int c = *a;
    *a = *b;
    *b = c;
    
}