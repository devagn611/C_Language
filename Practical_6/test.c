#include <stdio.h>
int main()
{
    int n;
    char ch;
    printf("Enter the number of rows and any Character to print the pattern\n");
    scanf("%d %c", &n, &ch);
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", ch);
        }

        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", ch);
        }

        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
