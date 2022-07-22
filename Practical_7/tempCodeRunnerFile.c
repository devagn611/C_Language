#include <stdio.h>

int fibbo();
int main()
{
    int n;
    printf("\n Name - Maniya Devagn");
    printf("\n enrollment number - 210210116004");
    printf("\n");
    printf("enter the value n ");
    scanf("%d", &n);

    printf("series=");
    fibbo(n);

    return 0;
}

int fibbo(int n)
{
    int c, a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        printf(" %d", a);
        c = a + b;
        a = b;
        b = c;
    }
}
