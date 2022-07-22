#include <stdio.h>
int main()
{
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
    int *a;
    int n, sum = 0;
    printf("enter the number of element: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &*(a + i));
        sum = sum + *(a + i);
    }
    printf("sum is %d", sum);
}
